#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace RBDDestruction { class RBDAsset; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }

#define RBDDESTRUCTION_RBDASSETSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EB9E0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDAssetsConfig_TypeDefinitionIndex = 29705;

	class RBDAssetsConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::ComputeShader* fragmentComputeShader; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RBDDestruction::RBDAsset*>* assetsConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDASSETSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
