#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRAILARRAYCLONER__CTOR_OFFSET UNITYSDK_OFFSET(0xA208F00)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TrailArrayCloner_TypeDefinitionIndex = 65052;

	class Effect_TrailArrayCloner : public ::RPG::Client::TAMonoBase
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* SourceSMR; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TargetBones; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* GeneratedSMRs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAILARRAYCLONER__CTOR_OFFSET))(this);
		}
	};
}
