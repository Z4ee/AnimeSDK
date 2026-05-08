#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_F8CA5DB04D5D3661__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3E91E0)
#define CLASS_2_F8CA5DB04D5D3661__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C3E91F0)
#define CLASS_2_F8CA5DB04D5D3661__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E91D0)

inline static constexpr unsigned int Class_2_F8CA5DB04D5D3661_TypeDefinitionIndex = 26344;

class Class_2_F8CA5DB04D5D3661 : public ::System::Attribute
{
public:
	::System::Type* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8CA5DB04D5D3661__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8CA5DB04D5D3661__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Boolean a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_F8CA5DB04D5D3661__CTOR_2_OFFSET))(this, a1, a2);
	}
};
