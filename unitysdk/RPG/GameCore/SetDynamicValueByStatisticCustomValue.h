#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_6B411F73422D8B9A_OFFSET UNITYSDK_OFFSET(0x1D4F73A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_E62E6E414349CE67_OFFSET UNITYSDK_OFFSET(0x1D4F7360)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatisticCustomValue_TypeDefinitionIndex = 21524;

	class SetDynamicValueByStatisticCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E62E6E414349CE67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_E62E6E414349CE67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B411F73422D8B9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatisticCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATISTICCUSTOMVALUE_METHOD_3_6B411F73422D8B9A_OFFSET))(a1, a2);
		}
	};
}
