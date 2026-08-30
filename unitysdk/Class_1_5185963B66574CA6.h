#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76D49B0D0E3A326D;
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5185963B66574CA6_GET_ROUTES_OFFSET UNITYSDK_OFFSET(0xBB9D830)
#define CLASS_1_5185963B66574CA6_METHOD_1_7DCCCC9B41B2B464_OFFSET UNITYSDK_OFFSET(0xBB9D8C0)
#define CLASS_1_5185963B66574CA6__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9D840)

inline static constexpr unsigned int Class_1_5185963B66574CA6_TypeDefinitionIndex = 63991;

class Class_1_5185963B66574CA6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>* _Routes_k__BackingField; // 0x10
	::Class_1_76D49B0D0E3A326D* IPBJJAJCCKD; // 0x18

	::System::Void _ctor(::Class_1_76D49B0D0E3A326D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76D49B0D0E3A326D*))((::PBYTE)hIl2Cpp + CLASS_1_5185963B66574CA6__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>* get_Routes()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185963B66574CA6_GET_ROUTES_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleRoute* Method_1_7DCCCC9B41B2B464(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5185963B66574CA6_METHOD_1_7DCCCC9B41B2B464_OFFSET))(this, a1);
	}
};
