#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace RPG::GameCore { class CharacterReplaceMaterialVariantConfig; }
namespace System { class String; }

#define CLASS_1_6EF307AA119B762A_METHOD_1_04B7EE66277307C7_OFFSET UNITYSDK_OFFSET(0xC3748B0)
#define CLASS_1_6EF307AA119B762A_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC374780)
#define CLASS_1_6EF307AA119B762A_METHOD_1_F8C7231308CD2C82_1_OFFSET UNITYSDK_OFFSET(0xC3747D0)
#define CLASS_1_6EF307AA119B762A_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xC3746E0)

inline static constexpr unsigned int Class_1_6EF307AA119B762A_TypeDefinitionIndex = 73202;

class Class_1_6EF307AA119B762A : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterReplaceMaterialVariantConfig** StaticGet_IGHAHBNLIJA()
	{
		return (::RPG::GameCore::CharacterReplaceMaterialVariantConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EF307AA119B762A_TypeDefinitionIndex)->GetStaticField(0x46FE0);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EF307AA119B762A_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EF307AA119B762A_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EF307AA119B762A_METHOD_1_F8C7231308CD2C82_1_OFFSET))();
	}

	static ::RPG::GameCore::CharacterReplaceMaterialVariant* Method_1_04B7EE66277307C7(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterReplaceMaterialVariant*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EF307AA119B762A_METHOD_1_04B7EE66277307C7_OFFSET))(a1);
	}
};
