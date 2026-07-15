#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_193.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2_GET_UIDTONEWCHIMERA_OFFSET UNITYSDK_OFFSET(0x1708CB90)
#define CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2_SET_UIDTONEWCHIMERA_OFFSET UNITYSDK_OFFSET(0x1708CBA0)
#define CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1708C9C0)

inline static constexpr unsigned int Class_2_7960AFC189023812_Class_2_97F0756101BFE2E2_TypeDefinitionIndex = 73493;

class Class_2_7960AFC189023812_Class_2_97F0756101BFE2E2 : public ::Class_1_43BD383C98B4C0C5_193
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _UIDToNewChimera_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_UIDToNewChimera()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2_GET_UIDTONEWCHIMERA_OFFSET))(this);
	}

	::System::Void set_UIDToNewChimera(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_CLASS_2_97F0756101BFE2E2_SET_UIDTONEWCHIMERA_OFFSET))(this, a1);
	}
};
