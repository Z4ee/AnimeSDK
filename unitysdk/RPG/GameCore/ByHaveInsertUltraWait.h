#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_1C6C9469F4EFF6B9_OFFSET UNITYSDK_OFFSET(0x1874B200)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_82EAAF9CE54C4EF7_OFFSET UNITYSDK_OFFSET(0x1874B2E0)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1874B280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveInsertUltraWait_TypeDefinitionIndex = 22517;

	class ByHaveInsertUltraWait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType FirstType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C6C9469F4EFF6B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_1C6C9469F4EFF6B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82EAAF9CE54C4EF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_82EAAF9CE54C4EF7_OFFSET))(a1, a2);
		}
	};
}
