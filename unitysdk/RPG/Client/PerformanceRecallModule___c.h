#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PERFORMANCERECALLMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F41AD0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F41B10)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___C___REFRESHUNLOCKEDCONDITIONDATA_B__23_0_OFFSET UNITYSDK_OFFSET(0x17F41B20)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRecallModule___c_TypeDefinitionIndex = 63489;

	class PerformanceRecallModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallModule___c_TypeDefinitionIndex)->GetStaticField(0x65B30);
		}
		static ::RPG::Client::PerformanceRecallModule___c** StaticGet___9()
		{
			return (::RPG::Client::PerformanceRecallModule___c**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallModule___c_TypeDefinitionIndex)->GetStaticField(0x65B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshUnlockedConditionData_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C___REFRESHUNLOCKEDCONDITIONDATA_B__23_0_OFFSET))(this);
		}
	};
}
