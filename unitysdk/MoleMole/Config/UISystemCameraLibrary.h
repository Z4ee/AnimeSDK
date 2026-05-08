#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CameraMoveTime; }
namespace MoleMole::Config { class CameraTargetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_UISYSTEMCAMERALIBRARY_FINDCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x16AABD00)
#define MOLEMOLE_CONFIG_UISYSTEMCAMERALIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAC020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UISystemCameraLibrary_TypeDefinitionIndex = 49140;

	class UISystemCameraLibrary : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CameraTargetConfig*>* Library; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::CameraMoveTime*>* CameraMoveLibrary; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UISYSTEMCAMERALIBRARY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::CameraMoveTime* FindCameraMove(::System::String* from, ::System::String* to)
		{
			return ((::MoleMole::Config::CameraMoveTime*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UISYSTEMCAMERALIBRARY_FINDCAMERAMOVE_OFFSET))(this, from, to);
		}
	};
}
