#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_5988BAF5157DD7AF_OFFSET UNITYSDK_OFFSET(0x1DB399F0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_A005444ED608D692_OFFSET UNITYSDK_OFFSET(0x1DB39BA0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_A6B69EA603A02AE5_OFFSET UNITYSDK_OFFSET(0x1DB39BD0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_E1CF2C68C64CB2AE_OFFSET UNITYSDK_OFFSET(0x1DB399B0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB399E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsTakeOutState_TypeDefinitionIndex = 21299;

	class ST_ElfByIsTakeOutState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfTakeOutState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E1CF2C68C64CB2AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_E1CF2C68C64CB2AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5988BAF5157DD7AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_5988BAF5157DD7AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A005444ED608D692(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_A005444ED608D692_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6B69EA603A02AE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_A6B69EA603A02AE5_OFFSET))(a1, a2);
		}
	};
}
