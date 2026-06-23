#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Atom/CriAtomClipBase.h"

namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSourceBase; }
namespace System { class String; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETACB_OFFSET UNITYSDK_OFFSET(0x1E312B20)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETCUESHEET_OFFSET UNITYSDK_OFFSET(0x1E312B30)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_ACBPATH_OFFSET UNITYSDK_OFFSET(0x1E312B40)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_AWBPATH_OFFSET UNITYSDK_OFFSET(0x1E312BD0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_CUENAME_OFFSET UNITYSDK_OFFSET(0x1E312B10)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_SETCUEFROMATOMSOURCE_OFFSET UNITYSDK_OFFSET(0x1E312C60)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E312D30)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClip_TypeDefinitionIndex = 34389;

	class CriAtomClip : public ::CriWare::CriTimeline::Atom::CriAtomClipBase
	{
	public:
		::System::String* cueSheet; // 0x30
		::System::String* cueName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET))(this);
		}

		::System::String* get_CueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_CUENAME_OFFSET))(this);
		}

		::CriWare::CriAtomExAcb* GetAcb()
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETACB_OFFSET))(this);
		}

		::CriWare::CriAtomCueSheet* GetCueSheet()
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETCUESHEET_OFFSET))(this);
		}

		::System::String* get_AcbPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_ACBPATH_OFFSET))(this);
		}

		::System::String* get_AwbPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_AWBPATH_OFFSET))(this);
		}

		::System::Void SetCueFromAtomSource(::CriWare::CriAtomSourceBase* atomSource)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomSourceBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_SETCUEFROMATOMSOURCE_OFFSET))(this, atomSource);
		}
	};
}
