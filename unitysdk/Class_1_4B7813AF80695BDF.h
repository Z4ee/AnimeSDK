#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4B7813AF80695BDF_METHOD_1_04F85D8B9F72CEE4_OFFSET UNITYSDK_OFFSET(0x10F4A980)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_1C1F9CFAC2FFE648_OFFSET UNITYSDK_OFFSET(0x10F4A810)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_299D15D4F45EDCDB_OFFSET UNITYSDK_OFFSET(0x10F4A720)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_36323A2AE8E3A0D5_OFFSET UNITYSDK_OFFSET(0x10F4A8A0)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10F4A300)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_AAA470BD75FB035D_OFFSET UNITYSDK_OFFSET(0x10F4AA20)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0x10F4A610)
#define CLASS_1_4B7813AF80695BDF_METHOD_1_DAA4BF258338035E_OFFSET UNITYSDK_OFFSET(0x10F4A790)

inline static constexpr unsigned int Class_1_4B7813AF80695BDF_TypeDefinitionIndex = 87413;

class Class_1_4B7813AF80695BDF : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BaseProperty>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B7813AF80695BDF_TypeDefinitionIndex)->GetStaticField(0x49320);
	}

	static ::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_7DB49B5407C8FD68_OFFSET))();
	}

	static ::System::Void Method_1_BF622B900A7F3625()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_BF622B900A7F3625_OFFSET))();
	}

	static ::System::Double Method_1_299D15D4F45EDCDB(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_299D15D4F45EDCDB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DAA4BF258338035E(::MoleMole::Config::BaseProperty a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_DAA4BF258338035E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1C1F9CFAC2FFE648(::MoleMole::Config::BaseProperty a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_1C1F9CFAC2FFE648_OFFSET))(a1);
	}

	static ::System::Single Method_1_36323A2AE8E3A0D5(::MoleMole::Config::BaseProperty a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_36323A2AE8E3A0D5_OFFSET))(a1);
	}

	static ::System::Double Method_1_04F85D8B9F72CEE4(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_04F85D8B9F72CEE4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AAA470BD75FB035D(::System::Int32& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B7813AF80695BDF_METHOD_1_AAA470BD75FB035D_OFFSET))(a1, a2, a3, a4);
	}
};
