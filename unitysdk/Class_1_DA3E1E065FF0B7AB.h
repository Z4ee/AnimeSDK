#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DA3E1E065FF0B7AB_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1581B660)
#define CLASS_1_DA3E1E065FF0B7AB_METHOD_1_86959C1CB3D7A743_OFFSET UNITYSDK_OFFSET(0x1581B5E0)
#define CLASS_1_DA3E1E065FF0B7AB_METHOD_1_BDACA5F9F4002279_OFFSET UNITYSDK_OFFSET(0x1581B670)
#define CLASS_1_DA3E1E065FF0B7AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1581B560)

inline static constexpr unsigned int Class_1_DA3E1E065FF0B7AB_TypeDefinitionIndex = 62176;

class Class_1_DA3E1E065FF0B7AB : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::System::Action_1<::System::String*>* PBJAENMIKEJ; // 0x18
	::System::Int16 AIKAPJELHNK; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_GET_NAME_OFFSET))(this);
	}

	::System::Int16 Method_1_BDACA5F9F4002279()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_METHOD_1_BDACA5F9F4002279_OFFSET))(this);
	}

	::System::Void Method_1_86959C1CB3D7A743(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_DA3E1E065FF0B7AB_METHOD_1_86959C1CB3D7A743_OFFSET))(this, a1);
	}
};
