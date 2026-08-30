#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_METHOD_2_9AC73763CFA01B53_OFFSET UNITYSDK_OFFSET(0x1CDCFD90)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfigMap_TypeDefinitionIndex = 16272;

	class CRPVirtualCameraConfigMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CRPVirtualCameraConfigList*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9AC73763CFA01B53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CRPVirtualCameraConfigMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CRPVirtualCameraConfigMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_METHOD_2_9AC73763CFA01B53_OFFSET))(a1, a2);
		}
	};
}
