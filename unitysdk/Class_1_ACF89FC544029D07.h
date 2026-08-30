#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B87B48EBDCE76E87;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACF89FC544029D07_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB762760)
#define CLASS_1_ACF89FC544029D07_GET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB762840)
#define CLASS_1_ACF89FC544029D07_GET_HORIZONTALDIRECTION_OFFSET UNITYSDK_OFFSET(0xB762780)
#define CLASS_1_ACF89FC544029D07_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB762720)
#define CLASS_1_ACF89FC544029D07_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xB762740)
#define CLASS_1_ACF89FC544029D07_GET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xB762820)
#define CLASS_1_ACF89FC544029D07_METHOD_1_210511616BA7A085_OFFSET UNITYSDK_OFFSET(0xB763180)
#define CLASS_1_ACF89FC544029D07_METHOD_1_3C301397B4596391_OFFSET UNITYSDK_OFFSET(0xB762F90)
#define CLASS_1_ACF89FC544029D07_METHOD_1_80198D8600EF2CA7_OFFSET UNITYSDK_OFFSET(0xB7630D0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0xB762DA0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0xB763310)
#define CLASS_1_ACF89FC544029D07_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xB762800)
#define CLASS_1_ACF89FC544029D07_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB7627A0)
#define CLASS_1_ACF89FC544029D07_SET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB762850)
#define CLASS_1_ACF89FC544029D07_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB762730)
#define CLASS_1_ACF89FC544029D07_SET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xB762830)
#define CLASS_1_ACF89FC544029D07__CTOR_OFFSET UNITYSDK_OFFSET(0xB762860)

inline static constexpr unsigned int Class_1_ACF89FC544029D07_TypeDefinitionIndex = 69277;

class Class_1_ACF89FC544029D07 : public ::System::Object
{
public:
	// static const ::System::Single DFNCMHJCDDB; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_1_B87B48EBDCE76E87*, ::System::Int32>* PLDNMEDFJCD; // 0x10
	::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* EABKOHGCHFP; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AGBJKPBEFJO; // 0x20
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* MEFHNMCBABJ; // 0x28
	::System::Int32 _WidthCount_k__BackingField; // 0x30
	::UnityEngine::Vector3 _Origin_k__BackingField; // 0x34
	::UnityEngine::Vector3 _Direction_k__BackingField; // 0x40
	::System::Int32 _DistanceCount_k__BackingField; // 0x4C
	::System::Boolean _IsOpen_k__BackingField; // 0x50
	::UnityEngine::Vector3 _HorizontalDirection_k__BackingField; // 0x54

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_ISOPEN_OFFSET))(this);
	}

	::System::Void set_IsOpen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_SET_ISOPEN_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Origin()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_ORIGIN_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Direction()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_DIRECTION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_HorizontalDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_HORIZONTALDIRECTION_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Int32 get_WidthCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_WIDTHCOUNT_OFFSET))(this);
	}

	::System::Void set_WidthCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_SET_WIDTHCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_DistanceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_GET_DISTANCECOUNT_OFFSET))(this);
	}

	::System::Void set_DistanceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_SET_DISTANCECOUNT_OFFSET))(this, a1);
	}

	::System::Void Method_1_A134E903C4692403(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3C301397B4596391(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_3C301397B4596391_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_80198D8600EF2CA7(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_80198D8600EF2CA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_210511616BA7A085(::Class_1_B87B48EBDCE76E87* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_210511616BA7A085_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}
};
