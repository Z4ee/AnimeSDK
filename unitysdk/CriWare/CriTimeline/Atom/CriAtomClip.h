#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Atom/CriAtomClipBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSourceBase; }
namespace CriWare::CriTimeline::Atom { class CriAtomBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F67ED50)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETACB_OFFSET UNITYSDK_OFFSET(0x1F67EE30)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GETCUESHEET_OFFSET UNITYSDK_OFFSET(0x1F67EE40)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_ACBPATH_OFFSET UNITYSDK_OFFSET(0x1F67EE50)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_AWBPATH_OFFSET UNITYSDK_OFFSET(0x1F67EEE0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_GET_CUENAME_OFFSET UNITYSDK_OFFSET(0x1F67EE20)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_SETCUEFROMATOMSOURCE_OFFSET UNITYSDK_OFFSET(0x1F67EF70)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F67F040)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClip_TypeDefinitionIndex = 35040;

	class CriAtomClip : public ::CriWare::CriTimeline::Atom::CriAtomClipBase
	{
	public:
		::System::String* cueSheet; // 0x28
		::System::String* cueName; // 0x30
		::CriWare::CriTimeline::Atom::CriAtomBehaviour* templateBehaviour; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
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
