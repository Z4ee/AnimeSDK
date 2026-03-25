#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_0AAA29E827EB555D;
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_33CD93C022C9C39F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA227240)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_149A2B8BEDE501A7_OFFSET UNITYSDK_OFFSET(0xA227070)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xA227540)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0xA227140)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xA227C70)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0xA227E40)
#define CLASS_1_33CD93C022C9C39F_METHOD_1_B9311DD96701D20C_OFFSET UNITYSDK_OFFSET(0xA227DA0)
#define CLASS_1_33CD93C022C9C39F__CTOR_OFFSET UNITYSDK_OFFSET(0xA227F00)

inline static constexpr unsigned int Class_1_33CD93C022C9C39F_TypeDefinitionIndex = 64488;

class Class_1_33CD93C022C9C39F : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_5 = 0x0; // 0x0
	::Collections::Pooled::PooledSet_1<::System::UInt32>* Field_1_3; // 0x10
	::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_0AAA29E827EB555D*>* Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x20
	::RPG::CustomRP::Quality Field_1_4; // 0x24
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_149A2B8BEDE501A7(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_149A2B8BEDE501A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_7D41A1A7E79589E1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_B9311DD96701D20C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_B9311DD96701D20C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1B466AFE3B0CC1E(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33CD93C022C9C39F_METHOD_1_B1B466AFE3B0CC1E_OFFSET))(this, a1, a2);
	}
};
