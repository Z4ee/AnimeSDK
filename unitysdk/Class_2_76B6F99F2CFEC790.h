#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class EffectAudioItem; }
namespace RPG::Client { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_76B6F99F2CFEC790_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FDA190)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x17FDA540)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x17FDAA10)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_3EC6749BD0DFCDFF_1_OFFSET UNITYSDK_OFFSET(0x17FDB260)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_3EC6749BD0DFCDFF_OFFSET UNITYSDK_OFFSET(0x17FDADF0)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17FDAB90)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_6A704A44799D4069_OFFSET UNITYSDK_OFFSET(0x17FDA000)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_93BEF0C7438E4DEF_OFFSET UNITYSDK_OFFSET(0x17FDB370)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_B43A250AEB88CB33_OFFSET UNITYSDK_OFFSET(0x17FDAD30)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x17FDAF00)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x17FDA200)
#define CLASS_2_76B6F99F2CFEC790_METHOD_2_FC4FF9811C23653A_OFFSET UNITYSDK_OFFSET(0x17FDA140)
#define CLASS_2_76B6F99F2CFEC790__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDB490)

inline static constexpr unsigned int Class_2_76B6F99F2CFEC790_TypeDefinitionIndex = 69825;

class Class_2_76B6F99F2CFEC790 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::EffectAudioItem*>* HLMNPOPCCAG; // 0x18
	::UnityEngine::GameObject* EAFMEEFNGMM; // 0x20
	::System::Single PGMIOKKLHIE; // 0x28
	::System::Single ONGBOJDIPNL; // 0x2C

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

	::System::Void Method_2_3EC6749BD0DFCDFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_3EC6749BD0DFCDFF_OFFSET))(this);
	}

	::System::Void Method_2_D0EDFA57F5E97657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_D0EDFA57F5E97657_OFFSET))(this);
	}

	::System::Void Method_2_3EC6749BD0DFCDFF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F99F2CFEC790_METHOD_2_3EC6749BD0DFCDFF_1_OFFSET))(this);
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
};
