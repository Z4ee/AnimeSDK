#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSkillMoveState.h"
#include "unitysdk/Struct_2_F52539D238DC1365.h"
#include "unitysdk/System/Object.h"

class Class_1_44552D95D5AEB0B8;
class Class_1_79A79C1737406323;
class Class_1_D8203AFB32E9259C;

#define CLASS_1_0CEEC3E9083EE2BC_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F262A0)
#define CLASS_1_0CEEC3E9083EE2BC_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x17F26310)
#define CLASS_1_0CEEC3E9083EE2BC_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x17F26320)
#define CLASS_1_0CEEC3E9083EE2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26330)

inline static constexpr unsigned int Class_1_0CEEC3E9083EE2BC_TypeDefinitionIndex = 51776;

class Class_1_0CEEC3E9083EE2BC : public ::System::Object
{
public:
	::Struct_2_F52539D238DC1365 Field_1_0; // 0x10
	::Class_1_79A79C1737406323* _TokenQueue_k__BackingField; // 0x18
	::Class_1_44552D95D5AEB0B8* Field_1_2; // 0x20
	::Class_1_D8203AFB32E9259C* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::RPG::GameCore::RtBattleSkillMoveState Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEEC3E9083EE2BC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEEC3E9083EE2BC_CLEAR_OFFSET))(this);
	}

	::Class_1_79A79C1737406323* get_TokenQueue()
	{
		return ((::Class_1_79A79C1737406323*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEEC3E9083EE2BC_GET_TOKENQUEUE_OFFSET))(this);
	}

	::System::Void set_TokenQueue(::Class_1_79A79C1737406323* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79A79C1737406323*))((::PBYTE)hIl2Cpp + CLASS_1_0CEEC3E9083EE2BC_SET_TOKENQUEUE_OFFSET))(this, a1);
	}
};
