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

#define CLASS_1_7DC1DFEA80680036_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA854E60)
#define CLASS_1_7DC1DFEA80680036_2_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA8552B0)
#define CLASS_1_7DC1DFEA80680036_2_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xA854F90)
#define CLASS_1_7DC1DFEA80680036_2_GET_HASH_OFFSET UNITYSDK_OFFSET(0xA854ED0)
#define CLASS_1_7DC1DFEA80680036_2_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xA854EF0)
#define CLASS_1_7DC1DFEA80680036_2_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xA855010)
#define CLASS_1_7DC1DFEA80680036_2_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA854F10)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xA854FF0)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xA854FD0)
#define CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xA854FB0)
#define CLASS_1_7DC1DFEA80680036_2_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xA854F30)
#define CLASS_1_7DC1DFEA80680036_2_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA854EB0)
#define CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xA854F70)
#define CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xA854F50)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_0196F1CEB7DA405C_OFFSET UNITYSDK_OFFSET(0xA8558C0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0xA854D90)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_1_OFFSET UNITYSDK_OFFSET(0xA855800)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0xA855670)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_33B01E44B9DD6F87_OFFSET UNITYSDK_OFFSET(0xA8551A0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_402C02E0BBAB2D6F_OFFSET UNITYSDK_OFFSET(0xA854C30)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xA855560)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_62C421665E41614E_OFFSET UNITYSDK_OFFSET(0xA855920)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_767F2F85CAAC8B14_OFFSET UNITYSDK_OFFSET(0xA854CE0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xA855740)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_940CBEE260E15469_OFFSET UNITYSDK_OFFSET(0xA855910)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0xA855330)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0xA855030)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0xA8557D0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xA8558F0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA8557F0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA8557E0)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xA855900)
#define CLASS_1_7DC1DFEA80680036_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA855660)
#define CLASS_1_7DC1DFEA80680036_2_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xA854FA0)
#define CLASS_1_7DC1DFEA80680036_2_SET_HASH_OFFSET UNITYSDK_OFFSET(0xA854EE0)
#define CLASS_1_7DC1DFEA80680036_2_SET_ICONID_OFFSET UNITYSDK_OFFSET(0xA854F00)
#define CLASS_1_7DC1DFEA80680036_2_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xA855020)
#define CLASS_1_7DC1DFEA80680036_2_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA854F20)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xA855000)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xA854FE0)
#define CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xA854FC0)
#define CLASS_1_7DC1DFEA80680036_2_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xA854F40)
#define CLASS_1_7DC1DFEA80680036_2_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA854EC0)
#define CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xA854F80)
#define CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xA854F60)
#define CLASS_1_7DC1DFEA80680036_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA855B20)
#define CLASS_1_7DC1DFEA80680036_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA854C20)
#define CLASS_1_7DC1DFEA80680036_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA855C00)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_2_TypeDefinitionIndex = 56680;

class Class_1_7DC1DFEA80680036_2 : public ::System::Object
{
public:
	::RPG::Client::MapAnchorDef* _Target_k__BackingField; // 0x10
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x18
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x24
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 _Identifier_k__BackingField; // 0x38
	::System::UInt32 _IconID_k__BackingField; // 0x3C
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x40
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x44
	::System::Nullable_1<::System::Boolean> Field_1_10; // 0x45
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x47
	::System::Boolean _IsStatic_k__BackingField; // 0x48
	::System::Single _RangeRadius_k__BackingField; // 0x4C
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

	::System::Void set_Target(::RPG::Client::MapAnchorDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_TARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_HASH_OFFSET))(this, a1);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ICONID_OFFSET))(this);
	}

	::System::Void set_IconID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ICONID_OFFSET))(this, a1);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_RANGERADIUS_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_CIRCLECOLOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ISSTATIC_OFFSET))(this, a1);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_SET_ICONTYPE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A0C1DAA6261B1CB5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_A0C1DAA6261B1CB5_OFFSET))(this);
	}

	::System::Boolean Method_1_33B01E44B9DD6F87()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_33B01E44B9DD6F87_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_9809C99861C91775_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_2_METHOD_1_507A5122CD01412B_OFFSET))(this);
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
