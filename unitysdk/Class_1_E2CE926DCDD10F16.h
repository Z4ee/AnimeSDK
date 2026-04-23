#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDelayCallState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define CLASS_1_E2CE926DCDD10F16_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B8DFD0)
#define CLASS_1_E2CE926DCDD10F16_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x9B8E0A0)
#define CLASS_1_E2CE926DCDD10F16_GET_PREV_OFFSET UNITYSDK_OFFSET(0x9B8E080)
#define CLASS_1_E2CE926DCDD10F16_METHOD_1_8A972922F2503955_OFFSET UNITYSDK_OFFSET(0x9B8E020)
#define CLASS_1_E2CE926DCDD10F16_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x9B8E0B0)
#define CLASS_1_E2CE926DCDD10F16_SET_PREV_OFFSET UNITYSDK_OFFSET(0x9B8E090)
#define CLASS_1_E2CE926DCDD10F16__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8E0C0)

inline static constexpr unsigned int Class_1_E2CE926DCDD10F16_TypeDefinitionIndex = 49911;

class Class_1_E2CE926DCDD10F16 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::Class_1_E2CE926DCDD10F16* _Next_k__BackingField; // 0x18
	::Class_1_E2CE926DCDD10F16* _Prev_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28
	::RPG::GameCore::RtDelayCallState Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_CLEAR_OFFSET))(this);
	}

	static ::System::Void Method_1_8A972922F2503955(::RPG::GameCore::GameWorld* a1, ::Class_1_E2CE926DCDD10F16*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_E2CE926DCDD10F16*&))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_METHOD_1_8A972922F2503955_OFFSET))(a1, a2);
	}

	::Class_1_E2CE926DCDD10F16* get_Prev()
	{
		return ((::Class_1_E2CE926DCDD10F16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_1_E2CE926DCDD10F16* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2CE926DCDD10F16*))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_SET_PREV_OFFSET))(this, value);
	}

	::Class_1_E2CE926DCDD10F16* get_Next()
	{
		return ((::Class_1_E2CE926DCDD10F16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_1_E2CE926DCDD10F16* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2CE926DCDD10F16*))((::PBYTE)hIl2Cpp + CLASS_1_E2CE926DCDD10F16_SET_NEXT_OFFSET))(this, value);
	}
};
