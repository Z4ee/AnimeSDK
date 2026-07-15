#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_90F15F1C45B87C6F_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x18C0D260)
#define CLASS_1_90F15F1C45B87C6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C19450)
#define CLASS_1_90F15F1C45B87C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0D250)

inline static constexpr unsigned int Class_1_90F15F1C45B87C6F_TypeDefinitionIndex = 39389;

class Class_1_90F15F1C45B87C6F : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::Client::SectionType Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F_TOSTRING_OFFSET))(this);
	}
};
