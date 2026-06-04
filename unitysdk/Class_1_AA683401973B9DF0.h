#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AA683401973B9DF0_Class_1_E31A8B64E4DA2485;
namespace System { class String; }

#define CLASS_1_AA683401973B9DF0_METHOD_1_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0xA5F9400)
#define CLASS_1_AA683401973B9DF0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F93E0)

inline static constexpr unsigned int Class_1_AA683401973B9DF0_TypeDefinitionIndex = 60481;

class Class_1_AA683401973B9DF0 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_AA683401973B9DF0_Class_1_E31A8B64E4DA2485*>* RoleList; // 0x10
	::System::String* Title; // 0x18
	::System::UInt32 CampID; // 0x20
	::System::UInt32 PlayerLevel; // 0x24
	::System::UInt32 SectionID; // 0x28
	::System::UInt32 UID; // 0x2C
	::System::UInt32 DivisiionID; // 0x30
	::System::UInt32 ChapterID; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA683401973B9DF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA683401973B9DF0_METHOD_1_C0FBE2EB5AC963BC_OFFSET))(this);
	}
};
