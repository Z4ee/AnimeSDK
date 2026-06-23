#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_OBJECTCLONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA9DF10)
#define IFIX_CORE_OBJECTCLONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA01C0)

namespace IFix::Core
{
	inline static constexpr unsigned int ObjectClone_TypeDefinitionIndex = 6938;

	class ObjectClone : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* memberwiseClone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_OBJECTCLONE__CTOR_OFFSET))(this);
		}

		::System::Object* Clone(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_OBJECTCLONE_CLONE_OFFSET))(this, obj);
		}
	};
}
