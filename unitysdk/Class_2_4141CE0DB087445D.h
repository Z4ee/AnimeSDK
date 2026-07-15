#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B64B3390003680E8.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"

class Class_2_377020071BD9F515;
class Class_3_E2139BB249A7E32D;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4141CE0DB087445D_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x17AE1530)
#define CLASS_2_4141CE0DB087445D_GET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x17AE1540)
#define CLASS_2_4141CE0DB087445D_METHOD_2_0724EFB1A18E7075_OFFSET UNITYSDK_OFFSET(0x17AE0D80)
#define CLASS_2_4141CE0DB087445D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17AE1440)
#define CLASS_2_4141CE0DB087445D_METHOD_2_25FFB847C318CCEC_OFFSET UNITYSDK_OFFSET(0x17AE0600)
#define CLASS_2_4141CE0DB087445D_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x17AE0830)
#define CLASS_2_4141CE0DB087445D_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x17AE0990)
#define CLASS_2_4141CE0DB087445D_METHOD_2_C33AA82B19159619_OFFSET UNITYSDK_OFFSET(0x17AE06D0)
#define CLASS_2_4141CE0DB087445D_METHOD_2_C55DD5B612A4F0D5_OFFSET UNITYSDK_OFFSET(0x17AE0BC0)
#define CLASS_2_4141CE0DB087445D_METHOD_2_F0CA489855D98510_OFFSET UNITYSDK_OFFSET(0x17AE0E10)
#define CLASS_2_4141CE0DB087445D__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE0400)

inline static constexpr unsigned int Class_2_4141CE0DB087445D_TypeDefinitionIndex = 54881;

class Class_2_4141CE0DB087445D : public ::Class_1_B64B3390003680E8
{
public:
	::RPG::Client::MockAnimator* Field_2_0; // 0x70
	::RPG::Client::AttachPointMapping* Field_2_1; // 0x78
	::UnityEngine::Animator* Field_2_2; // 0x80
	::Struct_2_0B84ADD7815498A2 Field_2_3; // 0x88
	::System::String* _EffectPath_k__BackingField; // 0x98
	::System::UInt32 Field_2_5; // 0xA0
	::System::Single _EffectScale_k__BackingField; // 0xA4

	::System::Void _ctor(::Class_2_377020071BD9F515* a1, ::Class_3_E2139BB249A7E32D* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_377020071BD9F515*, ::Class_3_E2139BB249A7E32D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* Method_2_25FFB847C318CCEC(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_25FFB847C318CCEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C33AA82B19159619(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_C33AA82B19159619_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_C55DD5B612A4F0D5(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_C55DD5B612A4F0D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0724EFB1A18E7075(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_0724EFB1A18E7075_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0CA489855D98510(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_F0CA489855D98510_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::Single get_EffectScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4141CE0DB087445D_GET_EFFECTSCALE_OFFSET))(this);
	}
};
