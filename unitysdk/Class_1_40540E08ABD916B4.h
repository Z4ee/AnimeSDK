#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class SimpleText; }
namespace System { class String; }
namespace UnityEngine { class Font; }

#define CLASS_1_40540E08ABD916B4_METHOD_1_233C851B0E3803FF_OFFSET UNITYSDK_OFFSET(0x1996A370)
#define CLASS_1_40540E08ABD916B4_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x1996A2A0)
#define CLASS_1_40540E08ABD916B4_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x1996A1E0)
#define CLASS_1_40540E08ABD916B4_METHOD_1_260A30BB04EA59A0_OFFSET UNITYSDK_OFFSET(0x1996A0D0)
#define CLASS_1_40540E08ABD916B4_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1996A300)
#define CLASS_1_40540E08ABD916B4_METHOD_1_723780A21BE7A4C3_OFFSET UNITYSDK_OFFSET(0x19969D50)
#define CLASS_1_40540E08ABD916B4_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x19969DF0)
#define CLASS_1_40540E08ABD916B4_METHOD_1_8A640A3233BC6CBF_OFFSET UNITYSDK_OFFSET(0x1996A060)
#define CLASS_1_40540E08ABD916B4_METHOD_1_8AA7764B4E1ADA8E_OFFSET UNITYSDK_OFFSET(0x19969C60)
#define CLASS_1_40540E08ABD916B4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1996A450)
#define CLASS_1_40540E08ABD916B4_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1996A3F0)
#define CLASS_1_40540E08ABD916B4__CTOR_OFFSET UNITYSDK_OFFSET(0x19969D40)

inline static constexpr unsigned int Class_1_40540E08ABD916B4_TypeDefinitionIndex = 72300;

class Class_1_40540E08ABD916B4 : public ::System::Object
{
public:
	::UnityEngine::Font* NAGEODHOMEO; // 0x10
	::RPG::Client::SimpleText* OPOGIAMONAF; // 0x18
	::UnityEngine::Font* CIBBGLJLLDP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4__CTOR_OFFSET))(this);
	}

	static ::Class_1_40540E08ABD916B4* Method_1_8AA7764B4E1ADA8E(::RPG::Client::SimpleText* a1)
	{
		return ((::Class_1_40540E08ABD916B4*(*)(::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_8AA7764B4E1ADA8E_OFFSET))(a1);
	}

	::System::Void Method_1_723780A21BE7A4C3(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_723780A21BE7A4C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_1_260A30BB04EA59A0(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_260A30BB04EA59A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_1_233C851B0E3803FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_233C851B0E3803FF_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_24B39354D1FCD13B_OFFSET))(this, a1);
	}

	::RPG::Client::LocalizationManager* Method_1_8A640A3233BC6CBF()
	{
		return ((::RPG::Client::LocalizationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40540E08ABD916B4_METHOD_1_8A640A3233BC6CBF_OFFSET))(this);
	}
};
