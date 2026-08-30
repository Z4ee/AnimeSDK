#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_4850E14C21779202_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1C8F5B70)
#define CLASS_3_4850E14C21779202_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1C8F5B30)
#define CLASS_3_4850E14C21779202__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F5B60)

inline static constexpr unsigned int Class_3_4850E14C21779202_TypeDefinitionIndex = 22892;

class Class_3_4850E14C21779202 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20

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
