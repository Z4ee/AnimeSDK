#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSyncMessageConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17900570)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17900580)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_WRITE_OFFSET UNITYSDK_OFFSET(0x17900650)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681__CCTOR_OFFSET UNITYSDK_OFFSET(0x17900740)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681__CTOR_OFFSET UNITYSDK_OFFSET(0x17900700)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig_Class_3_84435222CA7E8681_TypeDefinitionIndex = 43010;

	class MainCityChatSyncMessageConfig_Class_3_84435222CA7E8681 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSyncMessageConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncMessageConfig_Class_3_84435222CA7E8681_TypeDefinitionIndex)->GetStaticField(0x426B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSyncMessageConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncMessageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSyncMessageConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncMessageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_CLASS_3_84435222CA7E8681_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
