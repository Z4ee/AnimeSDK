#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_04CAB3AD52622343_METHOD_1_28B23DE8A63535F5_OFFSET UNITYSDK_OFFSET(0x11E585C0)
#define CLASS_1_04CAB3AD52622343_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11E58510)
#define CLASS_1_04CAB3AD52622343_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x11E58310)

inline static constexpr unsigned int Class_1_04CAB3AD52622343_TypeDefinitionIndex = 67501;

class Class_1_04CAB3AD52622343 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04CAB3AD52622343_TypeDefinitionIndex)->GetStaticField(0x53FA0);
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::RPG::GameCore::NPCAppearancePreset* Method_1_28B23DE8A63535F5(::System::String* a1)
	{
		return ((::RPG::GameCore::NPCAppearancePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04CAB3AD52622343_METHOD_1_28B23DE8A63535F5_OFFSET))(a1);
	}
};
