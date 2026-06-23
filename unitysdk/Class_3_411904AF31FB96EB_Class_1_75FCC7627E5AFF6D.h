#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

class Class_1_560B23058CA4940C;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_411904AF31FB96EB_CLASS_1_75FCC7627E5AFF6D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1963AA10)
#define CLASS_3_411904AF31FB96EB_CLASS_1_75FCC7627E5AFF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1963AA00)

inline static constexpr unsigned int Class_3_411904AF31FB96EB_Class_1_75FCC7627E5AFF6D_TypeDefinitionIndex = 42814;

class Class_3_411904AF31FB96EB_Class_1_75FCC7627E5AFF6D : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::MoleMole::Config::ConfigEntityAttackProperty* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_1_0; // 0x28
	::System::Int32 Field_1_9; // 0x30
	::System::Int32 Field_1_8; // 0x34
	::System::Int32 Field_1_3; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::MoleMole::Config::DamageElementType Field_1_7; // 0x40
	::System::Int32 Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_411904AF31FB96EB_CLASS_1_75FCC7627E5AFF6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_411904AF31FB96EB_CLASS_1_75FCC7627E5AFF6D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
