#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveConditionByBodySize_BodySizePair.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF136F30)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE___C__DISPLAYCLASS2_0__PASS_B__0_OFFSET UNITYSDK_OFFSET(0xF136F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySize___c__DisplayClass2_0_TypeDefinitionIndex = 43819;

	class CameraStoryDataActiveConditionByBodySize___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::EntityBodySize npcBodySize; // 0x10
		::MoleMole::Battle::EntityBodySize playerBodySize; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Pass_b__0(::MoleMole::Config::CameraStoryDataActiveConditionByBodySize_BodySizePair pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraStoryDataActiveConditionByBodySize_BodySizePair))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZE___C__DISPLAYCLASS2_0__PASS_B__0_OFFSET))(this, pair);
		}
	};
}
