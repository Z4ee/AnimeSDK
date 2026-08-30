#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE_METHOD_3_0A0373E5E86373C6_OFFSET UNITYSDK_OFFSET(0x1CFDB180)
#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE_METHOD_3_DE7AAEEFA9C443AF_OFFSET UNITYSDK_OFFSET(0x1CFDB140)
#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDB170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRegardAsAttackType_TypeDefinitionIndex = 22948;

	class ClearRegardAsAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackType OriginalAttackType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE7AAEEFA9C443AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRegardAsAttackType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRegardAsAttackType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE_METHOD_3_DE7AAEEFA9C443AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A0373E5E86373C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE_METHOD_3_0A0373E5E86373C6_OFFSET))(a1, a2);
		}
	};
}
