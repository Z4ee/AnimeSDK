#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB;

#define CLASS_1_AC0BBDC0F015EE3A___C_METHOD_1_30BF79DD2B3CB888_OFFSET UNITYSDK_OFFSET(0x17F37140)
#define CLASS_1_AC0BBDC0F015EE3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F370F0)
#define CLASS_1_AC0BBDC0F015EE3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F37130)

inline static constexpr unsigned int Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex = 77956;

class Class_1_AC0BBDC0F015EE3A___c : public ::System::Object
{
public:
	static ::Class_1_AC0BBDC0F015EE3A___c** StaticGet___9()
	{
		return (::Class_1_AC0BBDC0F015EE3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex)->GetStaticField(0x393A0);
	}
	static ::Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB** StaticGet___9__4_0()
	{
		return (::Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0BBDC0F015EE3A___c_TypeDefinitionIndex)->GetStaticField(0x393A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30BF79DD2B3CB888(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_AC0BBDC0F015EE3A___C_METHOD_1_30BF79DD2B3CB888_OFFSET))(this, a1, a2, a3);
	}
};
