#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerWayType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_0E5DA97E7318165F_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCC01C60)
#define CLASS_1_0E5DA97E7318165F_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCC01C40)
#define CLASS_1_0E5DA97E7318165F_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xCC01BE0)
#define CLASS_1_0E5DA97E7318165F_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xCC01B90)
#define CLASS_1_0E5DA97E7318165F_METHOD_1_85D8F3A3565F607B_OFFSET UNITYSDK_OFFSET(0xCC018C0)
#define CLASS_1_0E5DA97E7318165F_METHOD_1_8EB9A7947F4A628E_OFFSET UNITYSDK_OFFSET(0xCC01930)
#define CLASS_1_0E5DA97E7318165F_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCC01C70)
#define CLASS_1_0E5DA97E7318165F_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xCC01C50)
#define CLASS_1_0E5DA97E7318165F_TRIGGER_OFFSET UNITYSDK_OFFSET(0xCC01980)
#define CLASS_1_0E5DA97E7318165F__CTOR_OFFSET UNITYSDK_OFFSET(0xCC017F0)

inline static constexpr unsigned int Class_1_0E5DA97E7318165F_TypeDefinitionIndex = 61935;

class Class_1_0E5DA97E7318165F : public ::System::Object
{
public:
	::RPG::Client::MonopolyEffectShowType Field_1_0; // 0x10
	::System::UInt32 _Value_k__BackingField; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 _ContentID_k__BackingField; // 0x1C

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_85D8F3A3565F607B(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_METHOD_1_85D8F3A3565F607B_OFFSET))(this, a1);
	}

	::RPG::Client::MonopolyEffectTriggerWayType Method_1_8EB9A7947F4A628E()
	{
		return ((::RPG::Client::MonopolyEffectTriggerWayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_METHOD_1_8EB9A7947F4A628E_OFFSET))(this);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_TRIGGER_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_0E5DA97E7318165F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E5DA97E7318165F*))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 get_Value()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_SET_VALUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ContentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_GET_CONTENTID_OFFSET))(this);
	}

	::System::Void set_ContentID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0E5DA97E7318165F_SET_CONTENTID_OFFSET))(this, a1);
	}
};
