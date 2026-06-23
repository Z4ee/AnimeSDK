#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_314;
class Class_1_5A6771CD0CA2718D;
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define MOLEMOLE_BLENDTEXTURESHEETDATAITEM_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xE94B060)
#define MOLEMOLE_BLENDTEXTURESHEETDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE94B0D0)

namespace MoleMole
{
	inline static constexpr unsigned int BlendTextureSheetDataItem_TypeDefinitionIndex = 43558;

	class BlendTextureSheetDataItem : public ::System::Object
	{
	public:
		::MoleMole::TextureSheetSkipFrameParam* SkipFrames; // 0x10
		::System::String* TextureSheetKey; // 0x18
		::System::Single Hue; // 0x20
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x24
		::System::Single Saturation; // 0x28
		::System::Single Value; // 0x2C
		::System::Boolean EnableScc; // 0x30
		::System::Boolean IsMain; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATAITEM__CTOR_OFFSET))(this);
		}

		::Class_1_5A6771CD0CA2718D* CreatePlayer(::Class_0_16E4307DCC419505_314* textureSheetImpl)
		{
			return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::Class_0_16E4307DCC419505_314*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATAITEM_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}
