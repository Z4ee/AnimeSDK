#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS11_0__ADDMULTIVERPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1E191450)
#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E191440)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo___c__DisplayClass11_0_TypeDefinitionIndex = 8242;

	class MultiVersionInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* fieldInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddMultiVerPath_b__0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS11_0__ADDMULTIVERPATH_B__0_OFFSET))(this, f);
		}
	};
}
