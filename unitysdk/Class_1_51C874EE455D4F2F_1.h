#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_51C874EE455D4F2F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE47A4B0)
#define CLASS_1_51C874EE455D4F2F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE47A530)
#define CLASS_1_51C874EE455D4F2F_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE47A540)

inline static constexpr unsigned int Class_1_51C874EE455D4F2F_1_TypeDefinitionIndex = 48265;

class Class_1_51C874EE455D4F2F_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
