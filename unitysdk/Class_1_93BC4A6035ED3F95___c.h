#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_93BC4A6035ED3F95___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A86F40)
#define CLASS_1_93BC4A6035ED3F95___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A86F80)
#define CLASS_1_93BC4A6035ED3F95___C__SELECTTAKEBYCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x17A86F90)

inline static constexpr unsigned int Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex = 75375;

class Class_1_93BC4A6035ED3F95___c : public ::System::Object
{
public:
	static ::Class_1_93BC4A6035ED3F95___c** StaticGet___9()
	{
		return (::Class_1_93BC4A6035ED3F95___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex)->GetStaticField(0x26C20);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex)->GetStaticField(0x26C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectTakeByCount_b__13_0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95___C__SELECTTAKEBYCOUNT_B__13_0_OFFSET))(this, a1);
	}
};
