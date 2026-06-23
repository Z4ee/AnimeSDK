#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetSkipFrameParamXY; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13F26C30)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetSkipFrameParam_TypeDefinitionIndex = 70376;

	class TextureSheetSkipFrameParam : public ::System::Object
	{
	public:
		::MoleMole::TextureSheetSkipFrameParamXY* SkipFramesXY; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* SkipFrames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAM__CTOR_OFFSET))(this);
		}
	};
}
