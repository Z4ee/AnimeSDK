#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mirrorment/MirrormentTool_OpModuleType.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_A02263FE1D25F653__CTOR_OFFSET UNITYSDK_OFFSET(0xBA471D0)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_A02263FE1D25F653_TypeDefinitionIndex = 47768;

	class MirrormentTool_Class_1_A02263FE1D25F653 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* EGGCADJJJOD; // 0x10
		::UnityEngine::GameObject* DHIPFJBEJPI; // 0x18
		::System::String* JPGCAKBNNLP; // 0x20
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* DEMFJAMDLFP; // 0x28
		::System::String* KPEHHGEKNHA; // 0x30
		::RPG::Client::Prop::OpticalIllusionAxis FJMCLOIEMKG; // 0x38
		::UnityEngine::Vector3 BOGOAKBPFPH; // 0x3C
		::System::Single LENCOMGPHJE; // 0x48
		::UnityEngine::Vector3 LAADLNFMBCP; // 0x4C
		::System::Single GCPECCHMLCJ; // 0x58
		::Mirrorment::MirrormentTool_OpModuleType GMPGDEINODK; // 0x5C
		::UnityEngine::Vector3 BKAJJAJNHJF; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_A02263FE1D25F653__CTOR_OFFSET))(this);
		}
	};
}
