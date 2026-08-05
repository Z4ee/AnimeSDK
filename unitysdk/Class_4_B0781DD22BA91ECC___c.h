#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_B0781DD22BA91ECC___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x148A8440)
#define CLASS_4_B0781DD22BA91ECC___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x148A8400)
#define CLASS_4_B0781DD22BA91ECC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148A83B0)
#define CLASS_4_B0781DD22BA91ECC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148A83F0)

inline static constexpr unsigned int Class_4_B0781DD22BA91ECC___c_TypeDefinitionIndex = 42523;

class Class_4_B0781DD22BA91ECC___c : public ::System::Object
{
public:
	static ::Class_4_B0781DD22BA91ECC___c** StaticGet___9()
	{
		return (::Class_4_B0781DD22BA91ECC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B0781DD22BA91ECC___c_TypeDefinitionIndex)->GetStaticField(0x35030);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B0781DD22BA91ECC___c_TypeDefinitionIndex)->GetStaticField(0x35038);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_11()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B0781DD22BA91ECC___c_TypeDefinitionIndex)->GetStaticField(0x35040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B0781DD22BA91ECC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0781DD22BA91ECC___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0781DD22BA91ECC___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0781DD22BA91ECC___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
