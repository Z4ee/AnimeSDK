#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_38FCE313D8A6C18C;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9455F94C89259DF5___C_METHOD_1_5B1F86CCB8579B26_OFFSET UNITYSDK_OFFSET(0x162094D0)
#define CLASS_3_9455F94C89259DF5___C_METHOD_1_C395752EC506055F_OFFSET UNITYSDK_OFFSET(0x162094E0)
#define CLASS_3_9455F94C89259DF5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16209480)
#define CLASS_3_9455F94C89259DF5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162094C0)

inline static constexpr unsigned int Class_3_9455F94C89259DF5___c_TypeDefinitionIndex = 50259;

class Class_3_9455F94C89259DF5___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_38FCE313D8A6C18C*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_38FCE313D8A6C18C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9455F94C89259DF5___c_TypeDefinitionIndex)->GetStaticField(0x3BB00);
	}
	static ::Class_3_9455F94C89259DF5___c** StaticGet___9()
	{
		return (::Class_3_9455F94C89259DF5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9455F94C89259DF5___c_TypeDefinitionIndex)->GetStaticField(0x3BB08);
	}
	static ::System::Action_1<::Class_3_38FCE313D8A6C18C*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_38FCE313D8A6C18C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9455F94C89259DF5___c_TypeDefinitionIndex)->GetStaticField(0x3BB10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B1F86CCB8579B26(::Class_3_38FCE313D8A6C18C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_38FCE313D8A6C18C*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5___C_METHOD_1_5B1F86CCB8579B26_OFFSET))(this, a1);
	}

	::System::Void Method_1_C395752EC506055F(::Class_3_38FCE313D8A6C18C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_38FCE313D8A6C18C*))((::PBYTE)hIl2Cpp + CLASS_3_9455F94C89259DF5___C_METHOD_1_C395752EC506055F_OFFSET))(this, a1);
	}
};
