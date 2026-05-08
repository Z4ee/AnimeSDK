#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_451F671245451419_Enum_3_C20BCEF75F9B220F.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_BE94BBD8E05AB4A9;
namespace MoleMole { class UIGalgamePageContext; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1147A280)
#define CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1147A270)
#define CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1147A260)
#define CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1147A1E0)

inline static constexpr unsigned int Class_2_451F671245451419_Class_1_0EC9975DF85BC5D3_TypeDefinitionIndex = 82186;

class Class_2_451F671245451419_Class_1_0EC9975DF85BC5D3 : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::System::Action* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_12; // 0x20
	::Foundation::AssetRequestHandle Field_1_11; // 0x28
	::MoleMole::UIGalgamePageContext* Field_1_6; // 0x48
	::Class_1_BE94BBD8E05AB4A9* Field_1_5; // 0x50
	::MoleMole::UIGalgamePageController* Field_1_0; // 0x58
	::System::String* Field_1_3; // 0x60
	::System::Action* Field_1_10; // 0x68
	::System::Int64 Field_1_2; // 0x70
	::System::Boolean Field_1_7; // 0x78
	::System::Int32 Field_1_1; // 0x7C
	::Class_2_451F671245451419_Enum_3_C20BCEF75F9B220F Field_1_4; // 0x80

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_451F671245451419_CLASS_1_0EC9975DF85BC5D3_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}
};
