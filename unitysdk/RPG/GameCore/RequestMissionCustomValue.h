#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_METHOD_3_0312C9BE1D1B8AB2_OFFSET UNITYSDK_OFFSET(0x19ACD150)
#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_METHOD_3_095288287618B1D4_OFFSET UNITYSDK_OFFSET(0x19ACD030)
#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACD0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestMissionCustomValue_TypeDefinitionIndex = 19305;

	class RequestMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DynamicMainMissionID; // 0x18
		::RPG::GameCore::DynamicString* DynamicMcvName; // 0x20
		::System::UInt32 CustomValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_095288287618B1D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_METHOD_3_095288287618B1D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0312C9BE1D1B8AB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_METHOD_3_0312C9BE1D1B8AB2_OFFSET))(a1, a2);
		}
	};
}
