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

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144DD530)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144DD540)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_WRITE_OFFSET UNITYSDK_OFFSET(0x144DD6D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D__CCTOR_OFFSET UNITYSDK_OFFSET(0x144DD830)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D__CTOR_OFFSET UNITYSDK_OFFSET(0x144DD7F0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int PLayerSheetConfig_Class_3_88ADFAFC5F30C52D_TypeDefinitionIndex = 50375;

	class PLayerSheetConfig_Class_3_88ADFAFC5F30C52D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PLayerSheetConfig_Class_3_88ADFAFC5F30C52D_TypeDefinitionIndex)->GetStaticField(0x3A000);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PLayerSheetConfig_Class_3_88ADFAFC5F30C52D_TypeDefinitionIndex)->GetStaticField(0x3A008);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_CLASS_3_88ADFAFC5F30C52D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
