#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_6B36F968373F8888_METHOD_1_0359A1D714F696BD_OFFSET UNITYSDK_OFFSET(0x12F3C2E0)
#define CLASS_1_6B36F968373F8888_METHOD_1_0814A72D76F91A89_OFFSET UNITYSDK_OFFSET(0x12F3B8B0)
#define CLASS_1_6B36F968373F8888_METHOD_1_0B55A1EA8F24D3D1_OFFSET UNITYSDK_OFFSET(0x12F3CAD0)
#define CLASS_1_6B36F968373F8888_METHOD_1_E59640BF5A19E867_OFFSET UNITYSDK_OFFSET(0x12F3CB40)
#define CLASS_1_6B36F968373F8888__CTOR_OFFSET UNITYSDK_OFFSET(0x12F3CAC0)

inline static constexpr unsigned int Class_1_6B36F968373F8888_TypeDefinitionIndex = 42416;

class Class_1_6B36F968373F8888 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B36F968373F8888__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0814A72D76F91A89(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_6B36F968373F8888_METHOD_1_0814A72D76F91A89_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_0359A1D714F696BD(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_6B36F968373F8888_METHOD_1_0359A1D714F696BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* Method_1_0B55A1EA8F24D3D1(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_6B36F968373F8888_METHOD_1_0B55A1EA8F24D3D1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E59640BF5A19E867(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_6B36F968373F8888_METHOD_1_E59640BF5A19E867_OFFSET))(this, a1, a2, a3, a4);
	}
};
