#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_49F17883F620E938__CCTOR_OFFSET UNITYSDK_OFFSET(0xD092990)
#define CLASS_1_49F17883F620E938__CTOR_OFFSET UNITYSDK_OFFSET(0xD092980)

inline static constexpr unsigned int Class_1_49F17883F620E938_TypeDefinitionIndex = 48747;

class Class_1_49F17883F620E938 : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F17883F620E938_TypeDefinitionIndex)->GetStaticField(0x35680);
	}
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F17883F620E938_TypeDefinitionIndex)->GetStaticField(0x35688);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F17883F620E938_TypeDefinitionIndex)->GetStaticField(0x35690);
	}
	// static const ::System::Int32 Field_1_0 = 0x989680; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F17883F620E938__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F17883F620E938__CCTOR_OFFSET))();
	}
};
