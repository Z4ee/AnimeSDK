#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/TextureSheetType.h"

class VideoFrameColor;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGTEXTURECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1009FF10)

inline static constexpr unsigned int ConfigTextureColor_TypeDefinitionIndex = 68954;

class ConfigTextureColor : public ::Foundation::MihoyoSerializedScriptableObject
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>* VideoFrameColors; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>* AssemblyDrawingFrameColors; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>* BackGroundVideoFrameColors; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>* EffectVideoFrameColors; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR__CTOR_OFFSET))(this);
	}
};
