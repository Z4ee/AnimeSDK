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

#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x16826D60)
#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_34B6DA96637063D3_OFFSET UNITYSDK_OFFSET(0x16826980)
#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x16825300)
#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_D194283C9D9D5723_OFFSET UNITYSDK_OFFSET(0x16825610)
#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x16826D70)
#define CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_F57DD140ADB2B520_OFFSET UNITYSDK_OFFSET(0x168262A0)
#define CLASS_2_BD2FB49EE6FE8BAF_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x168267A0)
#define CLASS_2_BD2FB49EE6FE8BAF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16824B50)
#define CLASS_2_BD2FB49EE6FE8BAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16826970)
#define CLASS_2_BD2FB49EE6FE8BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x168268E0)

inline static constexpr unsigned int Class_2_BD2FB49EE6FE8BAF_TypeDefinitionIndex = 46800;

class Class_2_BD2FB49EE6FE8BAF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::UnityEngine::Canvas** StaticGet_Field_2_1()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BD2FB49EE6FE8BAF_TypeDefinitionIndex)->GetStaticField(0x4A490);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BD2FB49EE6FE8BAF_TypeDefinitionIndex)->GetStaticField(0x118E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_2_0; // 0x10
	::System::Boolean Field_2_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	static ::UnityEngine::Canvas* Method_2_34B6DA96637063D3()
	{
		return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_34B6DA96637063D3_OFFSET))();
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::System::Void Method_2_F57DD140ADB2B520(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::TextShowBehaviour* a2, ::System::Single a3, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::TextShowBehaviour*, ::System::Single, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*>))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_F57DD140ADB2B520_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_D194283C9D9D5723(::System::Int32 a1, ::MoleMole::Timeline::TextShowBehaviour* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::MoleMole::Timeline::TextShowBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_D194283C9D9D5723_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BD2FB49EE6FE8BAF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
