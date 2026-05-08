#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define STRUCT_2_FC34C7AD15A42B48_EQUALS_OFFSET UNITYSDK_OFFSET(0x767D80)
#define STRUCT_2_FC34C7AD15A42B48_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x767E20)
#define STRUCT_2_FC34C7AD15A42B48_METHOD_2_140AEBD840D7BBC4_OFFSET UNITYSDK_OFFSET(0x767F60)
#define STRUCT_2_FC34C7AD15A42B48_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x767EE0)
#define STRUCT_2_FC34C7AD15A42B48_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x767FE0)
#define STRUCT_2_FC34C7AD15A42B48_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x767F70)
#define STRUCT_2_FC34C7AD15A42B48_TOSTRING_OFFSET UNITYSDK_OFFSET(0x767ED0)
#define STRUCT_2_FC34C7AD15A42B48__CCTOR_OFFSET UNITYSDK_OFFSET(0x134DAF30)

inline static constexpr unsigned int Struct_2_FC34C7AD15A42B48_TypeDefinitionIndex = 67220;

struct alignas(8) Struct_2_FC34C7AD15A42B48
{
	static ::Struct_2_FC34C7AD15A42B48* StaticGet_Field_2_0()
	{
		return (::Struct_2_FC34C7AD15A42B48*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FC34C7AD15A42B48_TypeDefinitionIndex)->GetStaticField(0x3FD70);
	}
	::System::Type* Field_2_1; // 0x10
	::Foundation::AssetPath Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_FC34C7AD15A42B48 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_140AEBD840D7BBC4(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_METHOD_2_140AEBD840D7BBC4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FC34C7AD15A42B48_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}
};
