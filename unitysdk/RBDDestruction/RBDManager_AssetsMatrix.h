#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RBDDESTRUCTION_RBDMANAGER_ASSETSMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C998530)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_AssetsMatrix_TypeDefinitionIndex = 27131;

	class RBDManager_AssetsMatrix : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ASSETSMATRIX__CTOR_OFFSET))(this);
		}
	};
}
