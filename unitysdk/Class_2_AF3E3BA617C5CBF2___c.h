#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_AF3E3BA617C5CBF2___C_METHOD_1_4636681D9702C9A9_OFFSET UNITYSDK_OFFSET(0x179FA3D0)
#define CLASS_2_AF3E3BA617C5CBF2___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x179FA3C0)
#define CLASS_2_AF3E3BA617C5CBF2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FA370)
#define CLASS_2_AF3E3BA617C5CBF2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179FA3B0)

inline static constexpr unsigned int Class_2_AF3E3BA617C5CBF2___c_TypeDefinitionIndex = 80994;

class Class_2_AF3E3BA617C5CBF2___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int64>** StaticGet___9__25_5()
	{
		return (::System::Func_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF3E3BA617C5CBF2___c_TypeDefinitionIndex)->GetStaticField(0x3B020);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_18()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF3E3BA617C5CBF2___c_TypeDefinitionIndex)->GetStaticField(0x3B028);
	}
	static ::Class_2_AF3E3BA617C5CBF2___c** StaticGet___9()
	{
		return (::Class_2_AF3E3BA617C5CBF2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF3E3BA617C5CBF2___c_TypeDefinitionIndex)->GetStaticField(0x3B030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int64 Method_1_4636681D9702C9A9()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2___C_METHOD_1_4636681D9702C9A9_OFFSET))(this);
	}
};
