#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_METHOD_2_4985D1D9745312B6_OFFSET UNITYSDK_OFFSET(0x1D04FEA0)
#define RPG_GAMECORE_DYNAMICVALUERANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D050330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueRangeCallback_TypeDefinitionIndex = 18014;

	class DynamicValueRangeCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Min; // 0x10
		::RPG::GameCore::DynamicFloat* Max; // 0x18
		::System::Boolean MaxInclusive; // 0x20
		::System::Boolean TriggerClampedChange; // 0x21
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterRange; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitRange; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGECALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4985D1D9745312B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValueRangeCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValueRangeCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGECALLBACK_METHOD_2_4985D1D9745312B6_OFFSET))(a1, a2);
		}
	};
}
