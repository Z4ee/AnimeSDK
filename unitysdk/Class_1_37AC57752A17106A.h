#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37AC57752A17106A_METHOD_1_11E3A8133BC3B76F_OFFSET UNITYSDK_OFFSET(0x106975C0)
#define CLASS_1_37AC57752A17106A_METHOD_1_A333B046891AFE08_OFFSET UNITYSDK_OFFSET(0x10697750)
#define CLASS_1_37AC57752A17106A__CCTOR_OFFSET UNITYSDK_OFFSET(0x10697300)

inline static constexpr unsigned int Class_1_37AC57752A17106A_TypeDefinitionIndex = 40238;

class Class_1_37AC57752A17106A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::PropertyType, ::Class_0_16E4307DCC419505_326*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::PropertyType, ::Class_0_16E4307DCC419505_326*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37AC57752A17106A_TypeDefinitionIndex)->GetStaticField(0x263D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37AC57752A17106A__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_326* Method_1_11E3A8133BC3B76F(::EnviromentSystemV2Space::PropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_326*(*)(::EnviromentSystemV2Space::PropertyType))((::PBYTE)hIl2Cpp + CLASS_1_37AC57752A17106A_METHOD_1_11E3A8133BC3B76F_OFFSET))(a1);
	}

	static ::System::Void Method_1_A333B046891AFE08(::EnviromentSystemV2Space::PropertyType a1, ::Class_0_16E4307DCC419505_326* a2)
	{
		return ((::System::Void(*)(::EnviromentSystemV2Space::PropertyType, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + CLASS_1_37AC57752A17106A_METHOD_1_A333B046891AFE08_OFFSET))(a1, a2);
	}
};
