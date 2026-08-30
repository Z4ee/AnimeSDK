#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1222;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_895ABDE29643254E_METHOD_1_203C4674533B7DEF_OFFSET UNITYSDK_OFFSET(0x198EEDA0)
#define CLASS_1_895ABDE29643254E_METHOD_1_4C6F0DE144F7332C_OFFSET UNITYSDK_OFFSET(0x198EF040)
#define CLASS_1_895ABDE29643254E_METHOD_1_E22FF0B3384AD2D1_OFFSET UNITYSDK_OFFSET(0x198EEFB0)

inline static constexpr unsigned int Class_1_895ABDE29643254E_TypeDefinitionIndex = 74470;

class Class_1_895ABDE29643254E : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1222* Method_1_203C4674533B7DEF(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_1222*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_895ABDE29643254E_METHOD_1_203C4674533B7DEF_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_1222* Method_1_E22FF0B3384AD2D1(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfos* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_1222*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfos*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_895ABDE29643254E_METHOD_1_E22FF0B3384AD2D1_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_1222* Method_1_4C6F0DE144F7332C(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_1222*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_895ABDE29643254E_METHOD_1_4C6F0DE144F7332C_OFFSET))(a1, a2, a3);
	}
};
