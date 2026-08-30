#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_22E48388A2F351DF_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1C8A9410)
#define CLASS_3_22E48388A2F351DF_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1C8A93D0)
#define CLASS_3_22E48388A2F351DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A9400)

inline static constexpr unsigned int Class_3_22E48388A2F351DF_TypeDefinitionIndex = 19689;

class Class_3_22E48388A2F351DF : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single NEMDKBKDFDN; // 0x18
	::System::Single IEHPFADHJFD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22E48388A2F351DF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22E48388A2F351DF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22E48388A2F351DF*&))((::PBYTE)hIl2Cpp + CLASS_3_22E48388A2F351DF_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22E48388A2F351DF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22E48388A2F351DF*))((::PBYTE)hIl2Cpp + CLASS_3_22E48388A2F351DF_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
