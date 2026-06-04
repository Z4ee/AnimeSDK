#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class EffectAudioItem; }
namespace RPG::Client { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_76B6F99F2CFEC790_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BD94B0)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x13BD9860)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x13BD9D30)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_40E6AFCB91524816_1_OFFSET UNITYSDK_OFFSET(0x13BDA570)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0x13BDA100)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13BD9EB0)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_6A704A44799D4069_OFFSET UNITYSDK_OFFSET(0x13BD9320)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_93BEF0C7438E4DEF_OFFSET UNITYSDK_OFFSET(0x13BDA680)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_B43A250AEB88CB33_OFFSET UNITYSDK_OFFSET(0x13BDA040)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x13BDA210)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x13BD9520)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13BDA7E0)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_FC4FF9811C23653A_OFFSET UNITYSDK_OFFSET(0x13BD9460)
#define CLASS_2_76B6F99F2CFEC790__CTOR_OFFSET UNITYSDK_OFFSET(0x13BDA7A0)
#define CLASS_2_76B6F99F2CFEC790___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BDA840)

inline static constexpr unsigned int Class_2_76B6F99F2CFEC790_TypeDefinitionIndex = 65313;

class Class_2_76B6F99F2CFEC790 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::EffectAudioItem*>* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6A704A44799D4069(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_6A704A44799D4069_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D643BAC787BFCBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_D643BAC787BFCBDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_40E6AFCB91524816_OFFSET))(this);
	}

	::System::Void Method_2_D0EDFA57F5E97657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_D0EDFA57F5E97657_OFFSET))(this);
	}

	::System::Void Method_2_40E6AFCB91524816_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_40E6AFCB91524816_1_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_B43A250AEB88CB33(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_B43A250AEB88CB33_OFFSET))(this, a1);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_93BEF0C7438E4DEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_93BEF0C7438E4DEF_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginAudio* Method_2_FC4FF9811C23653A()
	{
		return ((::RPG::Client::MonoEffectPluginAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_FC4FF9811C23653A_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
