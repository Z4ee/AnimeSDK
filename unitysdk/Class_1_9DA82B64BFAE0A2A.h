#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_9DA82B64BFAE0A2A_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1ABE4A70)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1ABE49B0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_1_OFFSET UNITYSDK_OFFSET(0x1ABE4FA0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_2_OFFSET UNITYSDK_OFFSET(0x1ABE50B0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_OFFSET UNITYSDK_OFFSET(0x1ABE4BD0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B345A53823FD29B2_1_OFFSET UNITYSDK_OFFSET(0x1ABE4DE0)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B345A53823FD29B2_OFFSET UNITYSDK_OFFSET(0x1ABE4A90)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET UNITYSDK_OFFSET(0x1ABE4D60)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_2_OFFSET UNITYSDK_OFFSET(0x1ABE4F20)
#define CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1ABE4CE0)
#define CLASS_1_9DA82B64BFAE0A2A_SET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1ABE4A80)

inline static constexpr unsigned int Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex = 33411;

class Class_1_9DA82B64BFAE0A2A : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode** StaticGet_Field_1_0()
	{
		return (::MiHoYo::SDK::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0x46A30);
	}
	static ::System::Boolean* StaticGet__HasValue_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DA82B64BFAE0A2A_TypeDefinitionIndex)->GetStaticField(0xCC70);
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

	static ::System::String* Method_1_B345A53823FD29B2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B345A53823FD29B2_OFFSET))();
	}

	static ::System::String* Method_1_614E5485B409683B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET))();
	}

	static ::System::String* Method_1_B345A53823FD29B2_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_B345A53823FD29B2_1_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_BFBBE8A6FE167A6A_2_OFFSET))();
	}

	static ::System::String* Method_1_614E5485B409683B_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_1_OFFSET))();
	}

	static ::System::String* Method_1_614E5485B409683B_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DA82B64BFAE0A2A_METHOD_1_614E5485B409683B_2_OFFSET))();
	}
};
