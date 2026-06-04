#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Mirrorment { class MirrormentTool_Class_1_6B9825E2275D9D97; }
namespace Mirrorment { class MirrormentTool_Class_1_A02263FE1D25F653; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MIRRORMENT_MIRRORMENTTOOL_GET_MIRRORPLANE_OFFSET UNITYSDK_OFFSET(0xA84D770)
#define MIRRORMENT_MIRRORMENTTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA84D810)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_TypeDefinitionIndex = 45083;

	class MirrormentTool : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* MirrorFront; // 0x18
		::UnityEngine::GameObject* MirrorBack; // 0x20
		::UnityEngine::GameObject* Reflection; // 0x28
		::UnityEngine::GameObject* Mirror; // 0x30
		::System::Int32 MirrorWidth; // 0x38
		::System::Int32 MirrorHeight; // 0x3C
		::System::Boolean AutoRefreshReflectedObject; // 0x40
		::System::Boolean AutoRefreshTrackAndTag; // 0x41
		::System::Int32 YOffset; // 0x44
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* Field_5_9; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_5_10; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Mirrorment::MirrormentTool_Class_1_A02263FE1D25F653*>* Field_5_11; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Mirrorment::MirrormentTool_Class_1_A02263FE1D25F653*>* Field_5_12; // 0x60
		::Mirrorment::MirrormentTool_Class_1_6B9825E2275D9D97* Field_5_13; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_14; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* Field_5_15; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* Field_5_16; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_17; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* Field_5_18; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* Field_5_19; // 0x98
		::UnityEngine::GameObject* Field_5_20; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::OpticalIllusionPlane get_MirrorPlane()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPlane(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_GET_MIRRORPLANE_OFFSET))(this);
		}
	};
}
