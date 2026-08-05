#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_YOROZUYACUBEGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14107370)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaCubeGridData_TypeDefinitionIndex = 47878;

	class YorozuyaCubeGridData : public ::System::Object
	{
	public:
		::System::Single _Rows; // 0x10
		::System::Single _Columns; // 0x14
		::System::Single _AnimationRows; // 0x18
		::System::Single _AnimationColumns; // 0x1C
		::System::Single _FrameCount; // 0x20
		::System::Single _BlockFrameCount; // 0x24
		::System::Single _AutoFrameCount; // 0x28
		::System::Single _AutoWidgetCount; // 0x2C
		::System::Single _MinBaseY; // 0x30
		::System::Single _MaxBaseY; // 0x34
		::System::Single _MinHeight; // 0x38
		::System::Single _MaxHeight; // 0x3C
		::System::Single _MinCubeSize; // 0x40
		::System::Single _MaxCubeSize; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACUBEGRIDDATA__CTOR_OFFSET))(this);
		}
	};
}
