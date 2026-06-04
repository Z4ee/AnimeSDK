#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_METHOD_3_73FE11397DD8D486_OFFSET UNITYSDK_OFFSET(0x19E561B0)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_METHOD_3_980409FCC60114B5_OFFSET UNITYSDK_OFFSET(0x19E56230)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E56200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorSavedValueChange_TypeDefinitionIndex = 19564;

	class WaitFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73FE11397DD8D486(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorSavedValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorSavedValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_METHOD_3_73FE11397DD8D486_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_980409FCC60114B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_METHOD_3_980409FCC60114B5_OFFSET))(a1, a2);
		}
	};
}
