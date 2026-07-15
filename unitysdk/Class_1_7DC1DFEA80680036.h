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

#define CLASS_1_7DC1DFEA80680036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1676AF70)
#define CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1676B5E0)
#define CLASS_1_7DC1DFEA80680036_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1676B8F0)
#define CLASS_1_7DC1DFEA80680036_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1676B1A0)
#define CLASS_1_7DC1DFEA80680036_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1676B000)
#define CLASS_1_7DC1DFEA80680036_GET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x1676B8D0)
#define CLASS_1_7DC1DFEA80680036_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1676B020)
#define CLASS_1_7DC1DFEA80680036_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1676B240)
#define CLASS_1_7DC1DFEA80680036_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1676B100)
#define CLASS_1_7DC1DFEA80680036_GET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x1676B1C0)
#define CLASS_1_7DC1DFEA80680036_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1676B220)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1676BA20)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1676B200)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x1676B1E0)
#define CLASS_1_7DC1DFEA80680036_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1676B120)
#define CLASS_1_7DC1DFEA80680036_GET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x1676AFC0)
#define CLASS_1_7DC1DFEA80680036_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1676B140)
#define CLASS_1_7DC1DFEA80680036_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1676AFE0)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1676B180)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1676B160)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_0238911D7A5397DA_OFFSET UNITYSDK_OFFSET(0x1676AD20)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x1676AE50)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1676BA40)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1676AF20)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x1676B450)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_1_OFFSET UNITYSDK_OFFSET(0x1676BDB0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x1676BBC0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_62C421665E41614E_OFFSET UNITYSDK_OFFSET(0x1676BE90)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_88739BF91E158878_OFFSET UNITYSDK_OFFSET(0x1676B260)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_940CBEE260E15469_OFFSET UNITYSDK_OFFSET(0x1676BE80)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x1676B670)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1676B910)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0x1676BCA0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1676C0B0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_E18211EE07F8BC27_OFFSET UNITYSDK_OFFSET(0x1676AC50)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1676C0C0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x1676BCB0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x1676BAB0)
#define CLASS_1_7DC1DFEA80680036_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1676B900)
#define CLASS_1_7DC1DFEA80680036_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1676B1B0)
#define CLASS_1_7DC1DFEA80680036_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1676B010)
#define CLASS_1_7DC1DFEA80680036_SET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x1676B8E0)
#define CLASS_1_7DC1DFEA80680036_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1676B250)
#define CLASS_1_7DC1DFEA80680036_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1676B110)
#define CLASS_1_7DC1DFEA80680036_SET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x1676B1D0)
#define CLASS_1_7DC1DFEA80680036_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1676B230)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1676BA30)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1676B210)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x1676B1F0)
#define CLASS_1_7DC1DFEA80680036_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1676B130)
#define CLASS_1_7DC1DFEA80680036_SET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x1676AFD0)
#define CLASS_1_7DC1DFEA80680036_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1676B150)
#define CLASS_1_7DC1DFEA80680036_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1676AFF0)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1676B190)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1676B170)
#define CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1676C0D0)
#define CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1676AC10)
#define CLASS_1_7DC1DFEA80680036__CTOR_OFFSET UNITYSDK_OFFSET(0x1676ABF0)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_TypeDefinitionIndex = 57918;

class Class_1_7DC1DFEA80680036 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x10
	::RPG::GameCore::PropComponent* _PropTarget_k__BackingField; // 0x18
	::System::Single _RangeRadius_k__BackingField; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x28
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x2C
	::System::Int32 _Identifier_k__BackingField; // 0x30
	::System::Int32 _Hash_k__BackingField; // 0x34
	::System::UInt32 Field_1_8; // 0x38
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x3C
	::System::Boolean _IsTrackingConnectivity_k__BackingField; // 0x40
	::System::Boolean _IsStatic_k__BackingField; // 0x41
	::System::Boolean _CanTint_k__BackingField; // 0x42
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x43
	::UnityEngine::Color _IconColor_k__BackingField; // 0x44
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x54
	::System::Boolean _IsMission_k__BackingField; // 0x55
	::System::Boolean Field_1_17; // 0x56
	::System::Nullable_1<::System::Boolean> Field_1_18; // 0x57
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x5C
	::System::Int32 Field_1_20; // 0x6C
	::System::Int32 _Priority_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_0238911D7A5397DA(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_0238911D7A5397DA_OFFSET))(a1, a2, a3);
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

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_97BE07E876064FAC_OFFSET))(this);
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

	::UnityEngine::Vector2 Method_1_940CBEE260E15469()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_940CBEE260E15469_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_62C421665E41614E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_62C421665E41614E_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET))(this);
	}
};
