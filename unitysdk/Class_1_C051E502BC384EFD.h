#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class BattleQTEUIConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_C051E502BC384EFD_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x10C56AA0)
#define CLASS_1_C051E502BC384EFD_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x10C56AC0)
#define CLASS_1_C051E502BC384EFD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10C56A80)
#define CLASS_1_C051E502BC384EFD_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x10C56A60)
#define CLASS_1_C051E502BC384EFD_METHOD_1_23A10C29876FCB09_OFFSET UNITYSDK_OFFSET(0x10C56740)
#define CLASS_1_C051E502BC384EFD_METHOD_1_2E6D68999CA8BB56_OFFSET UNITYSDK_OFFSET(0x10C56630)
#define CLASS_1_C051E502BC384EFD_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x10C56AB0)
#define CLASS_1_C051E502BC384EFD_SET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x10C56AD0)
#define CLASS_1_C051E502BC384EFD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10C56A90)
#define CLASS_1_C051E502BC384EFD_SET_UIPATH_OFFSET UNITYSDK_OFFSET(0x10C56A70)
#define CLASS_1_C051E502BC384EFD__CTOR_OFFSET UNITYSDK_OFFSET(0x10C56730)

inline static constexpr unsigned int Class_1_C051E502BC384EFD_TypeDefinitionIndex = 47298;

class Class_1_C051E502BC384EFD : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::String* _UIPath_k__BackingField; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> _FollowPosition_k__BackingField; // 0x20
	::System::Single _Delay_k__BackingField; // 0x30

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

	::System::Void set_UIPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_UIPATH_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Single get_Delay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_DELAY_OFFSET))(this);
	}

	::System::Void set_Delay(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_DELAY_OFFSET))(this, value);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_FollowPosition()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_GET_FOLLOWPOSITION_OFFSET))(this);
	}

	::System::Void set_FollowPosition(::System::Nullable_1<::UnityEngine::Vector3> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_C051E502BC384EFD_SET_FOLLOWPOSITION_OFFSET))(this, value);
	}
};
