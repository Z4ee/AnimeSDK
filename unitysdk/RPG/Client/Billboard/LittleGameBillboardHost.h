#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }
namespace RPG::GameCore { class LittleGameBillboardConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x91F1D10)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x91F1BA0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x91F2290)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x91F1410)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET UNITYSDK_OFFSET(0x91F1430)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x91F1F50)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x91F18B0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x91F1520)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x91F22A0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x91F1A10)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET UNITYSDK_OFFSET(0x91F1370)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CCTOR_OFFSET UNITYSDK_OFFSET(0x91F22B0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x91F0FA0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET UNITYSDK_OFFSET(0x91F1FB0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x91F1D50)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__INITPARAM_OFFSET UNITYSDK_OFFSET(0x91F1100)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET UNITYSDK_OFFSET(0x91F2130)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET UNITYSDK_OFFSET(0x91F2200)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET UNITYSDK_OFFSET(0x91F16C0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET UNITYSDK_OFFSET(0x91F1A70)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x91F1820)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int LittleGameBillboardHost_TypeDefinitionIndex = 61543;

	class LittleGameBillboardHost : public ::System::Object
	{
	public:
		static ::RPG::Client::BillboardShowType* StaticGet__DefaultShowType()
		{
			return (::RPG::Client::BillboardShowType*)Il2CppClass::FromTypeDefinitionIndex(LittleGameBillboardHost_TypeDefinitionIndex)->GetStaticField(0x115E0);
		}
		::UnityEngine::Transform* _AttachPoint; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x18
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x20
		::RPG::Client::Billboard::BillboardDataProvider* _DataProviderOrigin; // 0x28
		::RPG::GameCore::LittleGameBillboardConfig* _BillBoardConfig; // 0x30
		::System::Collections::Generic::SortedList_2<::Struct_2_6A75E669C858F984, ::System::UInt32>* _OverrideIconList; // 0x38
		::System::Single _LevelUnitLength; // 0x40

		::System::Void _ctor(::RPG::Client::Billboard::BillboardIdentifier* identifier, ::RPG::GameCore::LittleGameBillboardConfig* billboardConfig, ::System::Single levelUnitLength)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::GameCore::LittleGameBillboardConfig*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CTOR_OFFSET))(this, identifier, billboardConfig, levelUnitLength);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CCTOR_OFFSET))();
		}

		::System::Void Show(::UnityEngine::Transform* attachPoint, ::UnityEngine::GameObject* speaker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET))(this, attachPoint, speaker);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET))(this);
		}

		::System::Void SetFiveDimBillboard(::RPG::GameCore::FiveDimSetBillboardInfo* newInfo, ::System::UInt32 sourceSubMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSetBillboardInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET))(this, newInfo, sourceSubMissionID);
		}

		::System::Void ResetFiveDimBillboard(::System::UInt32 mapIconID, ::System::UInt32 sourceSubMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET))(this, mapIconID, sourceSubMissionID);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetPlayerTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETPLAYERTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETATTACHTRANS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_ISVISIBLE_OFFSET))(this);
		}

		::System::Void _InitParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__INITPARAM_OFFSET))(this);
		}

		::System::Void _TrySetCurrentFirstOverrideIconPath(::RPG::Client::Billboard::BillboardDataProvider* dataProvider)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET))(this, dataProvider);
		}

		::System::String* _GetBillboardIconPath(::System::UInt32 mapIconID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET))(this, mapIconID);
		}

		::System::Void _TryAddIcon(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET))(this, param);
		}

		::System::Void _TryRemoveIcon(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET))(this, param);
		}

		::System::Boolean _IsIconParamValid(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET))(this, param);
		}

		::System::Boolean _IsMissionRepeatAdd(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET))(this, param);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::Billboard::BillboardIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get__DataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET))(this);
		}

		::System::Void set__DataProvider(::RPG::Client::Billboard::BillboardDataProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET))(this, value);
		}
	};
}
