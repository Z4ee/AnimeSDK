#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DD1F8230ABB39CD5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC195840)
#define CLASS_1_DD1F8230ABB39CD5_EQUALS_OFFSET UNITYSDK_OFFSET(0xC195740)
#define CLASS_1_DD1F8230ABB39CD5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC195540)
#define CLASS_1_DD1F8230ABB39CD5_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC195080)
#define CLASS_1_DD1F8230ABB39CD5_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC1954A0)
#define CLASS_1_DD1F8230ABB39CD5_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC195400)
#define CLASS_1_DD1F8230ABB39CD5_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC1952F0)
#define CLASS_1_DD1F8230ABB39CD5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC1950B0)
#define CLASS_1_DD1F8230ABB39CD5__CLONE___OFFSET UNITYSDK_OFFSET(0xC195A50)
#define CLASS_1_DD1F8230ABB39CD5__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC195AD0)
#define CLASS_1_DD1F8230ABB39CD5__CTOR_OFFSET UNITYSDK_OFFSET(0xC195AB0)

inline static constexpr unsigned int Class_1_DD1F8230ABB39CD5_TypeDefinitionIndex = 49725;

class Class_1_DD1F8230ABB39CD5 : public ::System::Object
{
public:
	::UnityEngine::Transform* DICDJJOJKGF; // 0x10

	::System::Void _ctor(::Class_1_DD1F8230ABB39CD5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD1F8230ABB39CD5*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5__CTOR_1_OFFSET))(this);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_DD1F8230ABB39CD5* a1, ::Class_1_DD1F8230ABB39CD5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_DD1F8230ABB39CD5*, ::Class_1_DD1F8230ABB39CD5*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_DD1F8230ABB39CD5* a1, ::Class_1_DD1F8230ABB39CD5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_DD1F8230ABB39CD5*, ::Class_1_DD1F8230ABB39CD5*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DD1F8230ABB39CD5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DD1F8230ABB39CD5*))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_DD1F8230ABB39CD5* _Clone__()
	{
		return ((::Class_1_DD1F8230ABB39CD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD1F8230ABB39CD5__CLONE___OFFSET))(this);
	}
};
