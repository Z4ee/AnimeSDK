#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D19C1BC41AA7C3FC_Class_1_E31A8B64E4DA2485;
namespace System { class String; }

#define CLASS_1_D19C1BC41AA7C3FC_METHOD_1_25F90D4C940D48BE_OFFSET UNITYSDK_OFFSET(0x1875D610)
#define CLASS_1_D19C1BC41AA7C3FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D5F0)

inline static constexpr unsigned int Class_1_D19C1BC41AA7C3FC_TypeDefinitionIndex = 64756;

class Class_1_D19C1BC41AA7C3FC : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D19C1BC41AA7C3FC_Class_1_E31A8B64E4DA2485*>* RoleList; // 0x10
	::System::String* Title; // 0x18
	::System::UInt32 UID; // 0x20
	::System::UInt32 DivisiionID; // 0x24
	::System::UInt32 CampID; // 0x28
	::System::UInt32 ChapterID; // 0x2C
	::System::UInt32 SectionID; // 0x30
	::System::UInt32 PlayerLevel; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19C1BC41AA7C3FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25F90D4C940D48BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19C1BC41AA7C3FC_METHOD_1_25F90D4C940D48BE_OFFSET))(this);
	}
};
