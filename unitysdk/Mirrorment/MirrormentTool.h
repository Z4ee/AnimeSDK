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

#define MIRRORMENT_MIRRORMENTTOOL_GET_MIRRORPLANE_OFFSET UNITYSDK_OFFSET(0xBBC2C90)
#define MIRRORMENT_MIRRORMENTTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC2D30)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_TypeDefinitionIndex = 48225;

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
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* KPIILNCJCFF; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* CGBKOELIOJA; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Mirrorment::MirrormentTool_Class_1_A02263FE1D25F653*>* KBKFOHFCOFK; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Mirrorment::MirrormentTool_Class_1_A02263FE1D25F653*>* ANINEEFLBNL; // 0x60
		::Mirrorment::MirrormentTool_Class_1_6B9825E2275D9D97* KHCOFDFFLLC; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* KPEEMJCFPGG; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* MJBCMNBPAED; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* CFCBAHNANJO; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* IDJPJFNMAFM; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* ANIAPFEMNJF; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* EAIBBECPIFJ; // 0x98
		::UnityEngine::GameObject* MLCMKAMCLOK; // 0xA0

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
