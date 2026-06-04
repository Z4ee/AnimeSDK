#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET UNITYSDK_OFFSET(0x19549BB0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_B5CB0B4D13D4509F_OFFSET UNITYSDK_OFFSET(0x19549AE0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_BEDDE5E59E131318_OFFSET UNITYSDK_OFFSET(0x19549D20)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_ED0E1079B55B9BA0_OFFSET UNITYSDK_OFFSET(0x19549DA0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x19549B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFuncUnlockCheck_TypeDefinitionIndex = 19647;

	class ByFuncUnlockCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5CB0B4D13D4509F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_B5CB0B4D13D4509F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B697906E3FFE90D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEDDE5E59E131318(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_BEDDE5E59E131318_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED0E1079B55B9BA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_ED0E1079B55B9BA0_OFFSET))(a1, a2);
		}
	};
}
