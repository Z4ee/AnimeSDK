#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2D8F73CAD750F3A3_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x13C321D0)
#define CLASS_2_2D8F73CAD750F3A3_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x13C32220)
#define CLASS_2_2D8F73CAD750F3A3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13C32420)
#define CLASS_2_2D8F73CAD750F3A3__CTOR_OFFSET UNITYSDK_OFFSET(0x13C32480)
#define CLASS_2_2D8F73CAD750F3A3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13C32490)

inline static constexpr unsigned int Class_2_2D8F73CAD750F3A3_TypeDefinitionIndex = 45217;

class Class_2_2D8F73CAD750F3A3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D8F73CAD750F3A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_2D8F73CAD750F3A3_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D8F73CAD750F3A3_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2D8F73CAD750F3A3_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2D8F73CAD750F3A3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}
};
