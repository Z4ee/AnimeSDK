#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_BDBDB06343DE6A9E___C_METHOD_1_4CCB1A99365A76BE_OFFSET UNITYSDK_OFFSET(0x13957D50)
#define CLASS_1_BDBDB06343DE6A9E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13957D00)
#define CLASS_1_BDBDB06343DE6A9E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13957D40)

inline static constexpr unsigned int Class_1_BDBDB06343DE6A9E___c_TypeDefinitionIndex = 70967;

class Class_1_BDBDB06343DE6A9E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDBDB06343DE6A9E___c_TypeDefinitionIndex)->GetStaticField(0x45B40);
	}
	static ::Class_1_BDBDB06343DE6A9E___c** StaticGet___9()
	{
		return (::Class_1_BDBDB06343DE6A9E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDBDB06343DE6A9E___c_TypeDefinitionIndex)->GetStaticField(0x45B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDBDB06343DE6A9E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBDB06343DE6A9E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4CCB1A99365A76BE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BDBDB06343DE6A9E___C_METHOD_1_4CCB1A99365A76BE_OFFSET))(this, a1, a2);
	}
};
