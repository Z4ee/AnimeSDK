#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DepthTextureMode.h"

namespace Foundation { class ByteArray; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_2F26184E3EA01564_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x71E9A0)
#define STRUCT_2_2F26184E3EA01564_EQUALS_OFFSET UNITYSDK_OFFSET(0x71E970)
#define STRUCT_2_2F26184E3EA01564_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x71EA90)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x71EB90)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x11702800)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x11702770)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x71EAB0)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_87130B57CF907EDB_OFFSET UNITYSDK_OFFSET(0x11702510)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x71EB20)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_98923C027B8C374B_OFFSET UNITYSDK_OFFSET(0x11702910)
#define STRUCT_2_2F26184E3EA01564_TOSTRING_OFFSET UNITYSDK_OFFSET(0x71EAA0)

inline static constexpr unsigned int Struct_2_2F26184E3EA01564_TypeDefinitionIndex = 44149;

struct alignas(4) Struct_2_2F26184E3EA01564
{
	::System::Boolean Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::UnityEngine::DepthTextureMode Field_2_5; // 0x24

	::System::Boolean Equals(::Struct_2_2F26184E3EA01564 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_2F26184E3EA01564 Method_2_87130B57CF907EDB(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::Struct_2_2F26184E3EA01564(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_87130B57CF907EDB_OFFSET))(a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_2F26184E3EA01564 a1, ::Struct_2_2F26184E3EA01564 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2F26184E3EA01564, ::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_2F26184E3EA01564 a1, ::Struct_2_2F26184E3EA01564 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2F26184E3EA01564, ::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::Foundation::ByteArray* Method_2_98923C027B8C374B(::Struct_2_2F26184E3EA01564 a1)
	{
		return ((::Foundation::ByteArray*(*)(::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_98923C027B8C374B_OFFSET))(a1);
	}
};
