#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearDetail; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_ADDMIXDETAIL_OFFSET UNITYSDK_OFFSET(0xA307400)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0xA307270)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_FORGETYPE_OFFSET UNITYSDK_OFFSET(0xA3074B0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_MIXDETAILS_OFFSET UNITYSDK_OFFSET(0xA307490)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_FORGETYPE_OFFSET UNITYSDK_OFFSET(0xA3074C0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_MIXDETAILS_OFFSET UNITYSDK_OFFSET(0xA3074A0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3073F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildTypeGearsDetail_TypeDefinitionIndex = 58772;

	class EvolveBuildTypeGearsDetail : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _MixDetails_k__BackingField; // 0x10
		::RPG::GameCore::EvolveGearType _ForgeType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildTypeGearsDetail* Create(::RPG::Client::EvolveBuildGearDetail* mixDetail)
		{
			return ((::RPG::Client::EvolveBuildTypeGearsDetail*(*)(::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_CREATE_OFFSET))(mixDetail);
		}

		::System::Void AddMixDetail(::RPG::Client::EvolveBuildGearDetail* mixDetail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_ADDMIXDETAIL_OFFSET))(this, mixDetail);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_MixDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_MIXDETAILS_OFFSET))(this);
		}

		::System::Void set_MixDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_MIXDETAILS_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveGearType get_ForgeType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_FORGETYPE_OFFSET))(this);
		}

		::System::Void set_ForgeType(::RPG::GameCore::EvolveGearType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_FORGETYPE_OFFSET))(this, value);
		}
	};
}
