#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class BattleQTEUIConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_C051E502BC384EFD_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1A6D7510)
#define CLASS_1_C051E502BC384EFD_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1A6D7530)
#define CLASS_1_C051E502BC384EFD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A6D74F0)
#define CLASS_1_C051E502BC384EFD_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1A6D74D0)
#define CLASS_1_C051E502BC384EFD_METHOD_1_23A10C29876FCB09_OFFSET UNITYSDK_OFFSET(0x1A6D71B0)
#define CLASS_1_C051E502BC384EFD_METHOD_1_2E6D68999CA8BB56_OFFSET UNITYSDK_OFFSET(0x1A6D7090)
#define CLASS_1_C051E502BC384EFD_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1A6D7520)
#define CLASS_1_C051E502BC384EFD_SET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1A6D7540)
#define CLASS_1_C051E502BC384EFD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A6D7500)
#define CLASS_1_C051E502BC384EFD_SET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1A6D74E0)
#define CLASS_1_C051E502BC384EFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D71A0)

inline static constexpr unsigned int Class_1_C051E502BC384EFD_TypeDefinitionIndex = 58758;

class Class_1_C051E502BC384EFD : public ::System::Object
{
public:
	::System::String* _UIPath_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::Single _Delay_k__BackingField; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> _FollowPosition_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD__CTOR_OFFSET))(this);
	}

	static ::Class_1_C051E502BC384EFD* Method_1_2E6D68999CA8BB56(::RPG::GameCore::BattleQTEUIConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_C051E502BC384EFD*(*)(::RPG::GameCore::BattleQTEUIConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_METHOD_1_2E6D68999CA8BB56_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::UnityEngine::Vector3> Method_1_23A10C29876FCB09(::RPG::GameCore::BattleQTEUIConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::RPG::GameCore::BattleQTEUIConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_METHOD_1_23A10C29876FCB09_OFFSET))(a1, a2);
	}

	::System::String* get_UIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_UIPATH_OFFSET))(this);
	}

	::System::Void set_UIPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_UIPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Single get_Delay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_DELAY_OFFSET))(this);
	}

	::System::Void set_Delay(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_DELAY_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_FollowPosition()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_FOLLOWPOSITION_OFFSET))(this);
	}

	::System::Void set_FollowPosition(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_FOLLOWPOSITION_OFFSET))(this, a1);
	}
};
