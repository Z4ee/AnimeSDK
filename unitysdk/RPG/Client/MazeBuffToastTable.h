#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SingleMazeBuffToastConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MAZEBUFFTOASTTABLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD5D7D10)
#define RPG_CLIENT_MAZEBUFFTOASTTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xD5D7A80)
#define RPG_CLIENT_MAZEBUFFTOASTTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xD5D7C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeBuffToastTable_TypeDefinitionIndex = 73300;

	class MazeBuffToastTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SingleMazeBuffToastConfig*>** StaticGet__MazeBuffToastLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SingleMazeBuffToastConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffToastTable_TypeDefinitionIndex)->GetStaticField(0x44910);
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnLoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::SingleMazeBuffToastConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SingleMazeBuffToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_GETCONFIG_OFFSET))(a1);
		}
	};
}
