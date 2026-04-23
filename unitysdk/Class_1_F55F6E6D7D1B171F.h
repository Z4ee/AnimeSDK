#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSkillMoveState.h"
#include "unitysdk/Struct_2_F52539D238DC1365.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_1_44552D95D5AEB0B8;
class Class_1_F22D5BBDDFD6C58E;

#define CLASS_1_F55F6E6D7D1B171F_CLEAR_OFFSET UNITYSDK_OFFSET(0x129976D0)
#define CLASS_1_F55F6E6D7D1B171F_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x12997740)
#define CLASS_1_F55F6E6D7D1B171F_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x12997750)
#define CLASS_1_F55F6E6D7D1B171F__CTOR_OFFSET UNITYSDK_OFFSET(0x12997760)

inline static constexpr unsigned int Class_1_F55F6E6D7D1B171F_TypeDefinitionIndex = 50027;

class Class_1_F55F6E6D7D1B171F : public ::System::Object
{
public:
	::Class_1_44552D95D5AEB0B8* Field_1_1; // 0x10
	::Struct_2_F52539D238DC1365 Field_1_6; // 0x18
	::Class_1_05E595DC72CB83CA* Field_1_5; // 0x20
	::Class_1_F22D5BBDDFD6C58E* _TokenQueue_k__BackingField; // 0x28
	::RPG::GameCore::RtBattleSkillMoveState Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x34
	::System::Boolean Field_1_3; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F55F6E6D7D1B171F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F55F6E6D7D1B171F_CLEAR_OFFSET))(this);
	}

	::Class_1_F22D5BBDDFD6C58E* get_TokenQueue()
	{
		return ((::Class_1_F22D5BBDDFD6C58E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F55F6E6D7D1B171F_GET_TOKENQUEUE_OFFSET))(this);
	}

	::System::Void set_TokenQueue(::Class_1_F22D5BBDDFD6C58E* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F22D5BBDDFD6C58E*))((::PBYTE)hIl2Cpp + CLASS_1_F55F6E6D7D1B171F_SET_TOKENQUEUE_OFFSET))(this, value);
	}
};
