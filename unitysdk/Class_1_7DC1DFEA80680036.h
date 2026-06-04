#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_1_7DC1DFEA80680036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134F13F0)
#define CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x134F1960)
#define CLASS_1_7DC1DFEA80680036_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x134F1BB0)
#define CLASS_1_7DC1DFEA80680036_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x134F1620)
#define CLASS_1_7DC1DFEA80680036_GET_HASH_OFFSET UNITYSDK_OFFSET(0x134F1480)
#define CLASS_1_7DC1DFEA80680036_GET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x134F1B90)
#define CLASS_1_7DC1DFEA80680036_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x134F14A0)
#define CLASS_1_7DC1DFEA80680036_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x134F16C0)
#define CLASS_1_7DC1DFEA80680036_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x134F1580)
#define CLASS_1_7DC1DFEA80680036_GET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x134F1640)
#define CLASS_1_7DC1DFEA80680036_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x134F16A0)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x134F1CE0)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x134F1680)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x134F1660)
#define CLASS_1_7DC1DFEA80680036_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x134F15A0)
#define CLASS_1_7DC1DFEA80680036_GET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x134F1440)
#define CLASS_1_7DC1DFEA80680036_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x134F15C0)
#define CLASS_1_7DC1DFEA80680036_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x134F1460)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x134F1600)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x134F15E0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x134F12D0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x134F1D00)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x134F13A0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_426E22E2B185077C_OFFSET UNITYSDK_OFFSET(0x134F1220)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_1_OFFSET UNITYSDK_OFFSET(0x134F2060)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x134F1E70)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x134F19F0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_88739BF91E158878_OFFSET UNITYSDK_OFFSET(0x134F16E0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_9B54C843C088933F_OFFSET UNITYSDK_OFFSET(0x134F2130)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x134F18D0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x134F1BD0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0x134F1F50)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x134F22F0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_E18211EE07F8BC27_OFFSET UNITYSDK_OFFSET(0x134F1150)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_E8702C4614090520_OFFSET UNITYSDK_OFFSET(0x134F2140)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x134F2300)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x134F1F60)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x134F1D60)
#define CLASS_1_7DC1DFEA80680036_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x134F1BC0)
#define CLASS_1_7DC1DFEA80680036_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x134F1630)
#define CLASS_1_7DC1DFEA80680036_SET_HASH_OFFSET UNITYSDK_OFFSET(0x134F1490)
#define CLASS_1_7DC1DFEA80680036_SET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x134F1BA0)
#define CLASS_1_7DC1DFEA80680036_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x134F16D0)
#define CLASS_1_7DC1DFEA80680036_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x134F1590)
#define CLASS_1_7DC1DFEA80680036_SET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x134F1650)
#define CLASS_1_7DC1DFEA80680036_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x134F16B0)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x134F1CF0)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x134F1690)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x134F1670)
#define CLASS_1_7DC1DFEA80680036_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x134F15B0)
#define CLASS_1_7DC1DFEA80680036_SET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x134F1450)
#define CLASS_1_7DC1DFEA80680036_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x134F15D0)
#define CLASS_1_7DC1DFEA80680036_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x134F1470)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x134F1610)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x134F15F0)
#define CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET UNITYSDK_OFFSET(0x134F2310)
#define CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134F1110)
#define CLASS_1_7DC1DFEA80680036__CTOR_OFFSET UNITYSDK_OFFSET(0x134F10F0)
#define CLASS_1_7DC1DFEA80680036___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x134F2400)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_TypeDefinitionIndex = 56672;

class Class_1_7DC1DFEA80680036 : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* _PropTarget_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 _Hash_k__BackingField; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x2C
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x30
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x34
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x44
	::System::Int32 _Priority_k__BackingField; // 0x48
	::System::Int32 Field_1_10; // 0x4C
	::UnityEngine::Color _IconColor_k__BackingField; // 0x50
	::System::Int32 _Identifier_k__BackingField; // 0x60
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x64
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x65
	::System::Boolean _IsMission_k__BackingField; // 0x66
	::System::Boolean _CanTint_k__BackingField; // 0x67
	::System::Single _RangeRadius_k__BackingField; // 0x68
	::System::Boolean _IsTrackingConnectivity_k__BackingField; // 0x6C
	::System::Boolean Field_1_19; // 0x6D
	::System::Nullable_1<::System::Boolean> Field_1_20; // 0x6E
	::System::Boolean _IsStatic_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_426E22E2B185077C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_426E22E2B185077C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_E18211EE07F8BC27(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_E18211EE07F8BC27_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_03BE804B9317DF84(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_03BE804B9317DF84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* get_PropTarget()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_PROPTARGET_OFFSET))(this);
	}

	::System::Void set_PropTarget(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_PROPTARGET_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Target()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_TARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_HASH_OFFSET))(this, a1);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONID_OFFSET))(this);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_RANGERADIUS_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_CIRCLECOLOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISMISSION_OFFSET))(this);
	}

	::System::Void set_IsMission(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISMISSION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISSTATIC_OFFSET))(this, a1);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ICONTYPE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_88739BF91E158878()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_88739BF91E158878_OFFSET))(this);
	}

	::System::Boolean Method_1_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_9F84D1FF74319152_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::UnityEngine::Color get_IconColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONCOLOR_OFFSET))(this);
	}

	::System::Void set_IconColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ICONCOLOR_OFFSET))(this, a1);
	}

	::System::Boolean get_CanTint()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_CANTINT_OFFSET))(this);
	}

	::System::Void set_CanTint(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_CANTINT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Boolean get_IsTrackingConnectivity()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGCONNECTIVITY_OFFSET))(this);
	}

	::System::Void set_IsTrackingConnectivity(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGCONNECTIVITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_1_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_BFD792E814D995C0()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_BFD792E814D995C0_OFFSET))(this);
	}

	::System::Single Method_1_FAE9C4050544FE63_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_9B54C843C088933F()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_9B54C843C088933F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_E8702C4614090520()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_E8702C4614090520_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
