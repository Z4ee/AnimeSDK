#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace System { class Action; }

#define CLASS_1_C77BB1071F0961C6_CLASS_1_0D3F80694EBF14DB_METHOD_1_021EB5F7711A7D7B_OFFSET UNITYSDK_OFFSET(0x133422C0)
#define CLASS_1_C77BB1071F0961C6_CLASS_1_0D3F80694EBF14DB__CTOR_OFFSET UNITYSDK_OFFSET(0x133422B0)

inline static constexpr unsigned int Class_1_C77BB1071F0961C6_Class_1_0D3F80694EBF14DB_TypeDefinitionIndex = 51790;

class Class_1_C77BB1071F0961C6_Class_1_0D3F80694EBF14DB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_CLASS_1_0D3F80694EBF14DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_021EB5F7711A7D7B(::MoleMole::Config::ConfigUIWeapon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeapon*))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_CLASS_1_0D3F80694EBF14DB_METHOD_1_021EB5F7711A7D7B_OFFSET))(this, a1);
	}
};
