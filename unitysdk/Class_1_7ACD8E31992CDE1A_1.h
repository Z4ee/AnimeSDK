#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CDAD1C4D78702C93;

#define CLASS_1_7ACD8E31992CDE1A_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x923AB30)
#define CLASS_1_7ACD8E31992CDE1A_1_GET_OVERRIDEXCLAMPDEADZONE_OFFSET UNITYSDK_OFFSET(0x923B8B0)
#define CLASS_1_7ACD8E31992CDE1A_1_GET_OVERRIDEXCLAMPSOFTZONE_OFFSET UNITYSDK_OFFSET(0x923B890)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_00C7FCDD0B82BC95_OFFSET UNITYSDK_OFFSET(0x923A790)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x9239FC0)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_31135BE491631E74_OFFSET UNITYSDK_OFFSET(0x923ABD0)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x923B1F0)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x923AB80)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x923A010)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_797A699EED121969_OFFSET UNITYSDK_OFFSET(0x923B250)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_95D40074EC7C1AA6_OFFSET UNITYSDK_OFFSET(0x923A200)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x923A480)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_E507EE4A464914B8_OFFSET UNITYSDK_OFFSET(0x923A930)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x923B130)
#define CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x923B190)
#define CLASS_1_7ACD8E31992CDE1A_1_SET_OVERRIDEXCLAMPDEADZONE_OFFSET UNITYSDK_OFFSET(0x923B8C0)
#define CLASS_1_7ACD8E31992CDE1A_1_SET_OVERRIDEXCLAMPSOFTZONE_OFFSET UNITYSDK_OFFSET(0x923B8A0)
#define CLASS_1_7ACD8E31992CDE1A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9239F20)

inline static constexpr unsigned int Class_1_7ACD8E31992CDE1A_1_TypeDefinitionIndex = 64209;

class Class_1_7ACD8E31992CDE1A_1 : public ::System::Object
{
public:
	::Class_1_CDAD1C4D78702C93* Field_1_13; // 0x10
	::System::Nullable_1<::System::Single> _OverrideXClampSoftZone_k__BackingField; // 0x18
	::UnityEngine::Vector2 Field_1_15; // 0x20
	::RPG::Client::SwipeCameraStateEnum Field_1_3; // 0x28
	::System::Nullable_1<::System::Single> _OverrideXClampDeadZone_k__BackingField; // 0x2C
	::System::Single Field_1_12; // 0x34
	::UnityEngine::Vector2 Field_1_11; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_4; // 0x44
	::System::Single Field_1_5; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_7; // 0x50
	::System::Single Field_1_9; // 0x54
	::System::Boolean Field_1_0; // 0x58
	::System::Single Field_1_10; // 0x5C
	::UnityEngine::Vector2 Field_1_14; // 0x60

	::System::Void _ctor(::Class_1_CDAD1C4D78702C93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_95D40074EC7C1AA6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_95D40074EC7C1AA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_00C7FCDD0B82BC95(::Class_1_CDAD1C4D78702C93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDAD1C4D78702C93*))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_00C7FCDD0B82BC95_OFFSET))(this, a1);
	}

	::System::Void Method_1_E507EE4A464914B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_E507EE4A464914B8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_31135BE491631E74(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_31135BE491631E74_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_797A699EED121969()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_797A699EED121969_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> get_OverrideXClampSoftZone()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_GET_OVERRIDEXCLAMPSOFTZONE_OFFSET))(this);
	}

	::System::Void set_OverrideXClampSoftZone(::System::Nullable_1<::System::Single> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_SET_OVERRIDEXCLAMPSOFTZONE_OFFSET))(this, value);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> get_OverrideXClampDeadZone()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_GET_OVERRIDEXCLAMPDEADZONE_OFFSET))(this);
	}

	::System::Void set_OverrideXClampDeadZone(::System::Nullable_1<::System::Single> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_7ACD8E31992CDE1A_1_SET_OVERRIDEXCLAMPDEADZONE_OFFSET))(this, value);
	}
};
