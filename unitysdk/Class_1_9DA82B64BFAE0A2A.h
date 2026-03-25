#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_9DA82B64BFAE0A2A_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x18330690)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x18312AE0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_2B78E57E6DA20820_1_OFFSET UNITYSDK_OFFSET(0x183309F0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0x183306B0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_1_OFFSET UNITYSDK_OFFSET(0x18330BB0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_2_OFFSET UNITYSDK_OFFSET(0x18330CB0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_OFFSET UNITYSDK_OFFSET(0x183307F0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET UNITYSDK_OFFSET(0x18330970)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_2_OFFSET UNITYSDK_OFFSET(0x18330B30)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x183308F0)
#define CLASS_1_9DA82B64BFAE0A2A_SET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x183306A0)

inline static constexpr unsigned int Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex = 9444;

class Class_1_9DA82B64BFAE0A2A : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode** StaticGet_Field_1_1()
	{
		return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0x253D0);
	}
	static ::System::Boolean* StaticGet__HasValue_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0xC000);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0

	static ::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_050E70FEDB783306_OFFSET))(a1);
	}

	static ::System::Boolean get_HasValue()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_GET_HASVALUE_OFFSET))();
	}

	static ::System::Void set_HasValue(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_SET_HASVALUE_OFFSET))(value);
	}

	static ::System::String* Method_1_2B78E57E6DA20820()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_2B78E57E6DA20820_OFFSET))();
	}

	static ::System::String* Method_1_54A434EE00ACE7E9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET))();
	}

	static ::System::String* Method_1_2B78E57E6DA20820_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_2B78E57E6DA20820_1_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_2_OFFSET))();
	}

	static ::System::String* Method_1_54A434EE00ACE7E9_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_1_OFFSET))();
	}

	static ::System::String* Method_1_54A434EE00ACE7E9_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_54A434EE00ACE7E9_2_OFFSET))();
	}
};
