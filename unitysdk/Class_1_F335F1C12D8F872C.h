#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDelayCallState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define CLASS_1_F335F1C12D8F872C_CLEAR_OFFSET UNITYSDK_OFFSET(0xA600AF0)
#define CLASS_1_F335F1C12D8F872C_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xA600BC0)
#define CLASS_1_F335F1C12D8F872C_GET_PREV_OFFSET UNITYSDK_OFFSET(0xA600BA0)
#define CLASS_1_F335F1C12D8F872C_METHOD_1_1FCB8F3A5D177A6D_OFFSET UNITYSDK_OFFSET(0xA600B40)
#define CLASS_1_F335F1C12D8F872C_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xA600BD0)
#define CLASS_1_F335F1C12D8F872C_SET_PREV_OFFSET UNITYSDK_OFFSET(0xA600BB0)
#define CLASS_1_F335F1C12D8F872C__CTOR_OFFSET UNITYSDK_OFFSET(0xA600BE0)

inline static constexpr unsigned int Class_1_F335F1C12D8F872C_TypeDefinitionIndex = 50578;

class Class_1_F335F1C12D8F872C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_1_F335F1C12D8F872C* _Prev_k__BackingField; // 0x18
	::Class_1_F335F1C12D8F872C* _Next_k__BackingField; // 0x20
	::RPG::GameCore::RtDelayCallState Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_CLEAR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FCB8F3A5D177A6D(::RPG::GameCore::GameWorld* a1, ::Class_1_F335F1C12D8F872C*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_F335F1C12D8F872C*&))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_METHOD_1_1FCB8F3A5D177A6D_OFFSET))(a1, a2);
	}

	::Class_1_F335F1C12D8F872C* get_Prev()
	{
		return ((::Class_1_F335F1C12D8F872C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_1_F335F1C12D8F872C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F335F1C12D8F872C*))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_SET_PREV_OFFSET))(this, a1);
	}

	::Class_1_F335F1C12D8F872C* get_Next()
	{
		return ((::Class_1_F335F1C12D8F872C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_1_F335F1C12D8F872C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F335F1C12D8F872C*))((::PBYTE)hIl2Cpp + CLASS_1_F335F1C12D8F872C_SET_NEXT_OFFSET))(this, a1);
	}
};
