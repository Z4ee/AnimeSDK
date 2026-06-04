#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlMappingConfig; }
namespace System { class String; }

#define CLASS_1_1595B277D9447A3F_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA843350)
#define CLASS_1_1595B277D9447A3F_METHOD_1_DBCBB2E9278647B1_OFFSET UNITYSDK_OFFSET(0xA8433A0)
#define CLASS_1_1595B277D9447A3F_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xA8432B0)

inline static constexpr unsigned int Class_1_1595B277D9447A3F_TypeDefinitionIndex = 68446;

class Class_1_1595B277D9447A3F : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterEyeCtrlMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterEyeCtrlMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1595B277D9447A3F_TypeDefinitionIndex)->GetStaticField(0x64CD0);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1595B277D9447A3F_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1595B277D9447A3F_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterEyeCtrlConfig* Method_1_DBCBB2E9278647B1(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterEyeCtrlConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1595B277D9447A3F_METHOD_1_DBCBB2E9278647B1_OFFSET))(a1);
	}
};
