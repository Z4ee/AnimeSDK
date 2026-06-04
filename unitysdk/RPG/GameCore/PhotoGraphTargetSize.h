#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_183CDDB08970E2FA_OFFSET UNITYSDK_OFFSET(0x19A0A570)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_870379C94EB5CF3A_OFFSET UNITYSDK_OFFSET(0x19A0A6B0)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0A6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTargetSize_TypeDefinitionIndex = 20433;

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

		static ::System::Void Method_2_870379C94EB5CF3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_METHOD_2_870379C94EB5CF3A_OFFSET))(a1, a2);
		}
	};
}
