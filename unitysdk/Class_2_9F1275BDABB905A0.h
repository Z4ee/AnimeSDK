#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9F1275BDABB905A0_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x16BC39A0)
#define CLASS_2_9F1275BDABB905A0_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x16BC39F0)
#define CLASS_2_9F1275BDABB905A0_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x16BC3BF0)
#define CLASS_2_9F1275BDABB905A0__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC3C50)

inline static constexpr unsigned int Class_2_9F1275BDABB905A0_TypeDefinitionIndex = 46141;

class Class_2_9F1275BDABB905A0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1275BDABB905A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_9F1275BDABB905A0_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1275BDABB905A0_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9F1275BDABB905A0_ONGRAPHSTART_OFFSET))(this, a1);
	}
};
