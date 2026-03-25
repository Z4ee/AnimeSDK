#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_5D97B95D15DFC675_OFFSET UNITYSDK_OFFSET(0x176C5530)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_6B411F73422D8B9A_OFFSET UNITYSDK_OFFSET(0x176C55A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x176C5570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatisticCustomValue_TypeDefinitionIndex = 19937;

	class SetDynamicValueByStatisticCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D97B95D15DFC675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_5D97B95D15DFC675_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B411F73422D8B9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_6B411F73422D8B9A_OFFSET))(a1, a2);
		}
	};
}
