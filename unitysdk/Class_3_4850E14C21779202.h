#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_4850E14C21779202_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B52DDD0)
#define CLASS_3_4850E14C21779202_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1B52DD90)
#define CLASS_3_4850E14C21779202__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52DDC0)

inline static constexpr unsigned int Class_3_4850E14C21779202_TypeDefinitionIndex = 22323;

class Class_3_4850E14C21779202 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicValueContextScope Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4850E14C21779202__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4850E14C21779202*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4850E14C21779202*&))((::PBYTE)hIl2Cpp + CLASS_3_4850E14C21779202_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4850E14C21779202* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4850E14C21779202*))((::PBYTE)hIl2Cpp + CLASS_3_4850E14C21779202_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
