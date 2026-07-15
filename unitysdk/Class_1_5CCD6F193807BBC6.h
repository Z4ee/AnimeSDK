#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }

#define CLASS_1_5CCD6F193807BBC6_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16AD6F30)
#define CLASS_1_5CCD6F193807BBC6_METHOD_1_9536C094957FFF65_OFFSET UNITYSDK_OFFSET(0x16AD6F80)
#define CLASS_1_5CCD6F193807BBC6_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16AD6E90)

inline static constexpr unsigned int Class_1_5CCD6F193807BBC6_TypeDefinitionIndex = 69939;

class Class_1_5CCD6F193807BBC6 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterEyeBloomMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterEyeBloomMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CCD6F193807BBC6_TypeDefinitionIndex)->GetStaticField(0x64370);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CCD6F193807BBC6_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CCD6F193807BBC6_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterEyeBloomConfig* Method_1_9536C094957FFF65(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterEyeBloomConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CCD6F193807BBC6_METHOD_1_9536C094957FFF65_OFFSET))(a1);
	}
};
