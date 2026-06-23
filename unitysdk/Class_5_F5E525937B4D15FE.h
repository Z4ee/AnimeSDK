#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F3891C5CBFD06A30.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_423;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_5_F5E525937B4D15FE_METHOD_5_20D81FC758D02F6B_OFFSET UNITYSDK_OFFSET(0x1139EA10)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_2149F8E9261F5FFE_OFFSET UNITYSDK_OFFSET(0x1139EE20)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1139E970)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1139EF00)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1139F1F0)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x1139DC90)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_82FEA46702DC9419_OFFSET UNITYSDK_OFFSET(0x1139DE90)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_92F9324857B38B5A_OFFSET UNITYSDK_OFFSET(0x1139EA00)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1139E880)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1139F180)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_AA616269F7D7198B_OFFSET UNITYSDK_OFFSET(0x1139ED40)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_ADA05A93E00A659E_OFFSET UNITYSDK_OFFSET(0x1139F190)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_C31DAB201B9DC15A_OFFSET UNITYSDK_OFFSET(0x1139EF10)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x1139DD40)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_D1AC69B93C328625_OFFSET UNITYSDK_OFFSET(0x1139E180)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_D47B801A881A7EDA_OFFSET UNITYSDK_OFFSET(0x1139F1E0)
#define CLASS_5_F5E525937B4D15FE_METHOD_5_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x1139E930)
#define CLASS_5_F5E525937B4D15FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1139E6B0)

inline static constexpr unsigned int Class_5_F5E525937B4D15FE_TypeDefinitionIndex = 58171;

class Class_5_F5E525937B4D15FE : public ::Class_4_F3891C5CBFD06A30
{
public:
	::System::Threading::CancellationTokenSource* Field_5_3; // 0x108
	::Cysharp::Threading::Tasks::UniTask Field_5_2; // 0x110
	::Il2CppArray<::Class_0_16E4307DCC419505_423*>* Field_5_1; // 0x120
	::Enum_3_982178F761E7F1DC Field_5_0; // 0x128

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_5_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_5_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Boolean Method_5_82FEA46702DC9419(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_82FEA46702DC9419_OFFSET))(this, a1);
	}

	::System::String* Method_5_D1AC69B93C328625(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_D1AC69B93C328625_OFFSET))(this, a1);
	}

	::System::Void Method_5_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_423* Method_5_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_423*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_E20365345CC9C440_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_5_92F9324857B38B5A(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_92F9324857B38B5A_OFFSET))(this, a1);
	}

	::System::Void Method_5_20D81FC758D02F6B(::Enum_3_982178F761E7F1DC a1, ::Enum_3_F6AB19A8BCD630BB a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::Enum_3_F6AB19A8BCD630BB))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_20D81FC758D02F6B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_AA616269F7D7198B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_AA616269F7D7198B_OFFSET))(this);
	}

	::System::Void Method_5_3DACC45AC8150727(::Enum_3_982178F761E7F1DC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_982178F761E7F1DC))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_3DACC45AC8150727_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_C31DAB201B9DC15A(::Enum_3_982178F761E7F1DC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_982178F761E7F1DC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_C31DAB201B9DC15A_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_2149F8E9261F5FFE(::Enum_3_982178F761E7F1DC a1, ::Enum_3_F6AB19A8BCD630BB a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Enum_3_982178F761E7F1DC, ::Enum_3_F6AB19A8BCD630BB, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_2149F8E9261F5FFE_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_982178F761E7F1DC Method_5_A96DCA30C6927810()
	{
		return ((::Enum_3_982178F761E7F1DC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_5_ADA05A93E00A659E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_ADA05A93E00A659E_OFFSET))(this, a1);
	}

	::System::String* Method_5_D47B801A881A7EDA(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_D47B801A881A7EDA_OFFSET))(this, a1);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}
};
