#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x19216D00)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x19216D30)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19216CA0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x19216CE0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISREACH_OFFSET UNITYSDK_OFFSET(0x19216C80)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x19216CC0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x19216D20)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x19216D50)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19216CB0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0x19216CF0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISREACH_OFFSET UNITYSDK_OFFSET(0x19216C90)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x19216CD0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F__CTOR_OFFSET UNITYSDK_OFFSET(0x19216BC0)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F_TypeDefinitionIndex = 57502;

class Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F : public ::System::Object
{
public:
	::System::String* _TargetName_k__BackingField; // 0x10
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x18
	::System::Boolean _IsReach_k__BackingField; // 0x24
	::System::Boolean _IsFinish_k__BackingField; // 0x25
	::System::Boolean _IsHit_k__BackingField; // 0x26
	::System::Boolean Field_1_5; // 0x27
	::UnityEngine::Vector3 _Direction_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsReach()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISREACH_OFFSET))(this);
	}

	::System::Void set_IsReach(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISREACH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISFINISH_OFFSET))(this, a1);
	}

	::System::String* get_TargetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_TARGETNAME_OFFSET))(this);
	}

	::System::Void set_TargetName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_TARGETNAME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ISHIT_OFFSET))(this);
	}

	::System::Void set_IsHit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ISHIT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Direction()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_DIRECTION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_BF8BA8FF7344779F_SET_ENDPOS_OFFSET))(this, a1);
	}
};
