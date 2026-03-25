#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x8804C20)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x8804C50)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8804BC0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x8804C00)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISREACH_OFFSET UNITYSDK_OFFSET(0x8804BA0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x8804BE0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x8804C40)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x8804C70)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8804BD0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0x8804C10)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISREACH_OFFSET UNITYSDK_OFFSET(0x8804BB0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x8804BF0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1__CTOR_OFFSET UNITYSDK_OFFSET(0x8804C80)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1_TypeDefinitionIndex = 48763;

class Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1 : public ::System::Object
{
public:
	::System::String* _TargetName_k__BackingField; // 0x10
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x18
	::System::Boolean _IsReach_k__BackingField; // 0x24
	::System::Boolean _IsFinish_k__BackingField; // 0x25
	::System::Boolean _IsHit_k__BackingField; // 0x26
	::System::Boolean Field_1_1; // 0x27
	::UnityEngine::Vector3 _Direction_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsReach()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISREACH_OFFSET))(this);
	}

	::System::Void set_IsReach(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISREACH_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISFINISH_OFFSET))(this, value);
	}

	::System::String* get_TargetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_TARGETNAME_OFFSET))(this);
	}

	::System::Void set_TargetName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_TARGETNAME_OFFSET))(this, value);
	}

	::System::Boolean get_IsHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ISHIT_OFFSET))(this);
	}

	::System::Void set_IsHit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ISHIT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Direction()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_DIRECTION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_1_413A93C6BBC780F1_SET_ENDPOS_OFFSET))(this, value);
	}
};
