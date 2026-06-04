#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearDetail; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_ADDMIXDETAIL_OFFSET UNITYSDK_OFFSET(0xB9441B0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0xB943FE0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_FORGETYPE_OFFSET UNITYSDK_OFFSET(0xB9584D0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_MIXDETAILS_OFFSET UNITYSDK_OFFSET(0xB9584B0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_FORGETYPE_OFFSET UNITYSDK_OFFSET(0xB9584E0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_MIXDETAILS_OFFSET UNITYSDK_OFFSET(0xB9584C0)
#define RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xB9584A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildTypeGearsDetail_TypeDefinitionIndex = 59702;

	class EvolveBuildTypeGearsDetail : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _MixDetails_k__BackingField; // 0x10
		::RPG::GameCore::EvolveGearType _ForgeType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildTypeGearsDetail* Create(::RPG::Client::EvolveBuildGearDetail* a1)
		{
			return ((::RPG::Client::EvolveBuildTypeGearsDetail*(*)(::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_CREATE_OFFSET))(a1);
		}

		::System::Void AddMixDetail(::RPG::Client::EvolveBuildGearDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_ADDMIXDETAIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_MixDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_MIXDETAILS_OFFSET))(this);
		}

		::System::Void set_MixDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_MIXDETAILS_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveGearType get_ForgeType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_GET_FORGETYPE_OFFSET))(this);
		}

		::System::Void set_ForgeType(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTYPEGEARSDETAIL_SET_FORGETYPE_OFFSET))(this, a1);
		}
	};
}
