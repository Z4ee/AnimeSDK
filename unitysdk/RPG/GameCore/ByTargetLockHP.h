#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_388C03259B2D7935_OFFSET UNITYSDK_OFFSET(0x1B2C15D0)
#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_47068865CC762F93_OFFSET UNITYSDK_OFFSET(0x1B2C1330)
#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_76D9186D63DAC3CA_OFFSET UNITYSDK_OFFSET(0x1B2C1380)
#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_87D8EFEF182A4E23_OFFSET UNITYSDK_OFFSET(0x1B2C1590)
#define RPG_GAMECORE_BYTARGETLOCKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C1370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockHP_TypeDefinitionIndex = 22771;

	class ByTargetLockHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::LockHPStrength Strength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_47068865CC762F93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_47068865CC762F93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76D9186D63DAC3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_76D9186D63DAC3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87D8EFEF182A4E23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_87D8EFEF182A4E23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_388C03259B2D7935(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_388C03259B2D7935_OFFSET))(a1, a2);
		}
	};
}
