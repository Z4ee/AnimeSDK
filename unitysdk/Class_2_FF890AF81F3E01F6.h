#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FF890AF81F3E01F6_BindingSide.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_FF890AF81F3E01F6_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1AC42950)
#define CLASS_2_FF890AF81F3E01F6_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1AC42960)
#define CLASS_2_FF890AF81F3E01F6_GET_SIDE_OFFSET UNITYSDK_OFFSET(0x1AC42970)
#define CLASS_2_FF890AF81F3E01F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC31F40)

inline static constexpr unsigned int Class_2_FF890AF81F3E01F6_TypeDefinitionIndex = 40599;

class Class_2_FF890AF81F3E01F6 : public ::System::Exception
{
public:
	::System::Type* _OwnerType_k__BackingField; // 0x88
	::System::String* _PropertyName_k__BackingField; // 0x90
	::Class_2_FF890AF81F3E01F6_BindingSide _Side_k__BackingField; // 0x98

	::System::Void _ctor(::System::Type* a1, ::System::String* a2, ::Class_2_FF890AF81F3E01F6_BindingSide a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::Class_2_FF890AF81F3E01F6_BindingSide))((::PBYTE)hIl2Cpp + CLASS_2_FF890AF81F3E01F6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Type* get_OwnerType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF890AF81F3E01F6_GET_OWNERTYPE_OFFSET))(this);
	}

	::System::String* get_PropertyName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF890AF81F3E01F6_GET_PROPERTYNAME_OFFSET))(this);
	}

	::Class_2_FF890AF81F3E01F6_BindingSide get_Side()
	{
		return ((::Class_2_FF890AF81F3E01F6_BindingSide(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF890AF81F3E01F6_GET_SIDE_OFFSET))(this);
	}
};
