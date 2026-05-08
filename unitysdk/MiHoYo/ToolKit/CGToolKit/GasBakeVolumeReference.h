#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class GasBakeVolume; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_GASBAKEVOLUMEREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0xFE893B0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_GASBAKEVOLUMEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xFE89300)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int GasBakeVolumeReference_TypeDefinitionIndex = 73873;

	class GasBakeVolumeReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Values; // 0x18

		::System::Void _ctor(::MoleMole::Timeline::GasBakeVolume* gasComp)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::GasBakeVolume*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_GASBAKEVOLUMEREFERENCE__CTOR_OFFSET))(this, gasComp);
		}

		::System::Void RecoverReference(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_GASBAKEVOLUMEREFERENCE_RECOVERREFERENCE_OFFSET))(this, root);
		}
	};
}
