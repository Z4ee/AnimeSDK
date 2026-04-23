#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class RecordOperation; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_B87448D5E720C3DE_GET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0x104A0)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x24F70)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0xD6A30)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xD6B00)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD6AB0)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_5C08064B028A139F_OFFSET UNITYSDK_OFFSET(0xA2D4FD0)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD6B50)
#define STRUCT_2_B87448D5E720C3DE_SET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0xB390)
#define STRUCT_2_B87448D5E720C3DE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD6B60)
#define STRUCT_2_B87448D5E720C3DE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD6B70)

inline static constexpr unsigned int Struct_2_B87448D5E720C3DE_TypeDefinitionIndex = 54411;

struct alignas(8) Struct_2_B87448D5E720C3DE
{
	::System::Single Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::RPG::GameCore::TurnState Field_2_2; // 0x18
	::System::UInt32 Field_2_3; // 0x1C
	::System::UInt32 Field_2_4; // 0x20
	::System::UInt32 Field_2_5; // 0x24
	::RPG::GameCore::OperationType Field_2_6; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::System::Object* _ExtraParamObj_k__BackingField; // 0x30
	::System::String* Field_2_9; // 0x38

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Object* get_ExtraParamObj()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_GET_EXTRAPARAMOBJ_OFFSET))(this);
	}

	::System::Void set_ExtraParamObj(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_SET_EXTRAPARAMOBJ_OFFSET))(this, value);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_B87448D5E720C3DE Method_2_5C08064B028A139F(::RPG::GameCore::RecordOperation* a1)
	{
		return ((::Struct_2_B87448D5E720C3DE(*)(::RPG::GameCore::RecordOperation*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_5C08064B028A139F_OFFSET))(a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
