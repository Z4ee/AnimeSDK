#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MaterialBaseBehavior.h"

#define MOLEMOLE_TIMELINE_MATERIALRECORDERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5BBE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialRecorderBehavior_TypeDefinitionIndex = 32195;

	class MaterialRecorderBehavior : public ::MoleMole::Timeline::MaterialBaseBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
