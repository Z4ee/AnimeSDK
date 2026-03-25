#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_CREATE_OFFSET UNITYSDK_OFFSET(0x933CBC0)
#define RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_GET_CURRENTSELECTCARDINDEX_OFFSET UNITYSDK_OFFSET(0x933CC40)
#define RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_SET_CURRENTSELECTCARDINDEX_OFFSET UNITYSDK_OFFSET(0x933CC50)
#define RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x933CC30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PreviewSnapshot_TypeDefinitionIndex = 62056;

	class PreviewSnapshot : public ::System::Object
	{
	public:
		::System::Int32 _CurrentSelectCardIndex_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 currentSelectCardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT__CTOR_OFFSET))(this, currentSelectCardIndex);
		}

		static ::RPG::Client::ChenLingBattle::PreviewSnapshot* Create(::System::Int32 currentSelectCardIndex)
		{
			return ((::RPG::Client::ChenLingBattle::PreviewSnapshot*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_CREATE_OFFSET))(currentSelectCardIndex);
		}

		::System::Int32 get_CurrentSelectCardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_GET_CURRENTSELECTCARDINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentSelectCardIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREVIEWSNAPSHOT_SET_CURRENTSELECTCARDINDEX_OFFSET))(this, value);
		}
	};
}
