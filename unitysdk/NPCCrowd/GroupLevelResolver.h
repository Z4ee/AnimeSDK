#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_GROUPLEVELRESOLVER_GETASSOCIATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xD43F410)
#define NPCCROWD_GROUPLEVELRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xD43FA10)

namespace NPCCrowd
{
	inline static constexpr unsigned int GroupLevelResolver_TypeDefinitionIndex = 53897;

	class GroupLevelResolver : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GROUPLEVELRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void GetAssociatedMembers(::Foundation::ViewObject::ViewObjectHandle npcHandle, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* results)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_GROUPLEVELRESOLVER_GETASSOCIATEDMEMBERS_OFFSET))(this, npcHandle, results);
		}
	};
}
