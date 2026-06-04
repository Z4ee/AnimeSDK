#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_OBJECTCLONE_CLONE_OFFSET UNITYSDK_OFFSET(0x17F8A5C0)
#define IFIX_CORE_OBJECTCLONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C240)

namespace IFix::Core
{
	inline static constexpr unsigned int ObjectClone_TypeDefinitionIndex = 9767;

	class ObjectClone : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* memberwiseClone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_OBJECTCLONE__CTOR_OFFSET))(this);
		}

		::System::Object* Clone(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_OBJECTCLONE_CLONE_OFFSET))(this, a1);
		}
	};
}
