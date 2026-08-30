#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_93BC4A6035ED3F95___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB46A040)
#define CLASS_1_93BC4A6035ED3F95___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB46A080)
#define CLASS_1_93BC4A6035ED3F95___C__SELECTTAKEBYCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xB46A090)

inline static constexpr unsigned int Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex = 78923;

class Class_1_93BC4A6035ED3F95___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex)->GetStaticField(0x4470);
	}
	static ::Class_1_93BC4A6035ED3F95___c** StaticGet___9()
	{
		return (::Class_1_93BC4A6035ED3F95___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93BC4A6035ED3F95___c_TypeDefinitionIndex)->GetStaticField(0x4478);
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
