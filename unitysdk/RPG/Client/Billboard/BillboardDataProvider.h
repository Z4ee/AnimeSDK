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

#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E95DA0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLONE_OFFSET UNITYSDK_OFFSET(0x9E97870)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CREATETYPETODISTANCEMAP_OFFSET UNITYSDK_OFFSET(0x9E96C00)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETALLSETTYPES_OFFSET UNITYSDK_OFFSET(0x9E96B60)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETMAXSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E962A0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCENEAR_OFFSET UNITYSDK_OFFSET(0x9E95BC0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E96670)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9E95C90)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETVALIDSHOWBIT_OFFSET UNITYSDK_OFFSET(0x9E95E30)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GET_SHOWBIT_OFFSET UNITYSDK_OFFSET(0x9E95C70)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_HASTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9E96A50)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_ISVALIDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x9E96180)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_REMOVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x9E95D10)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETALLSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E96770)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x9E97490)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETCAKEBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x9E97740)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFIVEDIMSIDEPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x9E97560)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFLOATINGTEXTDATA_OFFSET UNITYSDK_OFFSET(0x9E97010)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETICONDATA_OFFSET UNITYSDK_OFFSET(0x9E96E40)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETINWARDBUBBLETALKDATA_OFFSET UNITYSDK_OFFSET(0x9E96F10)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x9E97310)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_OFFSET UNITYSDK_OFFSET(0x9E97120)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETONLINEPLAYERNAMEDATA_OFFSET UNITYSDK_OFFSET(0x9E97630)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWBIT_OFFSET UNITYSDK_OFFSET(0x9E97820)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCENEAR_OFFSET UNITYSDK_OFFSET(0x9E95C10)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E966F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETTITLEDATA_OFFSET UNITYSDK_OFFSET(0x9E96CE0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SET_SHOWBIT_OFFSET UNITYSDK_OFFSET(0x9E95C80)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E98590)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E98030)
#define RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__SETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x9E96DC0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardDataProvider_TypeDefinitionIndex = 69039;

	class BillboardDataProvider : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::BillboardShowType>** StaticGet__NotRequireParamTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::BillboardShowType>**)Il2CppClass::FromTypeDefinitionIndex(BillboardDataProvider_TypeDefinitionIndex)->GetStaticField(0x419B0);
		}
		::System::Collections::Generic::SortedList_2<::RPG::Client::BillboardShowType, ::RPG::Client::Billboard::IBillboardTypeData*>* _TypeDataMap; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::Client::BillboardShowType, ::System::Single>* _AllTypeShowDistanceMap; // 0x18
		::RPG::Client::BillboardShowType _ShowBit_k__BackingField; // 0x20
		::System::Single _ShowDistanceNear; // 0x24

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

		::RPG::Client::Billboard::BillboardDataProvider* SetShowDistanceNear(::System::Single distance)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCENEAR_OFFSET))(this, distance);
		}

		::RPG::Client::BillboardShowType get_ShowBit()
		{
			return ((::RPG::Client::BillboardShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GET_SHOWBIT_OFFSET))(this);
		}

		::System::Void set_ShowBit(::RPG::Client::BillboardShowType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SET_SHOWBIT_OFFSET))(this, value);
		}

		::RPG::Client::Billboard::IBillboardTypeData* GetTypeData(::RPG::Client::BillboardShowType showType)
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETTYPEDATA_OFFSET))(this, showType);
		}

		::System::Void RemoveTypeData(::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_REMOVETYPEDATA_OFFSET))(this, showType);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::BillboardShowType GetValidShowBit()
		{
			return ((::RPG::Client::BillboardShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETVALIDSHOWBIT_OFFSET))(this);
		}

		::System::Boolean IsValidShowType(::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_ISVALIDSHOWTYPE_OFFSET))(this, showType);
		}

		::System::Single GetMaxShowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETMAXSHOWDISTANCE_OFFSET))(this);
		}

		::System::Single GetShowDistance(::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETSHOWDISTANCE_OFFSET))(this, showType);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetShowDistance(::RPG::Client::BillboardShowType showType, ::System::Single distance)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::BillboardShowType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWDISTANCE_OFFSET))(this, showType, distance);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetAllShowDistance(::System::Single distance)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETALLSHOWDISTANCE_OFFSET))(this, distance);
		}

		::System::Boolean HasTypeData(::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_HASTYPEDATA_OFFSET))(this, showType);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::BillboardShowType>* GetAllSetTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BillboardShowType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_GETALLSETTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>* CreateTypeToDistanceMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CREATETYPETODISTANCEMAP_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetTitleData(::RPG::Client::TextID textTitle)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETTITLEDATA_OFFSET))(this, textTitle);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetIconData(::System::String* typeIconPath)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETICONDATA_OFFSET))(this, typeIconPath);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetInwardBubbleTalkData(::RPG::GameCore::InwardBubbleTalkType inwardType)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::GameCore::InwardBubbleTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETINWARDBUBBLETALKDATA_OFFSET))(this, inwardType);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetFloatingTextData(::RPG::Client::TextID floatingText)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFLOATINGTEXTDATA_OFFSET))(this, floatingText);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetNameData(::RPG::Client::TextID textIDName)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_OFFSET))(this, textIDName);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetNameData_1(::System::String* textStringName)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETNAMEDATA_1_OFFSET))(this, textStringName);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetBubbleData(::UnityEngine::GameObject* speaker)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETBUBBLEDATA_OFFSET))(this, speaker);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetFiveDimSidePuzzleData(::System::Tuple_2<::System::String*, ::System::String*>* panelPaths)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::Tuple_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETFIVEDIMSIDEPUZZLEDATA_OFFSET))(this, panelPaths);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetOnlinePlayerNameData(::System::String* playerName, ::System::UInt32 playerIndex, ::System::Boolean isSelf)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETONLINEPLAYERNAMEDATA_OFFSET))(this, playerName, playerIndex, isSelf);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetCakeBubbleData()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETCAKEBUBBLEDATA_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* SetShowBit(::RPG::Client::BillboardShowType showBit)
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_SETSHOWBIT_OFFSET))(this, showBit);
		}

		::RPG::Client::Billboard::BillboardDataProvider* Clone()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER_CLONE_OFFSET))(this);
		}

		::System::Void _SetTypeData(::RPG::Client::BillboardShowType type, ::RPG::Client::Billboard::IBillboardTypeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType, ::RPG::Client::Billboard::IBillboardTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDDATAPROVIDER__SETTYPEDATA_OFFSET))(this, type, data);
		}
	};
}
