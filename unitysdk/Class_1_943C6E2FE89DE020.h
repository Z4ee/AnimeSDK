#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E783A7CB5DB08322.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_409;
class Class_1_6045926B515B7744;
class Class_1_F512C5C8F4EF9039;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_943C6E2FE89DE020_ADD_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x1592C490)
#define CLASS_1_943C6E2FE89DE020_BINDNODE_OFFSET UNITYSDK_OFFSET(0x1592C670)
#define CLASS_1_943C6E2FE89DE020_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1592C6C0)
#define CLASS_1_943C6E2FE89DE020_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1592C3E0)
#define CLASS_1_943C6E2FE89DE020_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1592C3D0)
#define CLASS_1_943C6E2FE89DE020_GET_NODE_OFFSET UNITYSDK_OFFSET(0x1592C5D0)
#define CLASS_1_943C6E2FE89DE020_MARKDIRTYSILENT_OFFSET UNITYSDK_OFFSET(0x1592CA60)
#define CLASS_1_943C6E2FE89DE020_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1592C960)
#define CLASS_1_943C6E2FE89DE020_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1592C430)
#define CLASS_1_943C6E2FE89DE020_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x1592C710)
#define CLASS_1_943C6E2FE89DE020_REMOVE_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x1592C530)
#define CLASS_1_943C6E2FE89DE020_SET_NODE_OFFSET UNITYSDK_OFFSET(0x1592C5E0)
#define CLASS_1_943C6E2FE89DE020_SUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x1592C890)
#define CLASS_1_943C6E2FE89DE020__CTOR_OFFSET UNITYSDK_OFFSET(0x1592C5F0)

inline static constexpr unsigned int Class_1_943C6E2FE89DE020_TypeDefinitionIndex = 79154;

class Class_1_943C6E2FE89DE020 : public ::System::Object
{
public:
	::System::String* _Key_k__BackingField; // 0x10
	::Class_1_6045926B515B7744* DLNIGFGLPLJ; // 0x18
	::Class_1_F512C5C8F4EF9039* _Node_k__BackingField; // 0x20
	::System::Action_1<::System::String*>* KLKNOBJBOOP; // 0x28

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

	::Class_1_F512C5C8F4EF9039* get_Node()
	{
		return ((::Class_1_F512C5C8F4EF9039*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_GET_NODE_OFFSET))(this);
	}

	::System::Void set_Node(::Class_1_F512C5C8F4EF9039* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F512C5C8F4EF9039*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_SET_NODE_OFFSET))(this, a1);
	}

	::System::Void BindNode(::Class_1_F512C5C8F4EF9039* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F512C5C8F4EF9039*))((::PBYTE)hIl2Cpp + CLASS_1_943C6E2FE89DE020_BINDNODE_OFFSET))(this, a1);
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
