#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2626D71FD1EE4F41_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x164E6450)
#define CLASS_1_2626D71FD1EE4F41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164E64A0)
#define CLASS_1_2626D71FD1EE4F41__CTOR_OFFSET UNITYSDK_OFFSET(0x164E67C0)
#define CLASS_1_2626D71FD1EE4F41___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164E67D0)

inline static constexpr unsigned int Class_1_2626D71FD1EE4F41_TypeDefinitionIndex = 32124;

class Class_1_2626D71FD1EE4F41 : public ::System::Object
{
public:
	::RPG::Client::SectionType Field_1_0; // 0x10
	::System::UInt32 Field_1_3; // 0x14
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2626D71FD1EE4F41__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2626D71FD1EE4F41_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2626D71FD1EE4F41_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2626D71FD1EE4F41___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
