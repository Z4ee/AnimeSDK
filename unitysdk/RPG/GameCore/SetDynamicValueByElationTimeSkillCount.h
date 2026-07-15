#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E15B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_METHOD_4_C8FAF8F23073B0E6_OFFSET UNITYSDK_OFFSET(0x1C2E1400)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_METHOD_4_FC256F2E9E0A7CA9_OFFSET UNITYSDK_OFFSET(0x1C2E1440)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E1430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByElationTimeSkillCount_TypeDefinitionIndex = 21802;

	class SetDynamicValueByElationTimeSkillCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8FAF8F23073B0E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_METHOD_4_C8FAF8F23073B0E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC256F2E9E0A7CA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_METHOD_4_FC256F2E9E0A7CA9_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
