#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_SLOTREFERENCETRANSFORMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19131BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup_TypeDefinitionIndex = 66940;

	class MonoEffectPluginMultiCRPVCamera_SlotReferenceTransformGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Transforms; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_SLOTREFERENCETRANSFORMGROUP__CTOR_OFFSET))(this);
		}
	};
}
