#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MaterialCompRecorderInfo; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C386A40)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__DISPLAYCLASS27_0__UPDATEMESHRENDERERS_B__0_OFFSET UNITYSDK_OFFSET(0x1C387CA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior___c__DisplayClass27_0_TypeDefinitionIndex = 30624;

	class MaterialBaseBehavior___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderComp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateMeshRenderers_b__0(::MoleMole::Timeline::MaterialCompRecorderInfo* compInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::MaterialCompRecorderInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR___C__DISPLAYCLASS27_0__UPDATEMESHRENDERERS_B__0_OFFSET))(this, compInfo);
		}
	};
}
