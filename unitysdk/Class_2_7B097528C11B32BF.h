#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class TextShowBehaviour; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7B097528C11B32BF_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x148BB600)
#define CLASS_2_7B097528C11B32BF_METHOD_2_34B6DA96637063D3_OFFSET UNITYSDK_OFFSET(0x148BB210)
#define CLASS_2_7B097528C11B32BF_METHOD_2_485DBAC8F2408BE1_OFFSET UNITYSDK_OFFSET(0x148BAAE0)
#define CLASS_2_7B097528C11B32BF_METHOD_2_5E2B8A558AE18AF6_OFFSET UNITYSDK_OFFSET(0x148B9E50)
#define CLASS_2_7B097528C11B32BF_METHOD_2_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x148B9B40)
#define CLASS_2_7B097528C11B32BF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x148BB5F0)
#define CLASS_2_7B097528C11B32BF_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x148BB030)
#define CLASS_2_7B097528C11B32BF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x148B93E0)
#define CLASS_2_7B097528C11B32BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x148BB200)
#define CLASS_2_7B097528C11B32BF__CTOR_OFFSET UNITYSDK_OFFSET(0x148BB170)

inline static constexpr unsigned int Class_2_7B097528C11B32BF_TypeDefinitionIndex = 60608;

class Class_2_7B097528C11B32BF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::UnityEngine::Canvas** StaticGet_Field_2_7()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B097528C11B32BF_TypeDefinitionIndex)->GetStaticField(0x350B0);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B097528C11B32BF_TypeDefinitionIndex)->GetStaticField(0xC4D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_2_0; // 0x10
	::System::Boolean Field_2_5; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_485DBAC8F2408BE1(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::TextShowBehaviour* a2, ::System::Single a3, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::TextShowBehaviour*, ::System::Single, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*>))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_485DBAC8F2408BE1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_5E2B8A558AE18AF6(::System::Int32 a1, ::MoleMole::Timeline::TextShowBehaviour* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::MoleMole::Timeline::TextShowBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_5E2B8A558AE18AF6_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Canvas* Method_2_34B6DA96637063D3()
	{
		return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_34B6DA96637063D3_OFFSET))();
	}

	::System::Void Method_2_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7B097528C11B32BF_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
