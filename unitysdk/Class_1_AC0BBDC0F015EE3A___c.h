#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB;

#define CLASS_1_AC0BBDC0F015EE3A___C_METHOD_1_64524A02006639FD_OFFSET UNITYSDK_OFFSET(0x180EB3E0)
#define CLASS_1_AC0BBDC0F015EE3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180EB390)
#define CLASS_1_AC0BBDC0F015EE3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180EB3D0)

inline static constexpr unsigned int Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex = 54569;

class Class_1_AC0BBDC0F015EE3A___c : public ::System::Object
{
public:
	static ::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB** StaticGet___9__4_0()
	{
		return (::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex)->GetStaticField(0x498F0);
	}
	static ::Class_1_AC0BBDC0F015EE3A___c** StaticGet___9()
	{
		return (::Class_1_AC0BBDC0F015EE3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex)->GetStaticField(0x498F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64524A02006639FD(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C_METHOD_1_64524A02006639FD_OFFSET))(this, a1, a2, a3);
	}
};
