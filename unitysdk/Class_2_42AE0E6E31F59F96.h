#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class AnimatorClipOverride; }
namespace RPG::Client { class AnimatorClipOverride_AnimClipOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_42AE0E6E31F59F96_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA605A60)
#define CLASS_2_42AE0E6E31F59F96_METHOD_2_8872617A2F6F7F3D_OFFSET UNITYSDK_OFFSET(0xA605560)
#define CLASS_2_42AE0E6E31F59F96_METHOD_2_CAE68CD87F76976D_OFFSET UNITYSDK_OFFSET(0xA605290)
#define CLASS_2_42AE0E6E31F59F96_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xA605BD0)
#define CLASS_2_42AE0E6E31F59F96_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xA6055D0)
#define CLASS_2_42AE0E6E31F59F96__CTOR_OFFSET UNITYSDK_OFFSET(0xA605B40)
#define CLASS_2_42AE0E6E31F59F96___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA605C30)

inline static constexpr unsigned int Class_2_42AE0E6E31F59F96_TypeDefinitionIndex = 65786;

class Class_2_42AE0E6E31F59F96 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AnimatorClipOverride_AnimClipOverride*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CAE68CD87F76976D(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96_METHOD_2_CAE68CD87F76976D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::RPG::Client::AnimatorClipOverride* Method_2_8872617A2F6F7F3D()
	{
		return ((::RPG::Client::AnimatorClipOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96_METHOD_2_8872617A2F6F7F3D_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AE0E6E31F59F96___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
