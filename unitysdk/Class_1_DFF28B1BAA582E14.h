#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_426;
class Class_2_34A8D080E829FDF9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_DFF28B1BAA582E14_CLEAR_OFFSET UNITYSDK_OFFSET(0xABD7910)
#define CLASS_1_DFF28B1BAA582E14_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xABD74B0)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_6AEE51845DFA6D71_1_OFFSET UNITYSDK_OFFSET(0xABD75E0)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0xAB9E9B0)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_AA972BE565DAF9E3_1_OFFSET UNITYSDK_OFFSET(0xABD7740)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0xABD7630)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_D98DFC1E18F828E2_OFFSET UNITYSDK_OFFSET(0xABD7850)
#define CLASS_1_DFF28B1BAA582E14_METHOD_1_F492C0E050258EA1_OFFSET UNITYSDK_OFFSET(0xABD74D0)
#define CLASS_1_DFF28B1BAA582E14_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xABD74C0)
#define CLASS_1_DFF28B1BAA582E14__CTOR_OFFSET UNITYSDK_OFFSET(0xABD7970)

inline static constexpr unsigned int Class_1_DFF28B1BAA582E14_TypeDefinitionIndex = 50449;

class Class_1_DFF28B1BAA582E14 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::Class_2_34A8D080E829FDF9* _ParamList_k__BackingField; // 0x18
	::System::String* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_426* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14__CTOR_OFFSET))(this);
	}

	::Class_2_34A8D080E829FDF9* get_ParamList()
	{
		return ((::Class_2_34A8D080E829FDF9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Class_2_34A8D080E829FDF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_34A8D080E829FDF9*))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_SET_PARAMLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_F492C0E050258EA1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_F492C0E050258EA1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_6AEE51845DFA6D71_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_6AEE51845DFA6D71_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_6AEE51845DFA6D71_1_OFFSET))(this);
	}

	::System::Boolean Method_1_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Boolean Method_1_AA972BE565DAF9E3_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_AA972BE565DAF9E3_1_OFFSET))(this);
	}

	static ::Class_1_DFF28B1BAA582E14* Method_1_D98DFC1E18F828E2(::Struct_2_87C8F594A107C13B a1)
	{
		return ((::Class_1_DFF28B1BAA582E14*(*)(::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_METHOD_1_D98DFC1E18F828E2_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF28B1BAA582E14_CLEAR_OFFSET))(this);
	}
};
