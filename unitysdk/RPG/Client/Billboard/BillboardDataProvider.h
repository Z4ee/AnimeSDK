#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InwardBubbleTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD882E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD8A010)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CREATETYPETODISTANCEMAP_OFFSET UNITYSDK_OFFSET(0x1BD89380)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETALLSETTYPES_OFFSET UNITYSDK_OFFSET(0x1BD89300)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETMAXSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD88950)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCENEAR_OFFSET UNITYSDK_OFFSET(0x1BD88100)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD88E30)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1BD881D0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETVALIDSHOWBIT_OFFSET UNITYSDK_OFFSET(0x1BD88370)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GET_SHOWBIT_OFFSET UNITYSDK_OFFSET(0x1BD881B0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_HASTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89270)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_ISVALIDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1BD887E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_REMOVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x1BD88250)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETALLSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD88F30)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89C30)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETCAKEBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89EE0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFIVEDIMSIDEPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89D00)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFLOATINGTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1BD89790)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETICONDATA_OFFSET UNITYSDK_OFFSET(0x1BD895C0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETINWARDBUBBLETALKDATA_OFFSET UNITYSDK_OFFSET(0x1BD89690)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x1BD89AA0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_OFFSET UNITYSDK_OFFSET(0x1BD898A0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETONLINEPLAYERNAMEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89DD0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWBIT_OFFSET UNITYSDK_OFFSET(0x1BD89FC0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCENEAR_OFFSET UNITYSDK_OFFSET(0x1BD88150)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD88EB0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETTITLEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89460)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SET_SHOWBIT_OFFSET UNITYSDK_OFFSET(0x1BD881C0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD8AF90)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8AA50)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__SETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1BD89540)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardDataProvider_TypeDefinitionIndex = 74680;

	class BillboardDataProvider : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::BillboardShowType>** StaticGet__NotRequireParamTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::BillboardShowType>**)Il2CppClass::FromTypeDefinitionIndex(BillboardDataProvider_TypeDefinitionIndex)->GetStaticField(0xFDD0);
		}
		::System::Collections::Generic::SortedList_2<::RPG::Client::BillboardShowType, ::System::Single>* _AllTypeShowDistanceMap; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::Client::BillboardShowType, ::RPG::Client::Billboard::IBillboardTypeData*>* _TypeDataMap; // 0x18
		::System::Single _ShowDistanceNear; // 0x20
		::RPG::Client::BillboardShowType _ShowBit_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CCTOR_OFFSET))();
		}

		::System::Single GetShowDistanceNear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCENEAR_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetShowDistanceNear(::System::Single a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCENEAR_OFFSET))(this, a1);
		}

		::RPG::Client::BillboardShowType get_ShowBit()
		{
			return ((::RPG::Client::BillboardShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GET_SHOWBIT_OFFSET))(this);
		}

		::System::Void set_ShowBit(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SET_SHOWBIT_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::IBillboardTypeData* GetTypeData(::RPG::Client::BillboardShowType a1)
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETTYPEDATA_OFFSET))(this, a1);
		}

		::System::Void RemoveTypeData(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_REMOVETYPEDATA_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::BillboardShowType GetValidShowBit()
		{
			return ((::RPG::Client::BillboardShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETVALIDSHOWBIT_OFFSET))(this);
		}

		::System::Boolean IsValidShowType(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_ISVALIDSHOWTYPE_OFFSET))(this, a1);
		}

		::System::Single GetMaxShowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETMAXSHOWDISTANCE_OFFSET))(this);
		}

		::System::Single GetShowDistance(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetShowDistance(::RPG::Client::BillboardShowType a1, ::System::Single a2)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::BillboardShowType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetAllShowDistance(::System::Single a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETALLSHOWDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean HasTypeData(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_HASTYPEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::BillboardShowType>* GetAllSetTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BillboardShowType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETALLSETTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>* CreateTypeToDistanceMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CREATETYPETODISTANCEMAP_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetTitleData(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETTITLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetIconData(::System::String* a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETICONDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetInwardBubbleTalkData(::RPG::GameCore::InwardBubbleTalkType a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::GameCore::InwardBubbleTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETINWARDBUBBLETALKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetFloatingTextData(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFLOATINGTEXTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetNameData(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetNameData_1(::System::String* a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_1_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetBubbleData(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETBUBBLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetFiveDimSidePuzzleData(::System::Tuple_2<::System::String*, ::System::String*>* a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Tuple_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFIVEDIMSIDEPUZZLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetOnlinePlayerNameData(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETONLINEPLAYERNAMEDATA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetCakeBubbleData()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETCAKEBUBBLEDATA_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetShowBit(::RPG::Client::BillboardShowType a1)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWBIT_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* Clone()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLONE_OFFSET))(this);
		}

		::System::Void _SetTypeData(::RPG::Client::BillboardShowType a1, ::RPG::Client::Billboard::IBillboardTypeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType, ::RPG::Client::Billboard::IBillboardTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__SETTYPEDATA_OFFSET))(this, a1, a2);
		}
	};
}
