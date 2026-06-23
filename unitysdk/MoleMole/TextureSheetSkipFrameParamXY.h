#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAMXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1265C520)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetSkipFrameParamXY_TypeDefinitionIndex = 67526;

	class TextureSheetSkipFrameParamXY : public ::System::Object
	{
	public:
		::System::Int32 y; // 0x10
		::System::Int32 x; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAMXY__CTOR_OFFSET))(this);
		}
	};
}
