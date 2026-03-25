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

#define CLASS_3_CA35A2363D3EB222_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA436D90)
#define CLASS_3_CA35A2363D3EB222_METHOD_3_12DE27AD0FAC031C_OFFSET UNITYSDK_OFFSET(0xA437010)
#define CLASS_3_CA35A2363D3EB222_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA436DD0)
#define CLASS_3_CA35A2363D3EB222__CTOR_OFFSET UNITYSDK_OFFSET(0xA436D60)
#define CLASS_3_CA35A2363D3EB222___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4373C0)

inline static constexpr unsigned int Class_3_CA35A2363D3EB222_TypeDefinitionIndex = 44176;

class Class_3_CA35A2363D3EB222 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyCharacterOutlineTargetRender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + CLASS_3_CA35A2363D3EB222__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA35A2363D3EB222_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA35A2363D3EB222_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::PoolList_1<::UnityEngine::Renderer*>* Method_3_12DE27AD0FAC031C(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::PoolList_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CA35A2363D3EB222_METHOD_3_12DE27AD0FAC031C_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA35A2363D3EB222___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
