#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2490017483959933_Struct_2_FF657750BB170508.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_2490017483959933_METHOD_2_3755F341D384C2CD_OFFSET UNITYSDK_OFFSET(0x9628750)
#define CLASS_2_2490017483959933_METHOD_2_83E33740E78D5BD4_OFFSET UNITYSDK_OFFSET(0x96288A0)
#define CLASS_2_2490017483959933_METHOD_2_8DAA3FC92A0BD044_OFFSET UNITYSDK_OFFSET(0x96285C0)
#define CLASS_2_2490017483959933_METHOD_2_AEA284E66191C7BE_OFFSET UNITYSDK_OFFSET(0x9628470)
#define CLASS_2_2490017483959933_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x9627FE0)
#define CLASS_2_2490017483959933_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x96281D0)
#define CLASS_2_2490017483959933_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x9627E40)
#define CLASS_2_2490017483959933_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9627F50)
#define CLASS_2_2490017483959933__CTOR_OFFSET UNITYSDK_OFFSET(0x9628930)
#define CLASS_2_2490017483959933___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x96289F0)
#define CLASS_2_2490017483959933___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x96289D0)
#define CLASS_2_2490017483959933___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x96289E0)

inline static constexpr unsigned int Class_2_2490017483959933_TypeDefinitionIndex = 45514;

class Class_2_2490017483959933 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::Class_2_2490017483959933_Struct_2_FF657750BB170508>* Field_2_1; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2490017483959933_Struct_2_FF657750BB170508>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA284E66191C7BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_METHOD_2_AEA284E66191C7BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DAA3FC92A0BD044(::System::UInt32 a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_METHOD_2_8DAA3FC92A0BD044_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3755F341D384C2CD(::System::UInt32 a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_METHOD_2_3755F341D384C2CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_83E33740E78D5BD4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_METHOD_2_83E33740E78D5BD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2490017483959933___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}
};
