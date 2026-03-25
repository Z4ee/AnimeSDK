#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdAssembly.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdLod_TypeDefinitionIndex = 60454;

	struct alignas(8) CrowdLod
	{
		::System::Single Distance; // 0x10
		::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>* Assemblies; // 0x18
	};
}
