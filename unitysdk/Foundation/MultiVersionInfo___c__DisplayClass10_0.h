#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01C8C0)
#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS10_0__UPDATEHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1F01DF20)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo___c__DisplayClass10_0_TypeDefinitionIndex = 8241;

	class MultiVersionInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* fieldInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateHash_b__0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS10_0__UPDATEHASH_B__0_OFFSET))(this, f);
		}
	};
}
