#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateExConfigRecruse.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RADARSTATECHANGEIMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACF700)

namespace MoleMole
{
	inline static constexpr unsigned int RadarStateChangeImageConfig_TypeDefinitionIndex = 50309;

	class RadarStateChangeImageConfig : public ::System::Object
	{
	public:
		::System::Int32 Area3dConfigId; // 0x10
		::System::String* Key; // 0x18
		::Foundation::AssetPath ImagePath; // 0x20
		::Foundation::AssetPath jsonPath; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberStateExConfigRecruse>* Condition; // 0x40
		::UnityEngine::Bounds OverlapBounds; // 0x48
		::System::Boolean HideMainMapWhenInBounds; // 0x60
		::System::Boolean HideAllRadar; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RADARSTATECHANGEIMAGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
