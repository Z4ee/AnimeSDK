#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_143E103668F7C8A7;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLASS_1_8FA75683DE5762A6_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1D0977C0)
#define CLASS_1_8FA75683DE5762A6_METHOD_1_F753645BC4263183_OFFSET UNITYSDK_OFFSET(0x1D0978D0)
#define CLASS_1_8FA75683DE5762A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0977B0)

inline static constexpr unsigned int Class_1_8FA75683DE5762A6_TypeDefinitionIndex = 89520;

class Class_1_8FA75683DE5762A6 : public ::System::Object
{
public:
	::Class_2_143E103668F7C8A7* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA75683DE5762A6__CTOR_OFFSET))(this);
	}

	::FlatBuffers::ByteBuffer* Method_1_F753645BC4263183(::System::String* a1)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8FA75683DE5762A6_METHOD_1_F753645BC4263183_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA75683DE5762A6_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
