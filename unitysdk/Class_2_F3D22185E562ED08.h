#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_F3D22185E562ED08_METHOD_2_01CC46B2EE97FDDD_OFFSET UNITYSDK_OFFSET(0xC1D2740)
#define CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_1_OFFSET UNITYSDK_OFFSET(0xC1D2570)
#define CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_OFFSET UNITYSDK_OFFSET(0xC1D2390)
#define CLASS_2_F3D22185E562ED08_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0xC1D21C0)
#define CLASS_2_F3D22185E562ED08_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xC1D1DB0)
#define CLASS_2_F3D22185E562ED08_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xC1D1FA0)
#define CLASS_2_F3D22185E562ED08_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC1D1BD0)
#define CLASS_2_F3D22185E562ED08_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC1D1D00)
#define CLASS_2_F3D22185E562ED08__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D27D0)
#define CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xC1D2890)
#define CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC1D2870)
#define CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC1D2880)

inline static constexpr unsigned int Class_2_F3D22185E562ED08_TypeDefinitionIndex = 46097;

class Class_2_F3D22185E562ED08 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Playables::PlayableDirector* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void Method_2_2934FD95900E25B5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_METHOD_2_2934FD95900E25B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_11FD6C11DEA8D6F7(::System::UInt32 a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_11FD6C11DEA8D6F7_1(::System::UInt32 a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01CC46B2EE97FDDD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_METHOD_2_01CC46B2EE97FDDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_F3D22185E562ED08___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}
};
