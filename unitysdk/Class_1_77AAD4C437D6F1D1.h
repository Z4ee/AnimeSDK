#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77AAD4C437D6F1D1_Class_1_E31A8B64E4DA2485;
namespace System { class String; }

#define CLASS_1_77AAD4C437D6F1D1_METHOD_1_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0x8A11E80)
#define CLASS_1_77AAD4C437D6F1D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A11E60)

inline static constexpr unsigned int Class_1_77AAD4C437D6F1D1_TypeDefinitionIndex = 52512;

class Class_1_77AAD4C437D6F1D1 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_77AAD4C437D6F1D1_Class_1_E31A8B64E4DA2485*>* RoleList; // 0x10
	::System::String* Title; // 0x18
	::System::UInt32 DivisiionID; // 0x20
	::System::UInt32 SectionID; // 0x24
	::System::UInt32 CampID; // 0x28
	::System::UInt32 UID; // 0x2C
	::System::UInt32 ChapterID; // 0x30
	::System::UInt32 PlayerLevel; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77AAD4C437D6F1D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77AAD4C437D6F1D1_METHOD_1_C0FBE2EB5AC963BC_OFFSET))(this);
	}
};
