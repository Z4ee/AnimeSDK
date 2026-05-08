#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class LoopSubdivisionDataHolderParams; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D4BECE2500A4E157_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1460CD40)
#define CLASS_2_D4BECE2500A4E157_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1460CD50)
#define CLASS_2_D4BECE2500A4E157_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1460C3B0)
#define CLASS_2_D4BECE2500A4E157_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1460C480)
#define CLASS_2_D4BECE2500A4E157__CTOR_OFFSET UNITYSDK_OFFSET(0x1460CC60)

inline static constexpr unsigned int Class_2_D4BECE2500A4E157_TypeDefinitionIndex = 51625;

class Class_2_D4BECE2500A4E157 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::LoopSubdivisionDataHolderParams* Field_2_3; // 0x10
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::MoleMole::Timeline::LoopSubdivisionDataHolderParams* Field_2_2; // 0x20
	::System::Boolean Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4BECE2500A4E157__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_D4BECE2500A4E157_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D4BECE2500A4E157_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_D4BECE2500A4E157_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D4BECE2500A4E157_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
