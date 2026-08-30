#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class IPriorityStackItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGCAMERA_COMMONPRIORITYSTACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x196765B0)
#define RPGCAMERA_COMMONPRIORITYSTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19672780)
#define RPGCAMERA_COMMONPRIORITYSTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x19672EB0)
#define RPGCAMERA_COMMONPRIORITYSTACK_POP_OFFSET UNITYSDK_OFFSET(0x19672B70)
#define RPGCAMERA_COMMONPRIORITYSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x19672850)
#define RPGCAMERA_COMMONPRIORITYSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19673080)

namespace RPGCamera
{
	inline static constexpr unsigned int CommonPriorityStack_TypeDefinitionIndex = 44817;

	class CommonPriorityStack : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPGCamera::IPriorityStackItem*>*>* _priorityStacks; // 0x10
		::System::Int32 _count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK_GET_COUNT_OFFSET))(this);
		}

		::RPGCamera::IPriorityStackItem* get_Item(::System::Int32 a1)
		{
			return ((::RPGCamera::IPriorityStackItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Push(::RPGCamera::IPriorityStackItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::IPriorityStackItem*))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK_PUSH_OFFSET))(this, a1);
		}

		::RPGCamera::IPriorityStackItem* Pop(::System::Int32 a1)
		{
			return ((::RPGCamera::IPriorityStackItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK_POP_OFFSET))(this, a1);
		}

		::RPGCamera::IPriorityStackItem* Peek(::System::Int32 a1)
		{
			return ((::RPGCamera::IPriorityStackItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_COMMONPRIORITYSTACK_PEEK_OFFSET))(this, a1);
		}
	};
}
