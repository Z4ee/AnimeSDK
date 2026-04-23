#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_240940D1542204D5_Struct_2_74774458D8863C06.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5C7F69784A5C81DE_1;
class Class_1_945ACFB1FEBC7A2C_18;
namespace RPG::GameCore { class SetWeatherUI; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E5CACD019C88A9F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB4DD0)
#define CLASS_3_E5CACD019C88A9F8_METHOD_3_34279D326BA59007_OFFSET UNITYSDK_OFFSET(0xBAB4E70)
#define CLASS_3_E5CACD019C88A9F8_METHOD_3_ACDFEAC427456543_OFFSET UNITYSDK_OFFSET(0xBAB50A0)
#define CLASS_3_E5CACD019C88A9F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB4E10)
#define CLASS_3_E5CACD019C88A9F8__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB4D00)
#define CLASS_3_E5CACD019C88A9F8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB51A0)

inline static constexpr unsigned int Class_3_E5CACD019C88A9F8_TypeDefinitionIndex = 51257;

class Class_3_E5CACD019C88A9F8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetWeatherUI*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_240940D1542204D5_Struct_2_74774458D8863C06>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWeatherUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_18* Method_3_34279D326BA59007()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8_METHOD_3_34279D326BA59007_OFFSET))(this);
	}

	::Class_1_5C7F69784A5C81DE_1* Method_3_ACDFEAC427456543(::RPG::GameCore::TemperatureWeatherItemConfig* a1)
	{
		return ((::Class_1_5C7F69784A5C81DE_1*(*)(::PVOID, ::RPG::GameCore::TemperatureWeatherItemConfig*))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8_METHOD_3_ACDFEAC427456543_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5CACD019C88A9F8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
