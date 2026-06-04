#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_4EA42E57E1C6E10E_OFFSET UNITYSDK_OFFSET(0x1982C850)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_90016BD528C7DC36_OFFSET UNITYSDK_OFFSET(0x1982C7D0)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1982C820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSNSQuickPost_TypeDefinitionIndex = 19309;

	class HeliobusSNSQuickPost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PostID; // 0x18
		::System::Boolean IsExecuting; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPost; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::RPG::GameCore::DynamicString* PostID_DS; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90016BD528C7DC36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusSNSQuickPost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSNSQuickPost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_90016BD528C7DC36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EA42E57E1C6E10E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_4EA42E57E1C6E10E_OFFSET))(a1, a2);
		}
	};
}
