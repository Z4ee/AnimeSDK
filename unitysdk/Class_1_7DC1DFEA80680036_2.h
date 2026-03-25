#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapAnchorDef; }
namespace System { class String; }

#define CLASS_1_7DC1DFEA80680036_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1062FEA0)
#define CLASS_1_7DC1DFEA80680036_2_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x10630390)
#define CLASS_1_7DC1DFEA80680036_2_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1062FFD0)
#define CLASS_1_7DC1DFEA80680036_2_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1062FF10)
#define CLASS_1_7DC1DFEA80680036_2_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1062FF30)
#define CLASS_1_7DC1DFEA80680036_2_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x10630050)
#define CLASS_1_7DC1DFEA80680036_2_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1062FF50)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x10630030)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x10630010)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x1062FFF0)
#define CLASS_1_7DC1DFEA80680036_2_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1062FF70)
#define CLASS_1_7DC1DFEA80680036_2_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1062FEF0)
#define CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1062FFB0)
#define CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1062FF90)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_0196F1CEB7DA405C_OFFSET UNITYSDK_OFFSET(0x10630990)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x1062FDD0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_1_OFFSET UNITYSDK_OFFSET(0x106308D0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x10630740)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_402C02E0BBAB2D6F_OFFSET UNITYSDK_OFFSET(0x1062FC60)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x106301E0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x10630640)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_62C421665E41614E_OFFSET UNITYSDK_OFFSET(0x106309F0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_767F2F85CAAC8B14_OFFSET UNITYSDK_OFFSET(0x1062FD20)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x10630810)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_940CBEE260E15469_OFFSET UNITYSDK_OFFSET(0x106309E0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x10630410)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x10630070)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0x106308A0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x106309C0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x106308C0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x106308B0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x106309D0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10630730)
#define CLASS_1_7DC1DFEA80680036_2_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1062FFE0)
#define CLASS_1_7DC1DFEA80680036_2_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1062FF20)
#define CLASS_1_7DC1DFEA80680036_2_SET_ICONID_OFFSET UNITYSDK_OFFSET(0x1062FF40)
#define CLASS_1_7DC1DFEA80680036_2_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x10630060)
#define CLASS_1_7DC1DFEA80680036_2_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1062FF60)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x10630040)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x10630020)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x10630000)
#define CLASS_1_7DC1DFEA80680036_2_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1062FF80)
#define CLASS_1_7DC1DFEA80680036_2_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1062FF00)
#define CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1062FFC0)
#define CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1062FFA0)
#define CLASS_1_7DC1DFEA80680036_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10630BF0)
#define CLASS_1_7DC1DFEA80680036_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1062FC50)
#define CLASS_1_7DC1DFEA80680036_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10630CD0)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_2_TypeDefinitionIndex = 49128;

class Class_1_7DC1DFEA80680036_2 : public ::System::Object
{
public:
	::RPG::Client::MapAnchorDef* _Target_k__BackingField; // 0x10
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x18
	::System::Int32 Field_1_12; // 0x1C
	::System::UInt32 _IconID_k__BackingField; // 0x20
	::System::Int32 _Identifier_k__BackingField; // 0x24
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x28
	::System::Int32 Field_1_13; // 0x2C
	::System::Boolean _IsStatic_k__BackingField; // 0x30
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x31
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x32
	::System::Nullable_1<::System::Boolean> Field_1_14; // 0x33
	::System::Single _RangeRadius_k__BackingField; // 0x38
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x3C
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x4C
	::System::Int32 _Hash_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_402C02E0BBAB2D6F(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_402C02E0BBAB2D6F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_767F2F85CAAC8B14(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_767F2F85CAAC8B14_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_03BE804B9317DF84(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_03BE804B9317DF84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MapAnchorDef* get_Target()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::RPG::Client::MapAnchorDef* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_TARGET_OFFSET))(this, value);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_HASH_OFFSET))(this, value);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ICONID_OFFSET))(this);
	}

	::System::Void set_IconID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ICONID_OFFSET))(this, value);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_RANGERADIUS_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, value);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_CIRCLECOLOR_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMISSION_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, value);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISSTATIC_OFFSET))(this, value);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ICONTYPE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_A0C1DAA6261B1CB5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_A0C1DAA6261B1CB5_OFFSET))(this);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_9809C99861C91775_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_1FDE3BA9363A99B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_BFD792E814D995C0()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_BFD792E814D995C0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Single Method_1_1FDE3BA9363A99B1_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0196F1CEB7DA405C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_0196F1CEB7DA405C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_940CBEE260E15469()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_940CBEE260E15469_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_62C421665E41614E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_62C421665E41614E_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
