#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89A70EF203D563DC;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D065E7ED7DC532BE_GET_MAPS_OFFSET UNITYSDK_OFFSET(0x14C29B90)
#define CLASS_1_D065E7ED7DC532BE_METHOD_1_8DA6C0776D002B6D_OFFSET UNITYSDK_OFFSET(0x14C29C20)
#define CLASS_1_D065E7ED7DC532BE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C29BA0)

inline static constexpr unsigned int Class_1_D065E7ED7DC532BE_TypeDefinitionIndex = 63989;

class Class_1_D065E7ED7DC532BE : public ::System::Object
{
public:
	::Class_1_89A70EF203D563DC* NIJOOBIAPGP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>* _Maps_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_89A70EF203D563DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_89A70EF203D563DC*))((::PBYTE)hIl2Cpp + CLASS_1_D065E7ED7DC532BE__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>* get_Maps()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D065E7ED7DC532BE_GET_MAPS_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleMap* Method_1_8DA6C0776D002B6D(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D065E7ED7DC532BE_METHOD_1_8DA6C0776D002B6D_OFFSET))(this, a1);
	}
};
