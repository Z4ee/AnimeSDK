#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_METHOD_3_014E15FB00297A7C_OFFSET UNITYSDK_OFFSET(0x1D1AA550)
#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_METHOD_3_A1A40991ABA30E29_OFFSET UNITYSDK_OFFSET(0x1D1AA510)
#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AA540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncreaseMissionCustomValue_TypeDefinitionIndex = 20206;

	class IncreaseMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Int32 CustomValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A1A40991ABA30E29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncreaseMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncreaseMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_METHOD_3_A1A40991ABA30E29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_014E15FB00297A7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncreaseMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncreaseMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_METHOD_3_014E15FB00297A7C_OFFSET))(a1, a2);
		}
	};
}
