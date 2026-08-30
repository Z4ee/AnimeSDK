#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_4C75491B780B94AA;

#define CLASS_2_DEEE57A8D8BEDCF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A00D2E0)
#define CLASS_2_DEEE57A8D8BEDCF2_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A00D290)
#define CLASS_2_DEEE57A8D8BEDCF2_TICK_OFFSET UNITYSDK_OFFSET(0x1A00D330)
#define CLASS_2_DEEE57A8D8BEDCF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00D3D0)

inline static constexpr unsigned int Class_2_DEEE57A8D8BEDCF2_TypeDefinitionIndex = 57479;

class Class_2_DEEE57A8D8BEDCF2 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_4C75491B780B94AA* JMBNGEINDAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEEE57A8D8BEDCF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_4C75491B780B94AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C75491B780B94AA*))((::PBYTE)hIl2Cpp + CLASS_2_DEEE57A8D8BEDCF2_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEEE57A8D8BEDCF2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEEE57A8D8BEDCF2_TICK_OFFSET))(this, a1);
	}
};
