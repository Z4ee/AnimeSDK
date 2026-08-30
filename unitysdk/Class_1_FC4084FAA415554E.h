#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHandCardViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FC4084FAA415554E_COMPARE_OFFSET UNITYSDK_OFFSET(0x180DE200)
#define CLASS_1_FC4084FAA415554E_METHOD_1_2EDA16D440BF0346_OFFSET UNITYSDK_OFFSET(0x180DE880)
#define CLASS_1_FC4084FAA415554E__CCTOR_OFFSET UNITYSDK_OFFSET(0x180DEA90)
#define CLASS_1_FC4084FAA415554E__CTOR_OFFSET UNITYSDK_OFFSET(0x180DEA80)

inline static constexpr unsigned int Class_1_FC4084FAA415554E_TypeDefinitionIndex = 79664;

class Class_1_FC4084FAA415554E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCardCasterSource, ::System::Int32>** StaticGet_HCIBEFAHKCO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCardCasterSource, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC4084FAA415554E_TypeDefinitionIndex)->GetStaticField(0x56940);
	}
	static ::Class_1_FC4084FAA415554E** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_FC4084FAA415554E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC4084FAA415554E_TypeDefinitionIndex)->GetStaticField(0x56948);
	}
	// static const ::System::UInt32 CJOPNPHOMMM = 0x7DE; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4084FAA415554E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC4084FAA415554E__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel*, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_FC4084FAA415554E_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_2EDA16D440BF0346(::RPG::GameCore::FateRinCardCasterSource a1, ::RPG::GameCore::FateRinCardCasterSource a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::FateRinCardCasterSource, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + CLASS_1_FC4084FAA415554E_METHOD_1_2EDA16D440BF0346_OFFSET))(a1, a2);
	}
};
