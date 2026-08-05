#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SystemSettingLocalData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x107F1240)
#define MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_698553500F3F5C21_OFFSET UNITYSDK_OFFSET(0x107F17C0)
#define MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_86429130494D1CDD_OFFSET UNITYSDK_OFFSET(0x107F12B0)
#define MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x107F1CE0)
#define MOLEMOLE_GENERALLOCALDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x107F0E40)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralLocalDataItem_TypeDefinitionIndex = 85842;

	class GeneralLocalDataItem : public ::System::Object
	{
	public:
		// static const ::System::String* Field_1_2; // 0x0
		::System::String* deviceUUID; // 0x10
		::System::String* userLocalDataVersionId; // 0x18
		::System::String* curAccountName; // 0x20
		::System::Int32 uid; // 0x28
		::System::UInt32 selectedServerIndex; // 0x2C
		::System::Int32 DeviceLanguageType; // 0x30
		::System::Int32 DeviceLanguageVoiceType; // 0x34
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PlayerPrefs_StringContainer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PlayerPrefs_IntContainer; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* PlayerPrefs_FloatContainer; // 0x48
		::System::Int32 LocalUILayoutPlatform; // 0x50
		::System::Int32 UILayoutManualSetRecordState; // 0x54
		::System::Int32 ControlChoosePopWindowRecordState; // 0x58
		::System::String* selectServerName; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SystemSettingLocalData*>* SystemSettingDataMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KeyboardBindingMap; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MouseBindingMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GamepadBindingMap; // 0x80
		::System::Int32 HDRSettingRecordState; // 0x88
		::System::Int32 HDRMaxLuminosityLevel; // 0x8C
		::System::Int32 HDRUIPaperWhiteLevel; // 0x90
		::System::DateTime LastVHSStoreOpenTime; // 0x98
		::System::Boolean DisableBattleUIOptimization; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		static ::System::String* Method_1_86429130494D1CDD(::MoleMole::GeneralLocalDataItem* a1)
		{
			return ((::System::String*(*)(::MoleMole::GeneralLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_86429130494D1CDD_OFFSET))(a1);
		}

		static ::MoleMole::GeneralLocalDataItem* Method_1_698553500F3F5C21(::System::String* a1)
		{
			return ((::MoleMole::GeneralLocalDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_698553500F3F5C21_OFFSET))(a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
