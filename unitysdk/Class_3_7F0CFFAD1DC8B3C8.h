#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5C7F69784A5C81DE_1;
class Class_1_945ACFB1FEBC7A2C_21;
namespace RPG::GameCore { class SetWeatherUI; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7F0CFFAD1DC8B3C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152EA140)
#define CLASS_3_7F0CFFAD1DC8B3C8_METHOD_3_0397616FAD7FE5AD_OFFSET UNITYSDK_OFFSET(0x152EA1E0)
#define CLASS_3_7F0CFFAD1DC8B3C8_METHOD_3_2638719AE9FDAF90_OFFSET UNITYSDK_OFFSET(0x152EA420)
#define CLASS_3_7F0CFFAD1DC8B3C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152EA180)
#define CLASS_3_7F0CFFAD1DC8B3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x152EA060)

inline static constexpr unsigned int Class_3_7F0CFFAD1DC8B3C8_TypeDefinitionIndex = 53082;

class Class_3_7F0CFFAD1DC8B3C8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetWeatherUI*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWeatherUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + CLASS_3_7F0CFFAD1DC8B3C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F0CFFAD1DC8B3C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F0CFFAD1DC8B3C8_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_21* Method_3_0397616FAD7FE5AD()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F0CFFAD1DC8B3C8_METHOD_3_0397616FAD7FE5AD_OFFSET))(this);
	}

	::Class_1_5C7F69784A5C81DE_1* Method_3_2638719AE9FDAF90(::RPG::GameCore::TemperatureWeatherItemConfig* a1)
	{
		return ((::Class_1_5C7F69784A5C81DE_1*(*)(::PVOID, ::RPG::GameCore::TemperatureWeatherItemConfig*))((::PBYTE)hIl2Cpp + CLASS_3_7F0CFFAD1DC8B3C8_METHOD_3_2638719AE9FDAF90_OFFSET))(this, a1);
	}
};
