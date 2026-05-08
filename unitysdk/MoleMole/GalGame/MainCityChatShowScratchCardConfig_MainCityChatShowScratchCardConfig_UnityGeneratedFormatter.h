#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowScratchCardConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1428A1D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1428A1E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1428A310)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1428A450)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1428A410)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowScratchCardConfig_MainCityChatShowScratchCardConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 73911;

	class MainCityChatShowScratchCardConfig_MainCityChatShowScratchCardConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowScratchCardConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowScratchCardConfig_MainCityChatShowScratchCardConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowScratchCardConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowScratchCardConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowScratchCardConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowScratchCardConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_MAINCITYCHATSHOWSCRATCHCARDCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
