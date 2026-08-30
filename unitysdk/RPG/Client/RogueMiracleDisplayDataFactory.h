#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xDEF4710)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATA_OFFSET UNITYSDK_OFFSET(0xDEF4430)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xDEF45E0)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0xDEF43D0)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDEF4340)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEF4980)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xDEF4770)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATA_OFFSET UNITYSDK_OFFSET(0xDEF4490)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xDEF4640)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDEF4840)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleDisplayDataFactory_TypeDefinitionIndex = 67273;

	class RogueMiracleDisplayDataFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::IRogueMiracle*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::IRogueMiracle*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayDataFactory_TypeDefinitionIndex)->GetStaticField(0xADE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayData_1(::RPG::Client::RogueMiracleIdentifier a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayBrokenData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayDataWithCurrentRogueGlobalBlackboard(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayBrokenDataWithCurrentRogueGlobalBlackboard(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayBrokenData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayDataWithCurrentRogueGlobalBlackboard(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayBrokenDataWithCurrentRogueGlobalBlackboard(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(a1);
		}
	};
}
