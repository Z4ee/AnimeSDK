#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EA8C52ED5A48F642_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98B8AB0)
#define CLASS_1_EA8C52ED5A48F642_METHOD_1_0E023B688E2A5CBD_OFFSET UNITYSDK_OFFSET(0x98B8AC0)
#define CLASS_1_EA8C52ED5A48F642_METHOD_1_9EA717F4E9D63168_OFFSET UNITYSDK_OFFSET(0x98B8A40)
#define CLASS_1_EA8C52ED5A48F642__CTOR_OFFSET UNITYSDK_OFFSET(0x98B89D0)

inline static constexpr unsigned int Class_1_EA8C52ED5A48F642_TypeDefinitionIndex = 57285;

class Class_1_EA8C52ED5A48F642 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_1; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::System::Int16 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_EA8C52ED5A48F642__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA8C52ED5A48F642_GET_NAME_OFFSET))(this);
	}

	::System::Int16 Method_1_0E023B688E2A5CBD()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA8C52ED5A48F642_METHOD_1_0E023B688E2A5CBD_OFFSET))(this);
	}

	::System::Void Method_1_9EA717F4E9D63168(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_EA8C52ED5A48F642_METHOD_1_9EA717F4E9D63168_OFFSET))(this, a1);
	}
};
