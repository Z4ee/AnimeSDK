#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_CEILTONEARESTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1D39B120)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_CONVERTTORECTSWITHOUTPADDINGANDNORMALIZE01_OFFSET UNITYSDK_OFFSET(0x1D39B5A0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_ROUNDTONEARESTPOSITIVEPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1D39B040)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_SCALEATLASTOFITMAXDIM_OFFSET UNITYSDK_OFFSET(0x1D39B160)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B860)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_TypeDefinitionIndex = 90675;

	class MB2_TexturePacker : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_ATLAS_SIZE = 0x2000; // 0x0
		// static const ::System::Int32 MAX_RECURSION_DEPTH = 0xA; // 0x0
		::System::Boolean atlasMustBePowerOfTwo; // 0x10
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RoundToNearestPositivePowerOfTwo(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_ROUNDTONEARESTPOSITIVEPOWEROFTWO_OFFSET))(x);
		}

		static ::System::Int32 CeilToNearestPowerOfTwo(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_CEILTONEARESTPOWEROFTWO_OFFSET))(x);
		}

		::System::Boolean ScaleAtlasToFitMaxDim(::UnityEngine::Vector2 rootWH, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* images, ::System::Int32 maxDimensionX, ::System::Int32 maxDimensionY, ::DigitalOpus::MB::Core::AtlasPadding padding, ::System::Int32 minImageSizeX, ::System::Int32 minImageSizeY, ::System::Int32 masterImageSizeX, ::System::Int32 masterImageSizeY, ::System::Int32& outW, ::System::Int32& outH, ::System::Single& padX, ::System::Single& padY, ::System::Int32& newMinSizeX, ::System::Int32& newMinSizeY)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::AtlasPadding, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_SCALEATLASTOFITMAXDIM_OFFSET))(this, rootWH, images, maxDimensionX, maxDimensionY, padding, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, outW, outH, padX, padY, newMinSizeX, newMinSizeY);
		}

		::System::Void ConvertToRectsWithoutPaddingAndNormalize01(::DigitalOpus::MB::Core::AtlasPackingResult* rr, ::DigitalOpus::MB::Core::AtlasPadding padding)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPadding))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKER_CONVERTTORECTSWITHOUTPADDINGANDNORMALIZE01_OFFSET))(this, rr, padding);
		}
	};
}
