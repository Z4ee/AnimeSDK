#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9AAC3BB4FD7CE6FE;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACF89FC544029D07_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA4B2D40)
#define CLASS_1_ACF89FC544029D07_GET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xA4B2E20)
#define CLASS_1_ACF89FC544029D07_GET_HORIZONTALDIRECTION_OFFSET UNITYSDK_OFFSET(0xA4B2D60)
#define CLASS_1_ACF89FC544029D07_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xA4B2D00)
#define CLASS_1_ACF89FC544029D07_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xA4B2D20)
#define CLASS_1_ACF89FC544029D07_GET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xA4B2E00)
#define CLASS_1_ACF89FC544029D07_METHOD_1_210511616BA7A085_OFFSET UNITYSDK_OFFSET(0xA4B37A0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0xA4B3380)
#define CLASS_1_ACF89FC544029D07_METHOD_1_3C301397B4596391_OFFSET UNITYSDK_OFFSET(0xA4B35B0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_80198D8600EF2CA7_OFFSET UNITYSDK_OFFSET(0xA4B36F0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0xA4B3920)
#define CLASS_1_ACF89FC544029D07_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xA4B2DE0)
#define CLASS_1_ACF89FC544029D07_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA4B2D80)
#define CLASS_1_ACF89FC544029D07_SET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xA4B2E30)
#define CLASS_1_ACF89FC544029D07_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xA4B2D10)
#define CLASS_1_ACF89FC544029D07_SET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xA4B2E10)
#define CLASS_1_ACF89FC544029D07__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B2E40)

inline static constexpr unsigned int Class_1_ACF89FC544029D07_TypeDefinitionIndex = 64816;

class Class_1_ACF89FC544029D07 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_1_1; // 0x10
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* Field_1_2; // 0x18
	::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x28
	::System::Int32 _DistanceCount_k__BackingField; // 0x30
	::UnityEngine::Vector3 _Origin_k__BackingField; // 0x34
	::UnityEngine::Vector3 _Direction_k__BackingField; // 0x40
	::UnityEngine::Vector3 _HorizontalDirection_k__BackingField; // 0x4C
	::System::Int32 _WidthCount_k__BackingField; // 0x58
	::System::Boolean _IsOpen_k__BackingField; // 0x5C

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

	::System::Void Method_1_34D5F4DBE622AF88(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3C301397B4596391(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_3C301397B4596391_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_80198D8600EF2CA7(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_80198D8600EF2CA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_210511616BA7A085(::Class_1_9AAC3BB4FD7CE6FE* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_210511616BA7A085_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_ACF89FC544029D07_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}
};
