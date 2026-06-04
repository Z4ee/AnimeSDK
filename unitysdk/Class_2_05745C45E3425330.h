#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPlanarReflection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_05745C45E3425330_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134D8E00)
#define CLASS_2_05745C45E3425330_METHOD_2_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x134D9BE0)
#define CLASS_2_05745C45E3425330_METHOD_2_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0x134D8EE0)
#define CLASS_2_05745C45E3425330_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x134D9640)
#define CLASS_2_05745C45E3425330_METHOD_2_A28A62617B5D0FE1_OFFSET UNITYSDK_OFFSET(0x134D95F0)
#define CLASS_2_05745C45E3425330_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x134D8D90)
#define CLASS_2_05745C45E3425330_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x134D9DF0)
#define CLASS_2_05745C45E3425330_METHOD_2_E467305BD4E10D76_OFFSET UNITYSDK_OFFSET(0x134D99B0)
#define CLASS_2_05745C45E3425330_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x134D98B0)
#define CLASS_2_05745C45E3425330__CTOR_OFFSET UNITYSDK_OFFSET(0x134D9DB0)
#define CLASS_2_05745C45E3425330___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134D9E50)

inline static constexpr unsigned int Class_2_05745C45E3425330_TypeDefinitionIndex = 65345;

class Class_2_05745C45E3425330 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_446BE43D2AA5DB95()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_446BE43D2AA5DB95_OFFSET))(this);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_2_E467305BD4E10D76(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_E467305BD4E10D76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_228E3444D290BEE7_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginPlanarReflection* Method_2_A28A62617B5D0FE1()
	{
		return ((::RPG::Client::MonoEffectPluginPlanarReflection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_A28A62617B5D0FE1_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05745C45E3425330___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
