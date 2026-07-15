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

#define CLASS_1_E45C207B1AC948BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175E3C70)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_17CC2BD66F7B3D3B_OFFSET UNITYSDK_OFFSET(0x175E4170)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_1BFA9D447C938D84_OFFSET UNITYSDK_OFFSET(0x175E4200)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_1DE357EB37CCCA0C_OFFSET UNITYSDK_OFFSET(0x175E4830)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_46715AFA2A23D2D8_OFFSET UNITYSDK_OFFSET(0x175E4660)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_611343FD7972BFAD_OFFSET UNITYSDK_OFFSET(0x175E3F80)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x175E42A0)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_98A399CC8B751747_OFFSET UNITYSDK_OFFSET(0x175E3CC0)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_BED4BABD08BFA389_OFFSET UNITYSDK_OFFSET(0x175E4A40)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_CE03D988B128D491_OFFSET UNITYSDK_OFFSET(0x175E40B0)
#define CLASS_1_E45C207B1AC948BE_METHOD_1_E550319D2BFACD8F_OFFSET UNITYSDK_OFFSET(0x175E4440)
#define CLASS_1_E45C207B1AC948BE__CTOR_OFFSET UNITYSDK_OFFSET(0x175E3C10)

inline static constexpr unsigned int Class_1_E45C207B1AC948BE_TypeDefinitionIndex = 65699;

class Class_1_E45C207B1AC948BE : public ::System::Object
{
public:
	::Struct_2_0B84ADD7815498A2 Field_1_0; // 0x10
	::RPG::Client::TriggerEffectParamsRef Field_1_1; // 0x20
	::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* Field_1_2; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_57BF88AA3D4ADFA2>* Field_1_3; // 0x38
	::UnityEngine::Animator* Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_611343FD7972BFAD(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_611343FD7972BFAD_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_CE03D988B128D491(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_CE03D988B128D491_OFFSET))(this, a1);
	}

	::System::Void Method_1_98A399CC8B751747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_98A399CC8B751747_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BFA9D447C938D84(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_1BFA9D447C938D84_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E550319D2BFACD8F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_E550319D2BFACD8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DE357EB37CCCA0C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_1DE357EB37CCCA0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_46715AFA2A23D2D8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_46715AFA2A23D2D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BED4BABD08BFA389(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_BED4BABD08BFA389_OFFSET))(this, a1);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::RPG::Client::TriggerEffectParams* Method_1_17CC2BD66F7B3D3B()
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E45C207B1AC948BE_METHOD_1_17CC2BD66F7B3D3B_OFFSET))(this);
	}
};
