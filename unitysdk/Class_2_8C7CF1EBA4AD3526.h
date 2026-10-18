#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_8C7CF1EBA4AD3526_GET_STAGESTEPTYPE_OFFSET UNITYSDK_OFFSET(0x1EC88900)
#define CLASS_2_8C7CF1EBA4AD3526__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC886F0)

inline static constexpr unsigned int Class_2_8C7CF1EBA4AD3526_TypeDefinitionIndex = 44218;

class Class_2_8C7CF1EBA4AD3526 : public ::System::Attribute
{
public:
	::System::Type* _StageStepType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_8C7CF1EBA4AD3526__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_StageStepType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C7CF1EBA4AD3526_GET_STAGESTEPTYPE_OFFSET))(this);
	}
};
