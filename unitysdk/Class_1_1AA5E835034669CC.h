#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_0AAA29E827EB555D;
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_1AA5E835034669CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DB65C0)
#define CLASS_1_1AA5E835034669CC_METHOD_1_0DCE3EFBC2953029_OFFSET UNITYSDK_OFFSET(0x16DB7120)
#define CLASS_1_1AA5E835034669CC_METHOD_1_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0x16DB6470)
#define CLASS_1_1AA5E835034669CC_METHOD_1_6133764619ACBC4F_OFFSET UNITYSDK_OFFSET(0x16DB7060)
#define CLASS_1_1AA5E835034669CC_METHOD_1_976EB052AF1DDF9E_OFFSET UNITYSDK_OFFSET(0x16DB6370)
#define CLASS_1_1AA5E835034669CC_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x16DB6E20)
#define CLASS_1_1AA5E835034669CC_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x16DB6A00)
#define CLASS_1_1AA5E835034669CC__CTOR_OFFSET UNITYSDK_OFFSET(0x16DB7220)

inline static constexpr unsigned int Class_1_1AA5E835034669CC_TypeDefinitionIndex = 80788;

class Class_1_1AA5E835034669CC : public ::System::Object
{
public:
	// static const ::System::UInt32 PMIDCJIDKKD = 0x0; // 0x0
	::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_0AAA29E827EB555D*>* PHPHJBFOCEL; // 0x10
	::Collections::Pooled::PooledSet_1<::System::UInt32>* OPMMMHCANFL; // 0x18
	::System::UInt32 GGHPONDNCDC; // 0x20
	::System::Single PJJLEJDPNHI; // 0x24
	::RPG::CustomRP::Quality KCOOKDJPHLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_976EB052AF1DDF9E(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_976EB052AF1DDF9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Void Method_1_6133764619ACBC4F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_6133764619ACBC4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DCE3EFBC2953029(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1AA5E835034669CC_METHOD_1_0DCE3EFBC2953029_OFFSET))(this, a1, a2);
	}
};
