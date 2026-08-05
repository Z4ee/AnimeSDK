#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E18DD7D3DEDDD336.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"
#include "unitysdk/System/Object.h"

class Class_1_E795C5D5DDF30620;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }

#define CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD86EFE0)
#define CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_4E14FC0FBB27B81C_OFFSET UNITYSDK_OFFSET(0xD86F060)
#define CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_586DB5533A4F4659_OFFSET UNITYSDK_OFFSET(0xD86EFC0)
#define CLASS_1_D4E3BB7FB7BD8B59__CTOR_OFFSET UNITYSDK_OFFSET(0xD86EFB0)

inline static constexpr unsigned int Class_1_D4E3BB7FB7BD8B59_TypeDefinitionIndex = 71525;

class Class_1_D4E3BB7FB7BD8B59 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigTimeDrivenAttackCollider* Field_1_0; // 0x10
	::MoleMole::MonoConfigurableCollider* Field_1_1; // 0x18
	::Class_1_E795C5D5DDF30620* Field_1_3; // 0x20
	::Enum_3_E18DD7D3DEDDD336 Field_1_2; // 0x28
	::System::Int32 Field_1_6; // 0x2C
	::Struct_2_EADB70559B2B5513 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E3BB7FB7BD8B59__CTOR_OFFSET))(this);
	}

	::Enum_3_F40B865AC61AB8D7 Method_1_586DB5533A4F4659()
	{
		return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_586DB5533A4F4659_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single> Method_1_4E14FC0FBB27B81C()
	{
		return ((::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4E3BB7FB7BD8B59_METHOD_1_4E14FC0FBB27B81C_OFFSET))(this);
	}
};
