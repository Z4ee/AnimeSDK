#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_04CAB3AD52622343_METHOD_1_28B23DE8A63535F5_OFFSET UNITYSDK_OFFSET(0x17A96340)
#define CLASS_1_04CAB3AD52622343_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17A962A0)
#define CLASS_1_04CAB3AD52622343_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x17A960B0)

inline static constexpr unsigned int Class_1_04CAB3AD52622343_TypeDefinitionIndex = 73205;

class Class_1_04CAB3AD52622343 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>** StaticGet_KNLDGAEEMCH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04CAB3AD52622343_TypeDefinitionIndex)->GetStaticField(0x39750);
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::RPG::GameCore::NPCAppearancePreset* Method_1_28B23DE8A63535F5(::System::String* a1)
	{
		return ((::RPG::GameCore::NPCAppearancePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_28B23DE8A63535F5_OFFSET))(a1);
	}
};
