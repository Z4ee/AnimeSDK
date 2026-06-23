#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_ACTIONS_GETFIELD_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8458E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetField_0_TypeDefinitionIndex = 29755;

	class GetField_0 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x10
		::System::String* fieldName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_0__CTOR_OFFSET))(this);
		}
	};
}
