#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapEntityDef; }

#define CLASS_1_7DC1DFEA80680036_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D09300)
#define CLASS_1_7DC1DFEA80680036_1_GET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x8D09370)
#define CLASS_1_7DC1DFEA80680036_1_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x8D09830)
#define CLASS_1_7DC1DFEA80680036_1_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x8D09430)
#define CLASS_1_7DC1DFEA80680036_1_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x8D09590)
#define CLASS_1_7DC1DFEA80680036_1_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x8D09410)
#define CLASS_1_7DC1DFEA80680036_1_GET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x8D09350)
#define CLASS_1_7DC1DFEA80680036_1_GET_HASH_OFFSET UNITYSDK_OFFSET(0x8D093B0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x8D093F0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x8D095E0)
#define CLASS_1_7DC1DFEA80680036_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8D09390)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x8D094B0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x8D094F0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x8D094D0)
#define CLASS_1_7DC1DFEA80680036_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D095B0)
#define CLASS_1_7DC1DFEA80680036_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8D093D0)
#define CLASS_1_7DC1DFEA80680036_1_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x8D09530)
#define CLASS_1_7DC1DFEA80680036_1_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x8D09AB0)
#define CLASS_1_7DC1DFEA80680036_1_GET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0x8D09A90)
#define CLASS_1_7DC1DFEA80680036_1_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x8D09510)
#define CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x8D09570)
#define CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x8D09550)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x8D091E0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8D09770)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8D09450)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_222640CE7F3FC014_OFFSET UNITYSDK_OFFSET(0x8D08C40)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_22480F729441D318_OFFSET UNITYSDK_OFFSET(0x8D09C10)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_32AD1EA306F6A2E7_OFFSET UNITYSDK_OFFSET(0x8D09C20)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8D092B0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_4737D68B509F6660_OFFSET UNITYSDK_OFFSET(0x8D09030)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x8D09AE0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x8D098F0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8D09BF0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_D30FF8DA38644CB5_OFFSET UNITYSDK_OFFSET(0x8D08F60)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_E484FCEE887E43F1_OFFSET UNITYSDK_OFFSET(0x8D09600)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8D09C00)
#define CLASS_1_7DC1DFEA80680036_1_SET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x8D09380)
#define CLASS_1_7DC1DFEA80680036_1_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x8D09440)
#define CLASS_1_7DC1DFEA80680036_1_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x8D095A0)
#define CLASS_1_7DC1DFEA80680036_1_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x8D09420)
#define CLASS_1_7DC1DFEA80680036_1_SET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x8D09360)
#define CLASS_1_7DC1DFEA80680036_1_SET_HASH_OFFSET UNITYSDK_OFFSET(0x8D093C0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ICONID_OFFSET UNITYSDK_OFFSET(0x8D09400)
#define CLASS_1_7DC1DFEA80680036_1_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x8D095F0)
#define CLASS_1_7DC1DFEA80680036_1_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8D093A0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x8D094C0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x8D09500)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x8D094E0)
#define CLASS_1_7DC1DFEA80680036_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D095D0)
#define CLASS_1_7DC1DFEA80680036_1_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8D093E0)
#define CLASS_1_7DC1DFEA80680036_1_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x8D09540)
#define CLASS_1_7DC1DFEA80680036_1_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x8D09AD0)
#define CLASS_1_7DC1DFEA80680036_1_SET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0x8D09AA0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x8D09520)
#define CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x8D09580)
#define CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x8D09560)
#define CLASS_1_7DC1DFEA80680036_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D09D70)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_1_TypeDefinitionIndex = 49123;

class Class_1_7DC1DFEA80680036_1 : public ::System::Object
{
public:
	::RPG::Client::MapAnchorDef* _AnchorDef_k__BackingField; // 0x10
	::RPG::Client::MapEntityDef* _EntityDef_k__BackingField; // 0x18
	::System::Single _RangeRadius_k__BackingField; // 0x20
	::System::Nullable_1<::System::Boolean> Field_1_21; // 0x24
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x26
	::System::Boolean _IsStatic_k__BackingField; // 0x27
	::System::Boolean _CanTint_k__BackingField; // 0x28
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x2C
	::System::Int32 _Identifier_k__BackingField; // 0x30
	::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x34
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x40
	::System::Boolean Field_1_20; // 0x41
	::System::Single _RawRotation_k__BackingField; // 0x44
	::System::Single _Rotation_k__BackingField; // 0x48
	::UnityEngine::Color _Color_k__BackingField; // 0x4C
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x5C
	::System::Int32 _Hash_k__BackingField; // 0x60
	::System::Int32 _Priority_k__BackingField; // 0x64
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x68
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x6C
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x78
	::System::UInt32 _IconID_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_222640CE7F3FC014(::RPG::Client::MapEntityDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_222640CE7F3FC014_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4737D68B509F6660(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_4737D68B509F6660_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_03BE804B9317DF84(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_03BE804B9317DF84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_DISPOSE_OFFSET))(this);
	}

	static ::System::Int32 Method_1_D30FF8DA38644CB5(::System::Object* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::System::Object*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_D30FF8DA38644CB5_OFFSET))(a1, a2, a3);
	}

	::RPG::Client::MapEntityDef* get_EntityDef()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ENTITYDEF_OFFSET))(this);
	}

	::System::Void set_EntityDef(::RPG::Client::MapEntityDef* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ENTITYDEF_OFFSET))(this, value);
	}

	::RPG::Client::MapAnchorDef* get_AnchorDef()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ANCHORDEF_OFFSET))(this);
	}

	::System::Void set_AnchorDef(::RPG::Client::MapAnchorDef* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ANCHORDEF_OFFSET))(this, value);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_HASH_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_PRIORITY_OFFSET))(this, value);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ICONID_OFFSET))(this);
	}

	::System::Void set_IconID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ICONID_OFFSET))(this, value);
	}

	::UnityEngine::Color get_Color()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_COLOR_OFFSET))(this);
	}

	::System::Void set_Color(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_COLOR_OFFSET))(this, value);
	}

	::System::Boolean get_CanTint()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_CANTINT_OFFSET))(this);
	}

	::System::Void set_CanTint(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_CANTINT_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISSTATIC_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMISSION_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, value);
	}

	::System::Single get_Rotation()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ROTATION_OFFSET))(this, value);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RANGERADIUS_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, value);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_CIRCLECOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_POSITION_OFFSET))(this, value);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ICONTYPE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_E484FCEE887E43F1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_E484FCEE887E43F1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Single get_RawRotation()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RAWROTATION_OFFSET))(this);
	}

	::System::Void set_RawRotation(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RAWROTATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_RawPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RAWPOSITION_OFFSET))(this);
	}

	::System::Void set_RawPosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RAWPOSITION_OFFSET))(this, value);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_22480F729441D318()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_22480F729441D318_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_32AD1EA306F6A2E7()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_32AD1EA306F6A2E7_OFFSET))(this);
	}
};
