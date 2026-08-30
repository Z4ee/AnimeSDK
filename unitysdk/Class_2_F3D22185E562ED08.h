#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_F3D22185E562ED08_METHOD_2_01CC46B2EE97FDDD_OFFSET UNITYSDK_OFFSET(0x1A0D1190)
#define CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_1_OFFSET UNITYSDK_OFFSET(0x1A0D0FC0)
#define CLASS_2_F3D22185E562ED08_METHOD_2_11FD6C11DEA8D6F7_OFFSET UNITYSDK_OFFSET(0x1A0D0DE0)
#define CLASS_2_F3D22185E562ED08_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0x1A0D0C10)
#define CLASS_2_F3D22185E562ED08_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x1A0D0800)
#define CLASS_2_F3D22185E562ED08_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1A0D09F0)
#define CLASS_2_F3D22185E562ED08_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1A0D0620)
#define CLASS_2_F3D22185E562ED08_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0D0750)
#define CLASS_2_F3D22185E562ED08__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D1220)

inline static constexpr unsigned int Class_2_F3D22185E562ED08_TypeDefinitionIndex = 49292;

class Class_2_F3D22185E562ED08 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508>* NNKFEIJGFNE; // 0x10
	::System::Collections::Generic::List_1<::Class_2_F3D22185E562ED08_Struct_2_FF657750BB170508>* OCMJKGEDMGD; // 0x18
	::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x20

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
};
