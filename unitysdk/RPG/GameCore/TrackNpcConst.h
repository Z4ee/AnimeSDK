#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCCONST_METHOD_2_405BD143B5D62E47_OFFSET UNITYSDK_OFFSET(0x178A3C20)
#define RPG_GAMECORE_TRACKNPCCONST__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcConst_TypeDefinitionIndex = 14898;

	class TrackNpcConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrackNpcVisionConfig*>* VisionConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCCONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_405BD143B5D62E47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCCONST_METHOD_2_405BD143B5D62E47_OFFSET))(a1, a2);
		}
	};
}
