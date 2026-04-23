#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1098;
namespace RPG::GameCore { class IdleLiveGiftRow; }

#define CLASS_1_6CAA6AFF62775741_DISPOSE_OFFSET UNITYSDK_OFFSET(0x969D510)
#define CLASS_1_6CAA6AFF62775741_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x969D310)
#define CLASS_1_6CAA6AFF62775741_METHOD_1_87C912DE5CA7C9EE_OFFSET UNITYSDK_OFFSET(0x969D130)
#define CLASS_1_6CAA6AFF62775741_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x969CFC0)
#define CLASS_1_6CAA6AFF62775741_METHOD_1_FDB878EE730B6AA4_OFFSET UNITYSDK_OFFSET(0x969CE60)
#define CLASS_1_6CAA6AFF62775741__CTOR_OFFSET UNITYSDK_OFFSET(0x969CF80)

inline static constexpr unsigned int Class_1_6CAA6AFF62775741_TypeDefinitionIndex = 69398;

class Class_1_6CAA6AFF62775741 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1098* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveGiftRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6CAA6AFF62775741* Method_1_FDB878EE730B6AA4(::System::UInt32 a1)
	{
		return ((::Class_1_6CAA6AFF62775741*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741_METHOD_1_FDB878EE730B6AA4_OFFSET))(a1);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Void Method_1_87C912DE5CA7C9EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741_METHOD_1_87C912DE5CA7C9EE_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CAA6AFF62775741_DISPOSE_OFFSET))(this);
	}
};
