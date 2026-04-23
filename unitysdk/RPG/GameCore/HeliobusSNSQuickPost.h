#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_290C438F86DD79AC_OFFSET UNITYSDK_OFFSET(0x189FA0C0)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_E4CCEDE781054E7C_OFFSET UNITYSDK_OFFSET(0x189FA140)
#define RPG_GAMECORE_HELIOBUSSNSQUICKPOST__CTOR_OFFSET UNITYSDK_OFFSET(0x189FA110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSNSQuickPost_TypeDefinitionIndex = 19404;

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

		static ::System::Void Method_3_290C438F86DD79AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusSNSQuickPost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSNSQuickPost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_290C438F86DD79AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4CCEDE781054E7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSNSQUICKPOST_METHOD_3_E4CCEDE781054E7C_OFFSET))(a1, a2);
		}
	};
}
