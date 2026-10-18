#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSkillMoveState.h"
#include "unitysdk/Struct_2_F52539D238DC1365.h"
#include "unitysdk/System/Object.h"

class Class_1_44552D95D5AEB0B8;
class Class_1_79A79C1737406323;
class Class_1_D8203AFB32E9259C;

#define CLASS_1_0CEEC3E9083EE2BC_CLEAR_OFFSET UNITYSDK_OFFSET(0x156D8D80)
#define CLASS_1_0CEEC3E9083EE2BC_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x156D8DE0)
#define CLASS_1_0CEEC3E9083EE2BC_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x156D8DF0)
#define CLASS_1_0CEEC3E9083EE2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x156D8E00)

inline static constexpr unsigned int Class_1_0CEEC3E9083EE2BC_TypeDefinitionIndex = 54246;

class Class_1_0CEEC3E9083EE2BC : public ::System::Object
{
public:
	::Class_1_79A79C1737406323* _TokenQueue_k__BackingField; // 0x10
	::Class_1_44552D95D5AEB0B8* BNFHKFLNHHH; // 0x18
	::Class_1_D8203AFB32E9259C* IJGAPCNDIAG; // 0x20
	::Struct_2_F52539D238DC1365 IFPCNCCENAL; // 0x28
	::RPG::GameCore::RtBattleSkillMoveState NPDNEEPHEKN; // 0x30
	::System::Boolean HOBIGCLPACO; // 0x34
	::System::Boolean GABIKMFIEHG; // 0x35

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
