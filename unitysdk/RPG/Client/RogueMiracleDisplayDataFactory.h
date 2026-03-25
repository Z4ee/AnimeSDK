#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xA338BD0)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATA_OFFSET UNITYSDK_OFFSET(0xA3388F0)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xA338AA0)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0xA338890)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA338800)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA338E40)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xA338C30)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATA_OFFSET UNITYSDK_OFFSET(0xA338950)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xA338B00)
#define RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA338D00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleDisplayDataFactory_TypeDefinitionIndex = 54790;

	class RogueMiracleDisplayDataFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::IRogueMiracle*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::IRogueMiracle*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayDataFactory_TypeDefinitionIndex)->GetStaticField(0x17B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayData_1(::RPG::Client::RogueMiracleIdentifier identifier)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATA_1_OFFSET))(identifier);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayBrokenData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayDataWithCurrentRogueGlobalBlackboard(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* GetDisplayBrokenDataWithCurrentRogueGlobalBlackboard(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY_GETDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayBrokenData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayDataWithCurrentRogueGlobalBlackboard(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(miracleID);
		}

		static ::RPG::Client::IRogueMiracle* _CreateDisplayBrokenDataWithCurrentRogueGlobalBlackboard(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDISPLAYDATAFACTORY__CREATEDISPLAYBROKENDATAWITHCURRENTROGUEGLOBALBLACKBOARD_OFFSET))(miracleID);
		}
	};
}
