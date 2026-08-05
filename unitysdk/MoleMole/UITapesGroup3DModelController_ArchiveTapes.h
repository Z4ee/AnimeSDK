#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController_TapeAdsorbField; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ARCHIVETAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1629FA00)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_ArchiveTapes_TypeDefinitionIndex = 60816;

	class UITapesGroup3DModelController_ArchiveTapes : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* InitCenterTape; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* Tapes; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::UITape3DModelController*, ::System::Int32>* Tape2DataIndex; // 0x20
		::MoleMole::UITapesGroup3DModelController_TapeAdsorbField* Field; // 0x28
		::System::Single CordonLf; // 0x30
		::System::Single CordonRt; // 0x34
		::UnityEngine::Vector3 TapeBorderWorldRt; // 0x38
		::UnityEngine::Vector3 TapeShowPositionOffset; // 0x44
		::UnityEngine::Vector3 TapeBorderWorldLf; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ARCHIVETAPES__CTOR_OFFSET))(this);
		}
	};
}
