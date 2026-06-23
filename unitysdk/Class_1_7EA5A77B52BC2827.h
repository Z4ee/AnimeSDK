#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B353AD2F4C8AD4F8;
namespace System { class String; }

#define CLASS_1_7EA5A77B52BC2827_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E485550)
#define CLASS_1_7EA5A77B52BC2827_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E485540)
#define CLASS_1_7EA5A77B52BC2827_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E485560)
#define CLASS_1_7EA5A77B52BC2827__CTOR_OFFSET UNITYSDK_OFFSET(0x1E485530)

inline static constexpr unsigned int Class_1_7EA5A77B52BC2827_TypeDefinitionIndex = 18705;

class Class_1_7EA5A77B52BC2827 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_1_B353AD2F4C8AD4F8* Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_B353AD2F4C8AD4F8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_B353AD2F4C8AD4F8*))((::PBYTE)hIl2Cpp + CLASS_1_7EA5A77B52BC2827__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EA5A77B52BC2827_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EA5A77B52BC2827_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::Class_1_B353AD2F4C8AD4F8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B353AD2F4C8AD4F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EA5A77B52BC2827_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
