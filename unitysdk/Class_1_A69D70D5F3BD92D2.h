#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterAtlasFaceMappingConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }

#define CLASS_1_A69D70D5F3BD92D2_METHOD_1_419A551021319AFF_OFFSET UNITYSDK_OFFSET(0xA52ED90)
#define CLASS_1_A69D70D5F3BD92D2_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA52ED40)
#define CLASS_1_A69D70D5F3BD92D2_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xA52ECA0)

inline static constexpr unsigned int Class_1_A69D70D5F3BD92D2_TypeDefinitionIndex = 68444;

class Class_1_A69D70D5F3BD92D2 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterAtlasFaceMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterAtlasFaceMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A69D70D5F3BD92D2_TypeDefinitionIndex)->GetStaticField(0x62850);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A69D70D5F3BD92D2_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A69D70D5F3BD92D2_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterAtlasFaceSet* Method_1_419A551021319AFF(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterAtlasFaceSet*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A69D70D5F3BD92D2_METHOD_1_419A551021319AFF_OFFSET))(a1);
	}
};
