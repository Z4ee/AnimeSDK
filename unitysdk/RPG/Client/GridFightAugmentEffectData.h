#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }
namespace RPG::Client { class GridFightGameModifier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA_GET_ADDROLEPOSINDEXES_OFFSET UNITYSDK_OFFSET(0x97CE530)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x97CE6C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x97CE710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentEffectData_TypeDefinitionIndex = 52289;

	class GridFightAugmentEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RemovedRolePosIndexes; // 0x18
		::RPG::Client::GridFightGameModifier* Modifier; // 0x20
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x28

		::System::Void _ctor(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA__CTOR_OFFSET))(this, augmentID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AddRolePosIndexes()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA_GET_ADDROLEPOSINDEXES_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierEffectType get_EffectType()
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA_GET_EFFECTTYPE_OFFSET))(this);
		}
	};
}
