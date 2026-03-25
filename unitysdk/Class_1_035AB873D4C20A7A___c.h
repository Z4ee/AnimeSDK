#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_16D8E68BCE885505_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_035AB873D4C20A7A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11960300)
#define CLASS_1_035AB873D4C20A7A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11960340)
#define CLASS_1_035AB873D4C20A7A___C__GETTRACETREELEVELS_B__18_0_OFFSET UNITYSDK_OFFSET(0x11960350)
#define CLASS_1_035AB873D4C20A7A___C__GETTRACETREELEVELS_B__18_1_OFFSET UNITYSDK_OFFSET(0x11960360)

inline static constexpr unsigned int Class_1_035AB873D4C20A7A___c_TypeDefinitionIndex = 41991;

class Class_1_035AB873D4C20A7A___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>, ::System::UInt32>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_035AB873D4C20A7A___c_TypeDefinitionIndex)->GetStaticField(0x48530);
	}
	static ::Class_1_035AB873D4C20A7A___c** StaticGet___9()
	{
		return (::Class_1_035AB873D4C20A7A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_035AB873D4C20A7A___c_TypeDefinitionIndex)->GetStaticField(0x48538);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>, ::System::UInt32>** StaticGet___9__18_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_035AB873D4C20A7A___c_TypeDefinitionIndex)->GetStaticField(0x48540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetTraceTreeLevels_b__18_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*> x)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A___C__GETTRACETREELEVELS_B__18_0_OFFSET))(this, x);
	}

	::System::UInt32 _GetTraceTreeLevels_b__18_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*> x)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_16D8E68BCE885505_1*>))((::PBYTE)hIl2Cpp + CLASS_1_035AB873D4C20A7A___C__GETTRACETREELEVELS_B__18_1_OFFSET))(this, x);
	}
};
