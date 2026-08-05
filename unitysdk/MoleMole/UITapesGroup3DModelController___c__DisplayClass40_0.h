#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x140D08F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_0__PERFORMANCEEXPAND_G__GETOFFSET_0_OFFSET UNITYSDK_OFFSET(0x140D0900)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass40_0_TypeDefinitionIndex = 60812;

	class UITapesGroup3DModelController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes; // 0x10
		::MoleMole::UITapesGroup3DModelController* __4__this; // 0x18
		::UnityEngine::Vector3 centerTapeLocalPosition; // 0x20
		::System::Int32 finishCount; // 0x2C
		::System::Single speed; // 0x30
		::System::Int32 totalNum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Single _PerformanceExpand_g__GetOffset_0(::System::Int32 idx, ::System::Int32 centerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_0__PERFORMANCEEXPAND_G__GETOFFSET_0_OFFSET))(this, idx, centerIdx);
		}
	};
}
