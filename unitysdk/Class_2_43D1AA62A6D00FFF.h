#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_945ACFB1FEBC7A2C_5;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }

#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D490)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D3D0)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWBRIDGEMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D550)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D610)
#define CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D6D0)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D9D0)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D790)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D910)
#define CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D850)
#define CLASS_2_43D1AA62A6D00FFF_GETRVOAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0DB50)
#define CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTAGENTMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0DC10)
#define CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0DCD0)
#define CLASS_2_43D1AA62A6D00FFF_GETSTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0D310)
#define CLASS_2_43D1AA62A6D00FFF_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17F0DA90)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET UNITYSDK_OFFSET(0x17F0E030)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x17F0E0A0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET UNITYSDK_OFFSET(0x17F0DD90)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET UNITYSDK_OFFSET(0x17F0DF30)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x17F0DEB0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F0DF10)
#define CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0E100)

inline static constexpr unsigned int Class_2_43D1AA62A6D00FFF_TypeDefinitionIndex = 38195;

class Class_2_43D1AA62A6D00FFF : public ::Entitas::Context_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSTATETREEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewAssetLoadingMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewBridgeMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWBRIDGEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewLoadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGenericViewUnloadCallbackMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentStartMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTSTARTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetGraphNavAgentCurveMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETGRAPHNAVAGENTCURVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETTRANSFORMMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetRVOAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETRVOAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectAgentMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTAGENTMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetSmartObjectMatcher()
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_GETSMARTOBJECTMATCHER_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_C4FB87A683D48212()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_5* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_D2E216E2152E42E3(::System::String* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DF5D6BA733343EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}
};
