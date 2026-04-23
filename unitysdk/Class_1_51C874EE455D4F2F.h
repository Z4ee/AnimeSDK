#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_51C874EE455D4F2F_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD9C1250)
#define CLASS_1_51C874EE455D4F2F__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C12D0)
#define CLASS_1_51C874EE455D4F2F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD9C1310)

inline static constexpr unsigned int Class_1_51C874EE455D4F2F_TypeDefinitionIndex = 55009;

class Class_1_51C874EE455D4F2F : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
