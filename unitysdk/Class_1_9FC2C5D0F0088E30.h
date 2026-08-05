#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_229;
class Class_0_16E4307DCC419505_626;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_6830938046F926BE_OFFSET UNITYSDK_OFFSET(0x13EEA220)
#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_7B1BB3931507A656_OFFSET UNITYSDK_OFFSET(0x13EEA490)
#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_9AD8C83DFAC118E6_OFFSET UNITYSDK_OFFSET(0x13EE9C10)
#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_C520CDABAAEB7A72_OFFSET UNITYSDK_OFFSET(0x13EE9EF0)
#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_DDB27CCE82FD46BB_OFFSET UNITYSDK_OFFSET(0x13EEA540)
#define CLASS_1_9FC2C5D0F0088E30_METHOD_1_FF6B399CBDA45CAF_OFFSET UNITYSDK_OFFSET(0x13EEA190)
#define CLASS_1_9FC2C5D0F0088E30__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE9C00)

inline static constexpr unsigned int Class_1_9FC2C5D0F0088E30_TypeDefinitionIndex = 72743;

class Class_1_9FC2C5D0F0088E30 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_9AD8C83DFAC118E6(::MoleMole::Config::BaseProperty a1, ::Class_0_16E4307DCC419505_229* a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty, ::Class_0_16E4307DCC419505_229*))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_9AD8C83DFAC118E6_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_626* Method_1_FF6B399CBDA45CAF(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_626*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_FF6B399CBDA45CAF_OFFSET))(a1);
	}

	static ::System::Void Method_1_C520CDABAAEB7A72(::MoleMole::Config::BaseProperty a1, ::Class_0_16E4307DCC419505_229* a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::Class_0_16E4307DCC419505_229*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_C520CDABAAEB7A72_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_6830938046F926BE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_6830938046F926BE_OFFSET))();
	}

	static ::System::Nullable_1<::Enum_3_65BB655811A73E3A> Method_1_7B1BB3931507A656(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Enum_3_65BB655811A73E3A>(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_7B1BB3931507A656_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_229* Method_1_DDB27CCE82FD46BB(::System::Int32 a1, ::Enum_3_65BB655811A73E3A a2)
	{
		return ((::Class_0_16E4307DCC419505_229*(*)(::System::Int32, ::Enum_3_65BB655811A73E3A))((::PBYTE)hIl2Cpp + CLASS_1_9FC2C5D0F0088E30_METHOD_1_DDB27CCE82FD46BB_OFFSET))(a1, a2);
	}
};
