#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }

#define CLASS_1_D025A505589DE81C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1281F9F0)
#define CLASS_1_D025A505589DE81C_METHOD_1_DC21AF5416ED0753_OFFSET UNITYSDK_OFFSET(0x1281FA40)
#define CLASS_1_D025A505589DE81C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1281F950)

inline static constexpr unsigned int Class_1_D025A505589DE81C_TypeDefinitionIndex = 67493;

class Class_1_D025A505589DE81C : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterEyeBloomMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterEyeBloomMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D025A505589DE81C_TypeDefinitionIndex)->GetStaticField(0x18D30);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterEyeBloomConfig* Method_1_DC21AF5416ED0753(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterEyeBloomConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_DC21AF5416ED0753_OFFSET))(a1);
	}
};
