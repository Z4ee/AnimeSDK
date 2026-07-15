#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define ENTITAS_CONTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C8960)

namespace Entitas
{
	inline static constexpr unsigned int ContextInfo_TypeDefinitionIndex = 9664;

	class ContextInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* componentNames; // 0x10
		::Il2CppArray<::System::RuntimeTypeHandle>* componentTypes; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::RuntimeTypeHandle>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
