#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DA052367006D50D;
namespace RPG::Client { class ExpeditionBattleBuff; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_614D679AB9AEB872_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1A6DD180)
#define CLASS_1_614D679AB9AEB872_METHOD_1_E43929D58C17696E_OFFSET UNITYSDK_OFFSET(0x1A6DD210)
#define CLASS_1_614D679AB9AEB872__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DD190)

inline static constexpr unsigned int Class_1_614D679AB9AEB872_TypeDefinitionIndex = 63984;

class Class_1_614D679AB9AEB872 : public ::System::Object
{
public:
	::Class_1_3DA052367006D50D* LEMBDFBOFLG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>* _Buffs_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_3DA052367006D50D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DA052367006D50D*))((::PBYTE)hIl2Cpp + CLASS_1_614D679AB9AEB872__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>* get_Buffs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_614D679AB9AEB872_GET_BUFFS_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleBuff* Method_1_E43929D58C17696E(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_614D679AB9AEB872_METHOD_1_E43929D58C17696E_OFFSET))(this, a1);
	}
};
