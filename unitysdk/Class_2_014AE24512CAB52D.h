#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginAnim; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_014AE24512CAB52D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14254770)
#define CLASS_2_014AE24512CAB52D_METHOD_2_0EDD687A0924D3C5_OFFSET UNITYSDK_OFFSET(0x14254CC0)
#define CLASS_2_014AE24512CAB52D_METHOD_2_98C4A6C9C107B9C3_OFFSET UNITYSDK_OFFSET(0x14254D30)
#define CLASS_2_014AE24512CAB52D_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x14254700)
#define CLASS_2_014AE24512CAB52D_METHOD_2_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x142547E0)
#define CLASS_2_014AE24512CAB52D_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x14254F70)
#define CLASS_2_014AE24512CAB52D__CTOR_OFFSET UNITYSDK_OFFSET(0x14254F60)
#define CLASS_2_014AE24512CAB52D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14254FD0)

inline static constexpr unsigned int Class_2_014AE24512CAB52D_TypeDefinitionIndex = 65312;

class Class_2_014AE24512CAB52D : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C38AA259F0B46320()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_METHOD_2_C38AA259F0B46320_OFFSET))(this);
	}

	::System::Void Method_2_98C4A6C9C107B9C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_METHOD_2_98C4A6C9C107B9C3_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginAnim* Method_2_0EDD687A0924D3C5()
	{
		return ((::RPG::Client::MonoEffectPluginAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_METHOD_2_0EDD687A0924D3C5_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014AE24512CAB52D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
