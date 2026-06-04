#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DA3E1E065FF0B7AB_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13A08EE0)
#define CLASS_1_DA3E1E065FF0B7AB_METHOD_1_0E023B688E2A5CBD_OFFSET UNITYSDK_OFFSET(0x13A08EF0)
#define CLASS_1_DA3E1E065FF0B7AB_METHOD_1_86959C1CB3D7A743_OFFSET UNITYSDK_OFFSET(0x13A08E60)
#define CLASS_1_DA3E1E065FF0B7AB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A08DE0)

inline static constexpr unsigned int Class_1_DA3E1E065FF0B7AB_TypeDefinitionIndex = 58075;

class Class_1_DA3E1E065FF0B7AB : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::System::Int16 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_GET_NAME_OFFSET))(this);
	}

	::System::Int16 Method_1_0E023B688E2A5CBD()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_METHOD_1_0E023B688E2A5CBD_OFFSET))(this);
	}

	::System::Void Method_1_86959C1CB3D7A743(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_METHOD_1_86959C1CB3D7A743_OFFSET))(this, a1);
	}
};
