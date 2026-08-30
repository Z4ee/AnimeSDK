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

#define CLASS_1_7DC1DFEA80680036_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16437760)
#define CLASS_1_7DC1DFEA80680036_1_GET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x164377D0)
#define CLASS_1_7DC1DFEA80680036_1_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB4E90A0)
#define CLASS_1_7DC1DFEA80680036_1_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB4E8CE0)
#define CLASS_1_7DC1DFEA80680036_1_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xB4E8E40)
#define CLASS_1_7DC1DFEA80680036_1_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xB4E8CC0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x164377B0)
#define CLASS_1_7DC1DFEA80680036_1_GET_HASH_OFFSET UNITYSDK_OFFSET(0xB4E8C60)
#define CLASS_1_7DC1DFEA80680036_1_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xB4E8CA0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB4E8E90)
#define CLASS_1_7DC1DFEA80680036_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164377F0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB4E8D60)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xB4E8DA0)
#define CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xB4E8D80)
#define CLASS_1_7DC1DFEA80680036_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB4E8E60)
#define CLASS_1_7DC1DFEA80680036_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB4E8C80)
#define CLASS_1_7DC1DFEA80680036_1_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xB4E8DE0)
#define CLASS_1_7DC1DFEA80680036_1_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0xB4E9350)
#define CLASS_1_7DC1DFEA80680036_1_GET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0xB4E9330)
#define CLASS_1_7DC1DFEA80680036_1_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB4E8DC0)
#define CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xB4E8E20)
#define CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xB4E8E00)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x16437640)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xB4E9020)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB4E8D00)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_22480F729441D318_OFFSET UNITYSDK_OFFSET(0xB4E94C0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_32AD1EA306F6A2E7_OFFSET UNITYSDK_OFFSET(0xB4E94D0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16437710)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_4737D68B509F6660_OFFSET UNITYSDK_OFFSET(0x16437480)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_7DFE24A5707FC0B2_OFFSET UNITYSDK_OFFSET(0x164372D0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0xB4E9160)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_B128C90853E23A16_OFFSET UNITYSDK_OFFSET(0xB4E9380)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB4E94A0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_E484FCEE887E43F1_OFFSET UNITYSDK_OFFSET(0xB4E8EB0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB4E94B0)
#define CLASS_1_7DC1DFEA80680036_1_METHOD_1_F694503B9E4BB71D_OFFSET UNITYSDK_OFFSET(0x16436F80)
#define CLASS_1_7DC1DFEA80680036_1_SET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x164377E0)
#define CLASS_1_7DC1DFEA80680036_1_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB4E8CF0)
#define CLASS_1_7DC1DFEA80680036_1_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xB4E8E50)
#define CLASS_1_7DC1DFEA80680036_1_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xB4E8CD0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x164377C0)
#define CLASS_1_7DC1DFEA80680036_1_SET_HASH_OFFSET UNITYSDK_OFFSET(0xB4E8C70)
#define CLASS_1_7DC1DFEA80680036_1_SET_ICONID_OFFSET UNITYSDK_OFFSET(0xB4E8CB0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB4E8EA0)
#define CLASS_1_7DC1DFEA80680036_1_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB4E8C50)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB4E8D70)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xB4E8DB0)
#define CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xB4E8D90)
#define CLASS_1_7DC1DFEA80680036_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB4E8E80)
#define CLASS_1_7DC1DFEA80680036_1_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB4E8C90)
#define CLASS_1_7DC1DFEA80680036_1_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xB4E8DF0)
#define CLASS_1_7DC1DFEA80680036_1_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0xB4E9370)
#define CLASS_1_7DC1DFEA80680036_1_SET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0xB4E9340)
#define CLASS_1_7DC1DFEA80680036_1_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB4E8DD0)
#define CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xB4E8E30)
#define CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xB4E8E10)
#define CLASS_1_7DC1DFEA80680036_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E9620)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_1_TypeDefinitionIndex = 60740;

class Class_1_7DC1DFEA80680036_1 : public ::System::Object
{
public:
	::RPG::Client::MapAnchorDef* _AnchorDef_k__BackingField; // 0x10
	::RPG::Client::MapEntityDef* _EntityDef_k__BackingField; // 0x18
	::System::Single _Rotation_k__BackingField; // 0x20
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x24
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x34
	::UnityEngine::Color _Color_k__BackingField; // 0x40
	::System::Boolean _CanTint_k__BackingField; // 0x50
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x51
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x54
	::System::Nullable_1<::System::Boolean> IECPJFBLBLB; // 0x58
	::System::Boolean LKAIKOLJPDO; // 0x5A
	::System::Boolean _IsStatic_k__BackingField; // 0x5B
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x5C
	::System::Int32 _Hash_k__BackingField; // 0x60
	::System::Int32 _Priority_k__BackingField; // 0x64
	::System::UInt32 _IconID_k__BackingField; // 0x68
	::System::Int32 _Identifier_k__BackingField; // 0x6C
	::System::Single _RangeRadius_k__BackingField; // 0x70
	::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x74
	::System::Single _RawRotation_k__BackingField; // 0x80
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x84
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F694503B9E4BB71D(::RPG::Client::MapEntityDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_F694503B9E4BB71D_OFFSET))(this, a1, a2, a3, a4);
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

	static ::System::Int32 Method_1_7DFE24A5707FC0B2(::System::Object* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::System::Object*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_7DFE24A5707FC0B2_OFFSET))(a1, a2, a3);
	}

	::RPG::Client::MapEntityDef* get_EntityDef()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ENTITYDEF_OFFSET))(this);
	}

	::System::Void set_EntityDef(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ENTITYDEF_OFFSET))(this, a1);
	}

	::RPG::Client::MapAnchorDef* get_AnchorDef()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ANCHORDEF_OFFSET))(this);
	}

	::System::Void set_AnchorDef(::RPG::Client::MapAnchorDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ANCHORDEF_OFFSET))(this, a1);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_HASH_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ICONID_OFFSET))(this);
	}

	::System::Void set_IconID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ICONID_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_Color()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_COLOR_OFFSET))(this);
	}

	::System::Void set_Color(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_COLOR_OFFSET))(this, a1);
	}

	::System::Boolean get_CanTint()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_CANTINT_OFFSET))(this);
	}

	::System::Void set_CanTint(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_CANTINT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISSTATIC_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
	}

	::System::Single get_Rotation()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ROTATION_OFFSET))(this, a1);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RANGERADIUS_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_CIRCLECOLOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_POSITION_OFFSET))(this, a1);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_ICONTYPE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E484FCEE887E43F1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_E484FCEE887E43F1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Single get_RawRotation()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RAWROTATION_OFFSET))(this);
	}

	::System::Void set_RawRotation(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RAWROTATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RawPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_GET_RAWPOSITION_OFFSET))(this);
	}

	::System::Void set_RawPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_SET_RAWPOSITION_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B128C90853E23A16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_1_METHOD_1_B128C90853E23A16_OFFSET))(this);
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
