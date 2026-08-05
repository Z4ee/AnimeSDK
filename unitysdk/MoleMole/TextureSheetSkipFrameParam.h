#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetSkipFrameParamXY; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x136F2B90)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetSkipFrameParam_TypeDefinitionIndex = 61203;

	class TextureSheetSkipFrameParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* SkipFrames; // 0x10
		::MoleMole::TextureSheetSkipFrameParamXY* SkipFramesXY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETSKIPFRAMEPARAM__CTOR_OFFSET))(this);
		}
	};
}
