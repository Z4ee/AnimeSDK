#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_60E01478B2952162_Struct_2_E658502528B7C034_5.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectPluginIKAim; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_60E01478B2952162_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E2A380)
#define CLASS_2_60E01478B2952162_METHOD_2_1B631AA6F3AF3D0F_OFFSET UNITYSDK_OFFSET(0x16E2A5A0)
#define CLASS_2_60E01478B2952162_METHOD_2_4DF98D928623DEE3_OFFSET UNITYSDK_OFFSET(0x16E2A670)
#define CLASS_2_60E01478B2952162_METHOD_2_75274750C417D5D5_OFFSET UNITYSDK_OFFSET(0x16E2AE00)
#define CLASS_2_60E01478B2952162_METHOD_2_9E637ADDC61B40F9_OFFSET UNITYSDK_OFFSET(0x16E2B160)
#define CLASS_2_60E01478B2952162_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x16E2A310)
#define CLASS_2_60E01478B2952162_METHOD_2_C5DDF3666DBEE956_OFFSET UNITYSDK_OFFSET(0x16E2A9A0)
#define CLASS_2_60E01478B2952162_METHOD_2_D755B8CE36940DF5_OFFSET UNITYSDK_OFFSET(0x16E2A3F0)
#define CLASS_2_60E01478B2952162_METHOD_2_DCEB9B8FD296459A_OFFSET UNITYSDK_OFFSET(0x16E2A610)
#define CLASS_2_60E01478B2952162__CTOR_OFFSET UNITYSDK_OFFSET(0x16E2B460)

inline static constexpr unsigned int Class_2_60E01478B2952162_TypeDefinitionIndex = 69845;

class Class_2_60E01478B2952162 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::Class_2_60E01478B2952162_Struct_2_E658502528B7C034_5>* FIELMOCJNEH; // 0x18
	::System::Single PJJLEJDPNHI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D755B8CE36940DF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_D755B8CE36940DF5_OFFSET))(this);
	}

	::System::Void Method_2_DCEB9B8FD296459A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_DCEB9B8FD296459A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DF98D928623DEE3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_4DF98D928623DEE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5DDF3666DBEE956(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_C5DDF3666DBEE956_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_75274750C417D5D5(::System::String* a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_75274750C417D5D5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9E637ADDC61B40F9(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_9E637ADDC61B40F9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffectPluginIKAim* Method_2_1B631AA6F3AF3D0F()
	{
		return ((::RPG::Client::MonoEffectPluginIKAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E01478B2952162_METHOD_2_1B631AA6F3AF3D0F_OFFSET))(this);
	}
};
