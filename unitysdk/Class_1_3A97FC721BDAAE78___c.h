#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_42858E6F4249A13B;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3A97FC721BDAAE78___C_METHOD_1_EBB7446D02D1BAD5_OFFSET UNITYSDK_OFFSET(0x11306EF0)
#define CLASS_1_3A97FC721BDAAE78___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11306EA0)
#define CLASS_1_3A97FC721BDAAE78___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11306EE0)

inline static constexpr unsigned int Class_1_3A97FC721BDAAE78___c_TypeDefinitionIndex = 60876;

class Class_1_3A97FC721BDAAE78___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_42858E6F4249A13B*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_1_42858E6F4249A13B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A97FC721BDAAE78___c_TypeDefinitionIndex)->GetStaticField(0x45430);
	}
	static ::Class_1_3A97FC721BDAAE78___c** StaticGet___9()
	{
		return (::Class_1_3A97FC721BDAAE78___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A97FC721BDAAE78___c_TypeDefinitionIndex)->GetStaticField(0x45438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A97FC721BDAAE78___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A97FC721BDAAE78___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EBB7446D02D1BAD5(::Class_1_42858E6F4249A13B* a1, ::Class_1_42858E6F4249A13B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_42858E6F4249A13B*, ::Class_1_42858E6F4249A13B*))((::PBYTE)hIl2Cpp + CLASS_1_3A97FC721BDAAE78___C_METHOD_1_EBB7446D02D1BAD5_OFFSET))(this, a1, a2);
	}
};
