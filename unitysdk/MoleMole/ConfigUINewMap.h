#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUINewMap_2DGroup; }
namespace MoleMole { class UrbanMapIconSize; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUINEWMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0047F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUINewMap_TypeDefinitionIndex = 46902;

	class ConfigUINewMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUINewMap_2DGroup*>* _2DGroups; // 0x58
		::System::Single DefaultScaleValueFrom3D; // 0x60
		::System::Single DefaultScaleValueClickAreaGroup; // 0x64
		::System::Single MobileScaleSpeed; // 0x68
		::System::Single PCScaleSpeed; // 0x6C
		::System::Single ConsoleScaleSpeed; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::UrbanMapIconSize*>* IconSizes; // 0x78
		::Foundation::AssetPath MiniMapLocalPlayerIconPath; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* MultiPlayerIconPaths; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUINEWMAP__CTOR_OFFSET))(this);
		}
	};
}
