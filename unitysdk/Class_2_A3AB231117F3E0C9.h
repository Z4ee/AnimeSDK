#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A3AB231117F3E0C9_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x12A54680)
#define CLASS_2_A3AB231117F3E0C9_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x12A54630)
#define CLASS_2_A3AB231117F3E0C9_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12A54890)
#define CLASS_2_A3AB231117F3E0C9__CTOR_OFFSET UNITYSDK_OFFSET(0x12A548F0)
#define CLASS_2_A3AB231117F3E0C9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12A54900)

inline static constexpr unsigned int Class_2_A3AB231117F3E0C9_TypeDefinitionIndex = 44670;

class Class_2_A3AB231117F3E0C9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AB231117F3E0C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A3AB231117F3E0C9_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AB231117F3E0C9_METHOD_2_55B8349E0B606444_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A3AB231117F3E0C9_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A3AB231117F3E0C9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}
};
