#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"
#include "unitysdk/System/Object.h"

class Class_1_99453328B5498AC3;
class Class_3_D3276F1532033C48;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_D4262A10F6A4FF6C_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x16642380)
#define CLASS_1_D4262A10F6A4FF6C_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x166423A0)
#define CLASS_1_D4262A10F6A4FF6C_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x16642390)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x166426F0)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_154B657621AFA554_OFFSET UNITYSDK_OFFSET(0x166423C0)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x16642610)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x16642420)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_7A150941533E8F96_1_OFFSET UNITYSDK_OFFSET(0x166428C0)
#define CLASS_1_D4262A10F6A4FF6C_METHOD_1_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x16642870)
#define CLASS_1_D4262A10F6A4FF6C_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x166423B0)
#define CLASS_1_D4262A10F6A4FF6C__CTOR_OFFSET UNITYSDK_OFFSET(0x16642350)

inline static constexpr unsigned int Class_1_D4262A10F6A4FF6C_TypeDefinitionIndex = 53543;

class Class_1_D4262A10F6A4FF6C : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
	::Struct_2_D3027B1CDFF61281 BJCHCAIMLFE; // 0x18
	::RPG::GameCore::LevelGraph* _OwnerGraph_k__BackingField; // 0x48
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x50
	::Class_3_D3276F1532033C48* IGHAHBNLIJA; // 0x58
	::Class_1_99453328B5498AC3* IEEOLIHJOIK; // 0x60
	::System::Boolean _IsFinished_k__BackingField; // 0x68
	::System::Boolean OIEPFNCCGJP; // 0x69
	::System::UInt32 JIJLLOLONLA; // 0x6C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Class_3_D3276F1532033C48* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_3_D3276F1532033C48*))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_GET_ENTITY_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraph* get_OwnerGraph()
	{
		return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_GET_OWNERGRAPH_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_SET_ISFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_1_154B657621AFA554(::Class_1_99453328B5498AC3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99453328B5498AC3*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_154B657621AFA554_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_1_7A150941533E8F96_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_7A150941533E8F96_1_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4262A10F6A4FF6C_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}
};
