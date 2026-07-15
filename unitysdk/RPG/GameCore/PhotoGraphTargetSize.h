#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_183CDDB08970E2FA_OFFSET UNITYSDK_OFFSET(0x1B4C47F0)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_2718462ABEA87C89_OFFSET UNITYSDK_OFFSET(0x1B4C4930)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C4920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTargetSize_TypeDefinitionIndex = 20848;

	class PhotoGraphTargetSize : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Width; // 0x10
		::System::Single Height; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_183CDDB08970E2FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_183CDDB08970E2FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2718462ABEA87C89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_2718462ABEA87C89_OFFSET))(a1, a2);
		}
	};
}
