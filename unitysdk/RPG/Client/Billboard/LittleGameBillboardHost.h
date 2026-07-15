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

#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x19FDF060)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x19FDEEF0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19FDF660)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19FDE510)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET UNITYSDK_OFFSET(0x19FDE560)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19FDF2F0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x19FDEB50)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x19FDE6A0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19FDF670)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x19FDED00)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET UNITYSDK_OFFSET(0x19FDE440)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FDF680)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDDFD0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET UNITYSDK_OFFSET(0x19FDF350)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19FDF0A0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__INITPARAM_OFFSET UNITYSDK_OFFSET(0x19FDE150)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET UNITYSDK_OFFSET(0x19FDF4D0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET UNITYSDK_OFFSET(0x19FDF5A0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET UNITYSDK_OFFSET(0x19FDE8F0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET UNITYSDK_OFFSET(0x19FDED60)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x19FDEAC0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int LittleGameBillboardHost_TypeDefinitionIndex = 71390;

	class LittleGameBillboardHost : public ::System::Object
	{
	public:
		static ::RPG::Client::BillboardShowType* StaticGet__DefaultShowType()
		{
			return (::RPG::Client::BillboardShowType*)Il2CppClass::FromTypeDefinitionIndex(LittleGameBillboardHost_TypeDefinitionIndex)->GetStaticField(0xF720);
		}
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x10
		::RPG::Client::Billboard::BillboardDataProvider* _DataProviderOrigin; // 0x18
		::RPG::GameCore::LittleGameBillboardConfig* _BillBoardConfig; // 0x20
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x28
		::System::Collections::Generic::SortedList_2<::Struct_2_6A75E669C858F984, ::System::UInt32>* _OverrideIconList; // 0x30
		::UnityEngine::Transform* _AttachPoint; // 0x38
		::System::Single _LevelUnitLength; // 0x40

		::System::Void _ctor(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::GameCore::LittleGameBillboardConfig* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::GameCore::LittleGameBillboardConfig*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__CCTOR_OFFSET))();
		}

		::System::Void Show(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET))(this);
		}

		::System::Void SetFiveDimBillboard(::RPG::GameCore::FiveDimSetBillboardInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSetBillboardInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET))(this, a1, a2);
		}

		::System::Void ResetFiveDimBillboard(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET))(this, a1, a2);
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

		::System::Void _TrySetCurrentFirstOverrideIconPath(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET))(this, a1);
		}

		::System::String* _GetBillboardIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET))(this, a1);
		}

		::System::Void _TryAddIcon(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET))(this, a1);
		}

		::System::Void _TryRemoveIcon(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET))(this, a1);
		}

		::System::Boolean _IsIconParamValid(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET))(this, a1);
		}

		::System::Boolean _IsMissionRepeatAdd(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get__DataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET))(this);
		}

		::System::Void set__DataProvider(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET))(this, a1);
		}
	};
}
