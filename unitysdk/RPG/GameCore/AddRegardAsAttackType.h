#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDREGARDASATTACKTYPE_METHOD_3_237B720EDBA8BC16_OFFSET UNITYSDK_OFFSET(0x1BE09CD0)
#define RPG_GAMECORE_ADDREGARDASATTACKTYPE_METHOD_3_7E23866A22331543_OFFSET UNITYSDK_OFFSET(0x1BE09D10)
#define RPG_GAMECORE_ADDREGARDASATTACKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE09D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddRegardAsAttackType_TypeDefinitionIndex = 22377;

	class AddRegardAsAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackType OriginalAttackType; // 0x28
		::RPG::GameCore::AttackType RegardAttackType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_237B720EDBA8BC16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddRegardAsAttackType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddRegardAsAttackType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE_METHOD_3_237B720EDBA8BC16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E23866A22331543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE_METHOD_3_7E23866A22331543_OFFSET))(a1, a2);
		}
	};
}
