#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49742796922EA3B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD34A6C0)
#define CLASS_2_49742796922EA3B5_DOONENTER_OFFSET UNITYSDK_OFFSET(0xD34A900)
#define CLASS_2_49742796922EA3B5_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xD34ABE0)
#define CLASS_2_49742796922EA3B5_DOONTICK_OFFSET UNITYSDK_OFFSET(0xD34AC50)
#define CLASS_2_49742796922EA3B5_METHOD_2_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0xD34AD10)
#define CLASS_2_49742796922EA3B5_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0xD34B4B0)
#define CLASS_2_49742796922EA3B5_METHOD_2_3DC7237D000039D0_OFFSET UNITYSDK_OFFSET(0xD34B0A0)
#define CLASS_2_49742796922EA3B5_METHOD_2_797A699EED121969_OFFSET UNITYSDK_OFFSET(0xD34A760)
#define CLASS_2_49742796922EA3B5_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xD34AD80)
#define CLASS_2_49742796922EA3B5_METHOD_2_CA344D06ECBECF75_OFFSET UNITYSDK_OFFSET(0xD34A970)
#define CLASS_2_49742796922EA3B5__CCTOR_OFFSET UNITYSDK_OFFSET(0xD34B660)
#define CLASS_2_49742796922EA3B5__CTOR_OFFSET UNITYSDK_OFFSET(0xD34A4C0)
#define CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD34B6A0)
#define CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xD34B6B0)
#define CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xD34B6C0)

inline static constexpr unsigned int Class_2_49742796922EA3B5_TypeDefinitionIndex = 53020;

class Class_2_49742796922EA3B5 : public ::Class_1_59305B446B42427E
{
public:
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_49742796922EA3B5_TypeDefinitionIndex)->GetStaticField(0x14E00);
	}
	::Class_2_9D4DD2F4235F8658* Field_2_6; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* Field_2_3; // 0xA0
	::System::Single Field_2_1; // 0xA8
	::System::Boolean Field_2_4; // 0xAC
	::System::Boolean Field_2_5; // 0xAD
	::System::Boolean Field_2_0; // 0xAE

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_2_3DC7237D000039D0(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_3DC7237D000039D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA344D06ECBECF75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_CA344D06ECBECF75_OFFSET))(this);
	}

	::System::Void Method_2_797A699EED121969()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_797A699EED121969_OFFSET))(this);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_49742796922EA3B5___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
