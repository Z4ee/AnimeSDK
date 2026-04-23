#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace RPG::GameCore { class CharacterReplaceMaterialVariantConfig; }
namespace System { class String; }

#define CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9988970)
#define CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_8666A05ADEEC4B71_OFFSET UNITYSDK_OFFSET(0x9988AA0)
#define CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_F8C7231308CD2C82_1_OFFSET UNITYSDK_OFFSET(0x99889C0)
#define CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x99888D0)

inline static constexpr unsigned int Class_1_32C8E2E1DBBD4ECF_TypeDefinitionIndex = 67498;

class Class_1_32C8E2E1DBBD4ECF : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterReplaceMaterialVariantConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterReplaceMaterialVariantConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32C8E2E1DBBD4ECF_TypeDefinitionIndex)->GetStaticField(0x1B790);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_F8C7231308CD2C82_1_OFFSET))();
	}

	static ::RPG::GameCore::CharacterReplaceMaterialVariant* Method_1_8666A05ADEEC4B71(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterReplaceMaterialVariant*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_32C8E2E1DBBD4ECF_METHOD_1_8666A05ADEEC4B71_OFFSET))(a1);
	}
};
