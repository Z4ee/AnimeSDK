#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/SceneMarkData_1.h"

namespace System { class String; }

#define MOLEMOLE_SCENEMARK_TARGETUIANCHORMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x129D97F0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int TargetUIAnchorMark_TypeDefinitionIndex = 76243;

	class TargetUIAnchorMark : public ::MoleMole::SceneMark::SceneMarkData_1<::MoleMole::SceneMark::TargetUIAnchorMark*>
	{
	public:
		::System::String* StyleName; // 0x18
		::System::Single Radius; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_TARGETUIANCHORMARK__CTOR_OFFSET))(this);
		}
	};
}
