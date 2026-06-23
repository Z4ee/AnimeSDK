#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerAddedTextureStatus.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class PLayerSheetConfig; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerExtraSheetConfigData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerSheetConfigData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1418A4B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1418A4C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1418A6A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1418A840)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1418A800)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int PLayerSheetConfig_PLayerSheetConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 69794;

	class PLayerSheetConfig_PLayerSheetConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PLayerSheetConfig_PLayerSheetConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x485C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PLayerSheetConfig_PLayerSheetConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x485C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_PLAYERSHEETCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
