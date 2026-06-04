#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OICubeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLECUBE_RESETKEYINFO_OFFSET UNITYSDK_OFFSET(0xC5BACC0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLECUBE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5BAD10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleCube_TypeDefinitionIndex = 73232;

	class OpticalIllusionPuzzleCube : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::OICubeType CubeType; // 0x18
		::System::Boolean IgnoreCover; // 0x1C
		::System::UInt32 Key; // 0x20
		::System::UInt32 ProjectKey; // 0x24
		::System::Single Depth; // 0x28
		::System::UInt32 InitKey; // 0x2C
		::System::UInt32 InitProjectKey; // 0x30
		::System::Single InitDepth; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLECUBE__CTOR_OFFSET))(this);
		}

		::System::Void ResetKeyInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLECUBE_RESETKEYINFO_OFFSET))(this);
		}
	};
}
