#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_4C75491B780B94AA;

#define CLASS_2_4BB977B105D67741_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13636AF0)
#define CLASS_2_4BB977B105D67741_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13636AA0)
#define CLASS_2_4BB977B105D67741_TICK_OFFSET UNITYSDK_OFFSET(0x13636B40)
#define CLASS_2_4BB977B105D67741__CTOR_OFFSET UNITYSDK_OFFSET(0x13636BE0)
#define CLASS_2_4BB977B105D67741___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13636BF0)

inline static constexpr unsigned int Class_2_4BB977B105D67741_TypeDefinitionIndex = 53542;

class Class_2_4BB977B105D67741 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_4C75491B780B94AA* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BB977B105D67741__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_4C75491B780B94AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C75491B780B94AA*))((::PBYTE)hIl2Cpp + CLASS_2_4BB977B105D67741_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BB977B105D67741_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BB977B105D67741_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BB977B105D67741___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
