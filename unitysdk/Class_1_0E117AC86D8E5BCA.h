#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0E117AC86D8E5BCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C0F6970)
#define CLASS_1_0E117AC86D8E5BCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C0F6900)
#define CLASS_1_0E117AC86D8E5BCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C0F6A70)
#define CLASS_1_0E117AC86D8E5BCA_METHOD_1_CE3273428402DE3D_OFFSET UNITYSDK_OFFSET(0x1C0F6AC0)
#define CLASS_1_0E117AC86D8E5BCA_METHOD_1_D53D8EC3AC2A7048_OFFSET UNITYSDK_OFFSET(0x1C0F6B50)
#define CLASS_1_0E117AC86D8E5BCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C0F6BB0)
#define CLASS_1_0E117AC86D8E5BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F68F0)

inline static constexpr unsigned int Class_1_0E117AC86D8E5BCA_TypeDefinitionIndex = 35507;

class Class_1_0E117AC86D8E5BCA : public ::System::Object
{
public:
	::System::UInt32 EOBLJJBOBIN; // 0x10
	::System::Int32 GMDBHJKEAEI; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_CE3273428402DE3D(::Class_1_0E117AC86D8E5BCA* a1, ::Class_1_0E117AC86D8E5BCA* a2)
	{
		return ((::System::Boolean(*)(::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_METHOD_1_CE3273428402DE3D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D53D8EC3AC2A7048(::Class_1_0E117AC86D8E5BCA* a1, ::Class_1_0E117AC86D8E5BCA* a2)
	{
		return ((::System::Boolean(*)(::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_METHOD_1_D53D8EC3AC2A7048_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_TOSTRING_OFFSET))(this);
	}
};
