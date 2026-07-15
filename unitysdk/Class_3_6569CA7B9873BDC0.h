#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyCharacterOutlineTargetRender; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_6569CA7B9873BDC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183940C0)
#define CLASS_3_6569CA7B9873BDC0_METHOD_3_03F1D9FCBA28EEA5_OFFSET UNITYSDK_OFFSET(0x18394340)
#define CLASS_3_6569CA7B9873BDC0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18394100)
#define CLASS_3_6569CA7B9873BDC0__CTOR_OFFSET UNITYSDK_OFFSET(0x18394090)

inline static constexpr unsigned int Class_3_6569CA7B9873BDC0_TypeDefinitionIndex = 52693;

class Class_3_6569CA7B9873BDC0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyCharacterOutlineTargetRender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + CLASS_3_6569CA7B9873BDC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6569CA7B9873BDC0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6569CA7B9873BDC0_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::PoolList_1<::UnityEngine::Renderer*>* Method_3_03F1D9FCBA28EEA5(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::PoolList_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6569CA7B9873BDC0_METHOD_3_03F1D9FCBA28EEA5_OFFSET))(this, a1, a2);
	}
};
