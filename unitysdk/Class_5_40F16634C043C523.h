#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F3891C5CBFD06A30.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_330;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_5_40F16634C043C523_METHOD_5_07E16E1A15B8CAC8_OFFSET UNITYSDK_OFFSET(0x15338800)
#define CLASS_5_40F16634C043C523_METHOD_5_15631AF13B4F1519_OFFSET UNITYSDK_OFFSET(0x153394F0)
#define CLASS_5_40F16634C043C523_METHOD_5_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x153394D0)
#define CLASS_5_40F16634C043C523_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15339820)
#define CLASS_5_40F16634C043C523_METHOD_5_92F9324857B38B5A_OFFSET UNITYSDK_OFFSET(0x153394E0)
#define CLASS_5_40F16634C043C523_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x153399B0)
#define CLASS_5_40F16634C043C523_METHOD_5_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15339A60)
#define CLASS_5_40F16634C043C523_METHOD_5_AA616269F7D7198B_OFFSET UNITYSDK_OFFSET(0x15339310)
#define CLASS_5_40F16634C043C523_METHOD_5_ADA05A93E00A659E_OFFSET UNITYSDK_OFFSET(0x15339920)
#define CLASS_5_40F16634C043C523_METHOD_5_C31DAB201B9DC15A_OFFSET UNITYSDK_OFFSET(0x15339A70)
#define CLASS_5_40F16634C043C523_METHOD_5_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x153386B0)
#define CLASS_5_40F16634C043C523_METHOD_5_D1AC69B93C328625_OFFSET UNITYSDK_OFFSET(0x15338C60)
#define CLASS_5_40F16634C043C523_METHOD_5_D47B801A881A7EDA_OFFSET UNITYSDK_OFFSET(0x15339CE0)
#define CLASS_5_40F16634C043C523_METHOD_5_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x15339970)
#define CLASS_5_40F16634C043C523_METHOD_5_E51EEF82C8AC6794_OFFSET UNITYSDK_OFFSET(0x153393F0)
#define CLASS_5_40F16634C043C523__CTOR_OFFSET UNITYSDK_OFFSET(0x15339190)

inline static constexpr unsigned int Class_5_40F16634C043C523_TypeDefinitionIndex = 44674;

class Class_5_40F16634C043C523 : public ::Class_4_F3891C5CBFD06A30
{
public:
	::System::Threading::CancellationTokenSource* Field_5_3; // 0x108
	::Cysharp::Threading::Tasks::UniTask Field_5_2; // 0x110
	::Il2CppArray<::Class_0_16E4307DCC419505_330*>* Field_5_1; // 0x120
	::Enum_3_982178F761E7F1DC Field_5_0; // 0x128

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Boolean Method_5_07E16E1A15B8CAC8(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_07E16E1A15B8CAC8_OFFSET))(this, a1);
	}

	::System::String* Method_5_D1AC69B93C328625(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_D1AC69B93C328625_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_AA616269F7D7198B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_AA616269F7D7198B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_E51EEF82C8AC6794(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_E51EEF82C8AC6794_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_3DACC45AC8150727(::Enum_3_982178F761E7F1DC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_92F9324857B38B5A(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_92F9324857B38B5A_OFFSET))(this, a1);
	}

	::System::Void Method_5_15631AF13B4F1519(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_15631AF13B4F1519_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_5_ADA05A93E00A659E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_ADA05A93E00A659E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_330* Method_5_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_330*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_E20365345CC9C440_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_A239DF324AF4215D_OFFSET))(this);
	}

	::Enum_3_982178F761E7F1DC Method_5_A96DCA30C6927810()
	{
		return ((::Enum_3_982178F761E7F1DC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_A96DCA30C6927810_OFFSET))(this);
	}

	static ::System::Void Method_5_C31DAB201B9DC15A(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_982178F761E7F1DC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_C31DAB201B9DC15A_OFFSET))(a1, a2);
	}

	::System::String* Method_5_D47B801A881A7EDA(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_40F16634C043C523_METHOD_5_D47B801A881A7EDA_OFFSET))(this, a1);
	}
};
