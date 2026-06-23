#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ChapterGridNoiseConfig; }
namespace MoleMole::Config { class HollowPosConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x170C0BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowMap_TypeDefinitionIndex = 68111;

	class HollowMap : public ::System::Object
	{
	public:
		::MoleMole::Config::ChapterGridNoiseConfig* noiseConfig; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HollowPosConfig*>* map; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWMAP__CTOR_OFFSET))(this);
		}
	};
}
