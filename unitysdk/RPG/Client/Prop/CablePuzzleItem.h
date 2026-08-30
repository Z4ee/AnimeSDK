#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ADDLIGHTINDIR_OFFSET UNITYSDK_OFFSET(0xDBF8110)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ANIMROTATEREFRESHDIRECTION_OFFSET UNITYSDK_OFFSET(0xDBF72C0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_CANCELHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xDBEF420)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_CANSELECT_OFFSET UNITYSDK_OFFSET(0xDBF2D20)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_CONNECTNEIGHBOURWITHPOWER_OFFSET UNITYSDK_OFFSET(0xDBF3C00)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBF01A0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETABSDIRBYLOCALDIR_OFFSET UNITYSDK_OFFSET(0xDBF7A70)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETALLCONNECTEDNEIGHBOURS_OFFSET UNITYSDK_OFFSET(0xDBF3520)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETALLOUTCONNECTEDNEIGHBOURS_OFFSET UNITYSDK_OFFSET(0xDBF5360)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETINTERFACECOUNT_OFFSET UNITYSDK_OFFSET(0xDBF3DC0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETNEIGHBOURBYDIR_OFFSET UNITYSDK_OFFSET(0xDBF0740)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETNEIGHBOURDIR_OFFSET UNITYSDK_OFFSET(0xDBF7B70)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETTARGETROTATION_OFFSET UNITYSDK_OFFSET(0xDBF74B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETTRANSFORMUP_OFFSET UNITYSDK_OFFSET(0xDBF6190)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_GET_RECORDEDCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0xDBF8290)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_HASINTERFACE_OFFSET UNITYSDK_OFFSET(0xDBF75E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xDBF1580)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ISCONNECTEDWITH_OFFSET UNITYSDK_OFFSET(0xDBF7550)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ISDIRIN_OFFSET UNITYSDK_OFFSET(0xDBF81D0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTCENTER_OFFSET UNITYSDK_OFFSET(0xDBF4FE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0xDBF50C0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTUPALLINTERFACE_OFFSET UNITYSDK_OFFSET(0xDBF3E90)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_6092AEA4D26D2BAB_OFFSET UNITYSDK_OFFSET(0xDBF76A0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xDBF7380)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xDBF6480)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_9A1F0FE9325E6340_OFFSET UNITYSDK_OFFSET(0xDBF7400)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_BDB9601CB2A37614_OFFSET UNITYSDK_OFFSET(0xDBF7980)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xDBEF4E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xDBF2DD0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_RECORDCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0xDBF6030)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_REFRESHDIRECTION_OFFSET UNITYSDK_OFFSET(0xDBF1750)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETDIR_OFFSET UNITYSDK_OFFSET(0xDBF5810)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETLIGHTINDIR_OFFSET UNITYSDK_OFFSET(0xDBF7AE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETPOWER_OFFSET UNITYSDK_OFFSET(0xDBF2310)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLIGHTINDIR_OFFSET UNITYSDK_OFFSET(0xDBF5560)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xDBF6340)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLOCKRELATION_OFFSET UNITYSDK_OFFSET(0xDBF2D80)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETPOWERCENTERLIGHT_OFFSET UNITYSDK_OFFSET(0xDBF3E40)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETUPNEIGHOUR_OFFSET UNITYSDK_OFFSET(0xDBF0F50)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_SET_RECORDEDCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0xDBF82B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM_START_OFFSET UNITYSDK_OFFSET(0xDBF6430)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBF8390)
#define RPG_CLIENT_PROP_CABLEPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDBF82D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleItem_TypeDefinitionIndex = 78137;

	class CablePuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_CKLFPDDDCEE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142E0);
		}
		static ::System::Int32* StaticGet_FPNBGKFCGMH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142E4);
		}
		static ::System::Int32* StaticGet_KJEFHEDGDPJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142E8);
		}
		static ::System::Int32* StaticGet_CFFILJELCDI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142EC);
		}
		static ::System::Int32* StaticGet_GNNBFJCPIAI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142F0);
		}
		static ::System::Int32* StaticGet_NBHJKDOPFNG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142F4);
		}
		static ::System::Int32* StaticGet_DEOAKFBHPJG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x142F8);
		}
		::System::Int32 dir; // 0x30
		::System::Boolean IsInteractable; // 0x34
		::Il2CppArray<::System::Boolean>* InterfaceConfigs; // 0x38
		::System::Boolean IsPower; // 0x40
		::System::Boolean IsTarget; // 0x41
		::System::Boolean IsDisableNode; // 0x42
		::UnityEngine::Transform* RotateRoot; // 0x48
		::UnityEngine::GameObject* Center; // 0x50
		::UnityEngine::GameObject* CenterEndPoint; // 0x58
		::UnityEngine::GameObject* CenterStartPoint; // 0x60
		::UnityEngine::GameObject* Edge; // 0x68
		::UnityEngine::GameObject* RotatableItem; // 0x70
		::UnityEngine::GameObject* NonRotatableItem; // 0x78
		::RPG::Client::Prop::CablePuzzleItem* North; // 0x80
		::RPG::Client::Prop::CablePuzzleItem* South; // 0x88
		::RPG::Client::Prop::CablePuzzleItem* WestNorth; // 0x90
		::RPG::Client::Prop::CablePuzzleItem* WestSouth; // 0x98
		::RPG::Client::Prop::CablePuzzleItem* EastNorth; // 0xA0
		::RPG::Client::Prop::CablePuzzleItem* EastSouth; // 0xA8
		::System::Boolean IsRotate; // 0xB0
		::System::Boolean IsLockRelation; // 0xB1
		::UnityEngine::Vector3 _RecordedCurrentPosition_k__BackingField; // 0xB4
		::System::Collections::Generic::HashSet_1<::System::Int32>* MHICNHKECAI; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* INPPEDDPPKH; // 0xC8
		::UnityEngine::Animator* FEAGCJINMPB; // 0xD0
		::UnityEngine::Animator* JOGLHFFLEJC; // 0xD8
		::UnityEngine::Animator* IBIKLGAGNHK; // 0xE0
		::UnityEngine::Animator* JCCMPKGCGKC; // 0xE8
		::System::Int32 OKIGMOOKHDD; // 0xF0
		::System::Boolean OMONLECFCID; // 0xF4
		::System::Boolean JNPCBHMLLDE; // 0xF5
		::UnityEngine::Transform* GMIHCNJFHKC; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* JDLBEBBJIHF; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_START_OFFSET))(this);
		}

		::System::Void ResetDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETDIR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void OnHighLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ONHIGHLIGHT_OFFSET))(this);
		}

		::System::Void CancelHighLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_CANCELHIGHLIGHT_OFFSET))(this);
		}

		::System::Boolean CanSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_CANSELECT_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void AnimRotateRefreshDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ANIMROTATEREFRESHDIRECTION_OFFSET))(this);
		}

		::System::Void SetLockRelation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLOCKRELATION_OFFSET))(this, a1);
		}

		::System::Void Method_7_9A1F0FE9325E6340(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_9A1F0FE9325E6340_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_7_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_7_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void SetupNeighour(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETUPNEIGHOUR_OFFSET))(this, a1);
		}

		::System::Void RefreshDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_REFRESHDIRECTION_OFFSET))(this);
		}

		::System::Void SetLocalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetTransformUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETTRANSFORMUP_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETTARGETROTATION_OFFSET))(this);
		}

		::System::Boolean IsConnectedWith(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ISCONNECTEDWITH_OFFSET))(this, a1);
		}

		::System::Void ResetPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETPOWER_OFFSET))(this);
		}

		::System::Void SetPowerCenterLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETPOWERCENTERLIGHT_OFFSET))(this, a1);
		}

		::System::Void ConnectNeighbourWithPower(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_CONNECTNEIGHBOURWITHPOWER_OFFSET))(this, a1);
		}

		::System::Void LightupAllInterface(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTUPALLINTERFACE_OFFSET))(this, a1);
		}

		::System::Boolean HasInterface(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_HASINTERFACE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* GetAllConnectedNeighbours()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETALLCONNECTEDNEIGHBOURS_OFFSET))(this);
		}

		::System::Int32 GetInterfaceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETINTERFACECOUNT_OFFSET))(this);
		}

		::System::Void ResetLightInDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_RESETLIGHTINDIR_OFFSET))(this);
		}

		::System::Void LightDir(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTDIR_OFFSET))(this, a1);
		}

		::System::Void LightCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_LIGHTCENTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* GetAllOutConnectedNeighbours()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETALLOUTCONNECTEDNEIGHBOURS_OFFSET))(this);
		}

		::System::Boolean SetLightInDir(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SETLIGHTINDIR_OFFSET))(this, a1);
		}

		::System::Boolean IsDirIn(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ISDIRIN_OFFSET))(this, a1);
		}

		::System::Void AddLightInDir(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_ADDLIGHTINDIR_OFFSET))(this, a1);
		}

		::System::Int32 GetNeighbourDir(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETNEIGHBOURDIR_OFFSET))(this, a1);
		}

		::System::Int32 GetAbsDirByLocalDir(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETABSDIRBYLOCALDIR_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::CablePuzzleItem* GetNeighbourByDir(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::CablePuzzleItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GETNEIGHBOURBYDIR_OFFSET))(this, a1);
		}

		::System::Void RecordCurrentPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_RECORDCURRENTPOSITION_OFFSET))(this);
		}

		::System::Int32 Method_7_BDB9601CB2A37614(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_BDB9601CB2A37614_OFFSET))(this, a1);
		}

		::System::Void Method_7_6092AEA4D26D2BAB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_METHOD_7_6092AEA4D26D2BAB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_RecordedCurrentPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_GET_RECORDEDCURRENTPOSITION_OFFSET))(this);
		}

		::System::Void set_RecordedCurrentPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEITEM_SET_RECORDEDCURRENTPOSITION_OFFSET))(this, a1);
		}
	};
}
