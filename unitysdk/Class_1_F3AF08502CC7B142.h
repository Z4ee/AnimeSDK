#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3AF08502CC7B142_METHOD_1_28667C38BA726E2C_OFFSET UNITYSDK_OFFSET(0x115B4F70)
#define CLASS_1_F3AF08502CC7B142_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x115B4EC0)
#define CLASS_1_F3AF08502CC7B142_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x115B4CC0)

inline static constexpr unsigned int Class_1_F3AF08502CC7B142_TypeDefinitionIndex = 60068;

class Class_1_F3AF08502CC7B142 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3AF08502CC7B142_TypeDefinitionIndex)->GetStaticField(0x44B80);
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3AF08502CC7B142_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3AF08502CC7B142_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::RPG::GameCore::NPCAppearancePreset* Method_1_28667C38BA726E2C(::System::String* a1)
	{
		return ((::RPG::GameCore::NPCAppearancePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3AF08502CC7B142_METHOD_1_28667C38BA726E2C_OFFSET))(a1);
	}
};
