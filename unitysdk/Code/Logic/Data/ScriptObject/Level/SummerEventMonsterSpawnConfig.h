#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"

namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x12971420)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12971470)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int SummerEventMonsterSpawnConfig_TypeDefinitionIndex = 85812;

	class SummerEventMonsterSpawnConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*>* Patterns; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*>* BeatMaps; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}
	};
}
