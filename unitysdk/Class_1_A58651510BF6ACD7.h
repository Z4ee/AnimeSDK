#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_407;
class Class_2_09C674B625F78810;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_A58651510BF6ACD7_CLEAR_OFFSET UNITYSDK_OFFSET(0xBAB0F40)
#define CLASS_1_A58651510BF6ACD7_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xBAB0B10)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBAB0DD0)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBAB0D20)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_D98DFC1E18F828E2_OFFSET UNITYSDK_OFFSET(0xBAB0E80)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_E2C273CA106EBD0B_1_OFFSET UNITYSDK_OFFSET(0xBAB0CB0)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0xBAB0C40)
#define CLASS_1_A58651510BF6ACD7_METHOD_1_F492C0E050258EA1_OFFSET UNITYSDK_OFFSET(0xBAB0B30)
#define CLASS_1_A58651510BF6ACD7_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xBAB0B20)
#define CLASS_1_A58651510BF6ACD7__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB0FA0)

inline static constexpr unsigned int Class_1_A58651510BF6ACD7_TypeDefinitionIndex = 49782;

class Class_1_A58651510BF6ACD7 : public ::System::Object
{
public:
	::Class_2_09C674B625F78810* _ParamList_k__BackingField; // 0x10
	::RPG::GameCore::TaskContext* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_407* Field_1_4; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::System::String* Field_1_2; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7__CTOR_OFFSET))(this);
	}

	::Class_2_09C674B625F78810* get_ParamList()
	{
		return ((::Class_2_09C674B625F78810*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Class_2_09C674B625F78810* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_09C674B625F78810*))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_SET_PARAMLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_1_F492C0E050258EA1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_F492C0E050258EA1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_E2C273CA106EBD0B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	static ::Class_1_A58651510BF6ACD7* Method_1_D98DFC1E18F828E2(::Struct_2_310B46602BEB4586 a1)
	{
		return ((::Class_1_A58651510BF6ACD7*(*)(::Struct_2_310B46602BEB4586))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_METHOD_1_D98DFC1E18F828E2_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A58651510BF6ACD7_CLEAR_OFFSET))(this);
	}
};
