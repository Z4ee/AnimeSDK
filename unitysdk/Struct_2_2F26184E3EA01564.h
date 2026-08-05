#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DepthTextureMode.h"

namespace Foundation { class ByteArray; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_2F26184E3EA01564_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B0810)
#define STRUCT_2_2F26184E3EA01564_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B07E0)
#define STRUCT_2_2F26184E3EA01564_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B0900)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7B0990)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x12582530)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x12582010)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7B0A20)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_87130B57CF907EDB_OFFSET UNITYSDK_OFFSET(0x125822B0)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7B0920)
#define STRUCT_2_2F26184E3EA01564_METHOD_2_98923C027B8C374B_OFFSET UNITYSDK_OFFSET(0x12582100)
#define STRUCT_2_2F26184E3EA01564_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B0910)

inline static constexpr unsigned int Struct_2_2F26184E3EA01564_TypeDefinitionIndex = 69281;

struct alignas(4) Struct_2_2F26184E3EA01564
{
	::System::Boolean Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_7; // 0x1C
	::System::Single Field_2_6; // 0x20
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

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_2F26184E3EA01564 a1, ::Struct_2_2F26184E3EA01564 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2F26184E3EA01564, ::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::Foundation::ByteArray* Method_2_98923C027B8C374B(::Struct_2_2F26184E3EA01564 a1)
	{
		return ((::Foundation::ByteArray*(*)(::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_98923C027B8C374B_OFFSET))(a1);
	}

	static ::Struct_2_2F26184E3EA01564 Method_2_87130B57CF907EDB(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::Struct_2_2F26184E3EA01564(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_87130B57CF907EDB_OFFSET))(a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_2F26184E3EA01564 a1, ::Struct_2_2F26184E3EA01564 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2F26184E3EA01564, ::Struct_2_2F26184E3EA01564))((::PBYTE)hIl2Cpp + STRUCT_2_2F26184E3EA01564_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}
};
