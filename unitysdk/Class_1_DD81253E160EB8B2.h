#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_DD81253E160EB8B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9785BD0)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_119F4F6316E05BE5_OFFSET UNITYSDK_OFFSET(0x9786910)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_17CC2BD66F7B3D3B_OFFSET UNITYSDK_OFFSET(0x97860D0)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_1DE357EB37CCCA0C_OFFSET UNITYSDK_OFFSET(0x9786700)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_440A6107AEF92BC6_OFFSET UNITYSDK_OFFSET(0x97865C0)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_4E4E8313BA97B8A4_OFFSET UNITYSDK_OFFSET(0x9785EF0)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x9785C20)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_91F4CAE895CC4D08_OFFSET UNITYSDK_OFFSET(0x9786160)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x97861F0)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_CE03D988B128D491_OFFSET UNITYSDK_OFFSET(0x9786010)
#define CLASS_1_DD81253E160EB8B2_METHOD_1_E550319D2BFACD8F_OFFSET UNITYSDK_OFFSET(0x97863A0)
#define CLASS_1_DD81253E160EB8B2__CTOR_OFFSET UNITYSDK_OFFSET(0x9785B70)

inline static constexpr unsigned int Class_1_DD81253E160EB8B2_TypeDefinitionIndex = 63411;

class Class_1_DD81253E160EB8B2 : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_4; // 0x10
	::Struct_2_0B84ADD7815498A2 Field_1_1; // 0x18
	::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_57BF88AA3D4ADFA2>* Field_1_5; // 0x30
	::RPG::Client::TriggerEffectParamsRef Field_1_2; // 0x38
	::System::Boolean Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4E4E8313BA97B8A4(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_4E4E8313BA97B8A4_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_CE03D988B128D491(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_CE03D988B128D491_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_91F4CAE895CC4D08(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_91F4CAE895CC4D08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E550319D2BFACD8F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_E550319D2BFACD8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DE357EB37CCCA0C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_1DE357EB37CCCA0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_440A6107AEF92BC6(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_440A6107AEF92BC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_119F4F6316E05BE5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_119F4F6316E05BE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::RPG::Client::TriggerEffectParams* Method_1_17CC2BD66F7B3D3B()
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD81253E160EB8B2_METHOD_1_17CC2BD66F7B3D3B_OFFSET))(this);
	}
};
