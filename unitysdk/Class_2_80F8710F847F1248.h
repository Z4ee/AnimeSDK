#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_945ACFB1FEBC7A2C_4;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }

#define CLASS_2_80F8710F847F1248_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E80F0)
#define CLASS_2_80F8710F847F1248_GETGENERICVIEWASSETMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8050)
#define CLASS_2_80F8710F847F1248_GETGENERICVIEWBRIDGEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8190)
#define CLASS_2_80F8710F847F1248_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8230)
#define CLASS_2_80F8710F847F1248_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E82D0)
#define CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8550)
#define CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8370)
#define CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E84B0)
#define CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8410)
#define CLASS_2_80F8710F847F1248_GETRVOAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8690)
#define CLASS_2_80F8710F847F1248_GETSMARTOBJECTAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8730)
#define CLASS_2_80F8710F847F1248_GETSMARTOBJECTMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E87D0)
#define CLASS_2_80F8710F847F1248_GETSTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E8870)
#define CLASS_2_80F8710F847F1248_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1C9E85F0)
#define CLASS_2_80F8710F847F1248_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1C9E7E00)
#define CLASS_2_80F8710F847F1248_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1C9E7FF0)
#define CLASS_2_80F8710F847F1248_METHOD_2_832E5CE2FE665F3F_OFFSET UNITYSDK_OFFSET(0x1C9E7D20)
#define CLASS_2_80F8710F847F1248_METHOD_2_D2E216E2152E42E3_OFFSET UNITYSDK_OFFSET(0x1C9E7E80)
#define CLASS_2_80F8710F847F1248_METHOD_2_E8A380745EAF1A3C_OFFSET UNITYSDK_OFFSET(0x1C9E7F80)
#define CLASS_2_80F8710F847F1248_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C9E7E60)
#define CLASS_2_80F8710F847F1248__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8910)

inline static constexpr unsigned int Class_2_80F8710F847F1248_TypeDefinitionIndex = 42583;

class Class_2_80F8710F847F1248 : public ::Entitas::Context_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_832E5CE2FE665F3F()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_832E5CE2FE665F3F_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_4* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_D2E216E2152E42E3(::System::String* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_D2E216E2152E42E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8A380745EAF1A3C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_E8A380745EAF1A3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGENERICVIEWASSETMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetLoadingMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewBridgeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGENERICVIEWBRIDGEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewLoadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewUnloadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentStartMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentCurveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETTRANSFORMMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetRVOAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETRVOAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETSMARTOBJECTAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETSMARTOBJECTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8710F847F1248_GETSTATETREEMATCHER_OFFSET))(this);
	}
};
