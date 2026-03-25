#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DESTROYNPC_METHOD_3_6709E7826F7B1E26_OFFSET UNITYSDK_OFFSET(0x171541F0)
#define RPG_GAMECORE_DESTROYNPC_METHOD_3_B0A4FDDCCE7CE880_OFFSET UNITYSDK_OFFSET(0x17154270)
#define RPG_GAMECORE_DESTROYNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17154240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyNPC_TypeDefinitionIndex = 20118;

	class DestroyNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::Boolean Hide; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* DestroyList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6709E7826F7B1E26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC_METHOD_3_6709E7826F7B1E26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0A4FDDCCE7CE880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC_METHOD_3_B0A4FDDCCE7CE880_OFFSET))(a1, a2);
		}
	};
}
