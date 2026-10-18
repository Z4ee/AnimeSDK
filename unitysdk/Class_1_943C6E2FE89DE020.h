#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E783A7CB5DB08322.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_409;
class Class_1_6045926B515B7744;
class Class_1_7E6CC96E08E99895;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_943C6E2FE89DE020_ADD_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x159374E0)
#define CLASS_1_943C6E2FE89DE020_BINDNODE_OFFSET UNITYSDK_OFFSET(0x159376C0)
#define CLASS_1_943C6E2FE89DE020_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15937710)
#define CLASS_1_943C6E2FE89DE020_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x15937430)
#define CLASS_1_943C6E2FE89DE020_GET_KEY_OFFSET UNITYSDK_OFFSET(0x15937420)
#define CLASS_1_943C6E2FE89DE020_GET_NODE_OFFSET UNITYSDK_OFFSET(0x15937620)
#define CLASS_1_943C6E2FE89DE020_MARKDIRTYSILENT_OFFSET UNITYSDK_OFFSET(0x15937AB0)
#define CLASS_1_943C6E2FE89DE020_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x159379B0)
#define CLASS_1_943C6E2FE89DE020_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15937480)
#define CLASS_1_943C6E2FE89DE020_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x15937760)
#define CLASS_1_943C6E2FE89DE020_REMOVE_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x15937580)
#define CLASS_1_943C6E2FE89DE020_SET_NODE_OFFSET UNITYSDK_OFFSET(0x15937630)
#define CLASS_1_943C6E2FE89DE020_SUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x159378E0)
#define CLASS_1_943C6E2FE89DE020__CTOR_OFFSET UNITYSDK_OFFSET(0x15937640)

inline static constexpr unsigned int Class_1_943C6E2FE89DE020_TypeDefinitionIndex = 79155;

class Class_1_943C6E2FE89DE020 : public ::System::Object
{
public:
	::Class_1_6045926B515B7744* DLNIGFGLPLJ; // 0x10
	::System::Action_1<::System::String*>* KLKNOBJBOOP; // 0x18
	::Class_1_7E6CC96E08E99895* _Node_k__BackingField; // 0x20
	::System::String* _Key_k__BackingField; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_Key()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_GET_KEY_OFFSET))(this);
	}

	::System::Boolean get_IsDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void add_OnDirty(::System::Action_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_ADD_ONDIRTY_OFFSET))(this, a1);
	}

	::System::Void remove_OnDirty(::System::Action_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_REMOVE_ONDIRTY_OFFSET))(this, a1);
	}

	::Class_1_7E6CC96E08E99895* get_Node()
	{
		return ((::Class_1_7E6CC96E08E99895*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_GET_NODE_OFFSET))(this);
	}

	::System::Void set_Node(::Class_1_7E6CC96E08E99895* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E6CC96E08E99895*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_SET_NODE_OFFSET))(this, a1);
	}

	::System::Void BindNode(::Class_1_7E6CC96E08E99895* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E6CC96E08E99895*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_BINDNODE_OFFSET))(this, a1);
	}

	::Class_1_6045926B515B7744* GetState()
	{
		return ((::Class_1_6045926B515B7744*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_GETSTATE_OFFSET))(this);
	}

	::System::Void SubscribeFrom(::Class_0_16E4307DCC419505_409* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_SUBSCRIBEFROM_OFFSET))(this, a1);
	}

	::System::Void MarkDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_MARKDIRTY_OFFSET))(this);
	}

	::System::Void MarkDirtySilent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_MARKDIRTYSILENT_OFFSET))(this);
	}

	::System::Boolean Method_1_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_METHOD_1_F55212E77440B167_OFFSET))(this);
	}
};
