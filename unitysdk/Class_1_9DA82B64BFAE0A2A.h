#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_9DA82B64BFAE0A2A_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1AC709D0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1AC70920)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_1_OFFSET UNITYSDK_OFFSET(0x1AC70CF0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_2_OFFSET UNITYSDK_OFFSET(0x1AC70F30)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_OFFSET UNITYSDK_OFFSET(0x1AC70BA0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_1_OFFSET UNITYSDK_OFFSET(0x1AC71080)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_2_OFFSET UNITYSDK_OFFSET(0x1AC71140)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_OFFSET UNITYSDK_OFFSET(0x1AC70AE0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B677576B49C9A880_1_OFFSET UNITYSDK_OFFSET(0x1AC70E40)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B677576B49C9A880_OFFSET UNITYSDK_OFFSET(0x1AC709F0)
#define CLASS_1_9DA82B64BFAE0A2A_SET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1AC709E0)

inline static constexpr unsigned int Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex = 33781;

class Class_1_9DA82B64BFAE0A2A : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode** StaticGet_Field_1_0()
	{
		return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0x415B0);
	}
	static ::System::Boolean* StaticGet__HasValue_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0xB0B0);
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

	static ::System::Void set_HasValue(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_SET_HASVALUE_OFFSET))(a1);
	}

	static ::System::String* Method_1_B677576B49C9A880()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B677576B49C9A880_OFFSET))();
	}

	static ::System::String* Method_1_ABF749C5C8B8CA47()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_OFFSET))();
	}

	static ::System::Int32 Method_1_95589B1C94856A93()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_OFFSET))();
	}

	static ::System::Int32 Method_1_95589B1C94856A93_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_1_OFFSET))();
	}

	static ::System::String* Method_1_B677576B49C9A880_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B677576B49C9A880_1_OFFSET))();
	}

	static ::System::Int32 Method_1_95589B1C94856A93_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_95589B1C94856A93_2_OFFSET))();
	}

	static ::System::String* Method_1_ABF749C5C8B8CA47_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_1_OFFSET))();
	}

	static ::System::String* Method_1_ABF749C5C8B8CA47_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_ABF749C5C8B8CA47_2_OFFSET))();
	}
};
