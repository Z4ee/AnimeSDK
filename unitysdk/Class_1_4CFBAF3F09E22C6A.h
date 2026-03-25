#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8D24150)
#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x8D242A0)
#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_D335C42499186977_OFFSET UNITYSDK_OFFSET(0x8D24160)
#define CLASS_1_4CFBAF3F09E22C6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D243D0)
#define CLASS_1_4CFBAF3F09E22C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x8D243C0)

inline static constexpr unsigned int Class_1_4CFBAF3F09E22C6A_TypeDefinitionIndex = 49633;

class Class_1_4CFBAF3F09E22C6A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CFBAF3F09E22C6A_TypeDefinitionIndex)->GetStaticField(0x12930);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Void Method_1_D335C42499186977(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_D335C42499186977_OFFSET))(a1);
	}

	static ::System::Void Method_1_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_3CE8A1831DA14AB7_OFFSET))(a1, a2);
	}
};
