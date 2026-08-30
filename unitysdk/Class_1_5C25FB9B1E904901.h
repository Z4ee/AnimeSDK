#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlMappingConfig; }
namespace System { class String; }

#define CLASS_1_5C25FB9B1E904901_METHOD_1_495ADA02B2872DCF_OFFSET UNITYSDK_OFFSET(0xBBB77D0)
#define CLASS_1_5C25FB9B1E904901_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBBB7780)
#define CLASS_1_5C25FB9B1E904901_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xBBB76E0)

inline static constexpr unsigned int Class_1_5C25FB9B1E904901_TypeDefinitionIndex = 73198;

class Class_1_5C25FB9B1E904901 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterEyeCtrlMappingConfig** StaticGet_IGHAHBNLIJA()
	{
		return (::RPG::GameCore::CharacterEyeCtrlMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C25FB9B1E904901_TypeDefinitionIndex)->GetStaticField(0x63D70);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C25FB9B1E904901_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C25FB9B1E904901_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterEyeCtrlConfig* Method_1_495ADA02B2872DCF(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterEyeCtrlConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C25FB9B1E904901_METHOD_1_495ADA02B2872DCF_OFFSET))(a1);
	}
};
