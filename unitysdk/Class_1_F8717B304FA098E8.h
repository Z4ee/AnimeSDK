#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleModifierHintViewModel; }

#define CLASS_1_F8717B304FA098E8_COMPARE_OFFSET UNITYSDK_OFFSET(0x184DBC50)
#define CLASS_1_F8717B304FA098E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x184DBFC0)
#define CLASS_1_F8717B304FA098E8__CTOR_OFFSET UNITYSDK_OFFSET(0x184DBFB0)

inline static constexpr unsigned int Class_1_F8717B304FA098E8_TypeDefinitionIndex = 79662;

class Class_1_F8717B304FA098E8 : public ::System::Object
{
public:
	static ::Class_1_F8717B304FA098E8** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_F8717B304FA098E8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8717B304FA098E8_TypeDefinitionIndex)->GetStaticField(0x65870);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8717B304FA098E8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8717B304FA098E8__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_F8717B304FA098E8_COMPARE_OFFSET))(this, a1, a2);
	}
};
