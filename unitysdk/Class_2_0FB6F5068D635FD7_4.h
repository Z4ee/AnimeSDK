#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginShape; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CEAF0)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0xA3CEB60)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_4C2310ED22A12D4F_OFFSET UNITYSDK_OFFSET(0xA3CEC40)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xA3CECB0)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0xA3CF390)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xA3CEA80)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xA3CFB10)
#define CLASS_2_0FB6F5068D635FD7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CFB00)
#define CLASS_2_0FB6F5068D635FD7_4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CFB70)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_4_TypeDefinitionIndex = 65353;

class Class_2_0FB6F5068D635FD7_4 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_92CDC81783DABA21_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginShape* Method_2_4C2310ED22A12D4F()
	{
		return ((::RPG::Client::MonoEffectPluginShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_4C2310ED22A12D4F_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
