#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole { class ComicImgStyle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_COMICIMGSTYLECONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8663D0)
#define MOLEMOLE_COMICIMGSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E866430)

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgStyleConfig_TypeDefinitionIndex = 32139;

	class ComicImgStyleConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ComicImgStyle*>* styleDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::ComicImgStyleConfig* Clone()
		{
			return ((::MoleMole::ComicImgStyleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSTYLECONFIG_CLONE_OFFSET))(this);
		}
	};
}
