#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3BC6FFBFA6077E08;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_CHECKEXECUTE_OFFSET UNITYSDK_OFFSET(0x71A220)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x71A230)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x71A1F0)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberAliveStateCheckAction_TypeDefinitionIndex = 74630;

	struct alignas(8) FMemberAliveStateCheckAction
	{
		::System::String* Name; // 0x10
		::Foundation::ViewObject::ViewObjectHandle GroupHandle; // 0x18
		::Class_1_3BC6FFBFA6077E08* Graph; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* TargetList; // 0x30

		::System::Void _ctor(::System::String* name, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::Class_1_3BC6FFBFA6077E08* graph, ::System::Collections::Generic::List_1<::System::Int32>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_3BC6FFBFA6077E08*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION__CTOR_OFFSET))(this, name, groupHandle, graph, targetList);
		}

		::System::Boolean CheckExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_CHECKEXECUTE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMEMBERALIVESTATECHECKACTION_DISPOSE_OFFSET))(this);
		}
	};
}
