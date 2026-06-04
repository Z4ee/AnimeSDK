#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillRelatedAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xC8E1680)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xC8E1B10)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC8E1B60)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E1750)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__INIT_OFFSET UNITYSDK_OFFSET(0xC8E17B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillRelatedAvatarDataGroup_TypeDefinitionIndex = 58443;

	class SkillRelatedAvatarDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SkillRelatedAvatarData*>* _AvatarDataList; // 0x10
		::System::UInt32 _Level; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::SkillRelatedAvatarDataGroup* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SkillRelatedAvatarDataGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_CREATE_OFFSET))(a1);
		}

		::System::Int32 GetRelatedAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARCOUNT_OFFSET))(this);
		}

		::RPG::Client::SkillRelatedAvatarData* GetRelatedAvatarData(::System::Int32 a1)
		{
			return ((::RPG::Client::SkillRelatedAvatarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__INIT_OFFSET))(this);
		}
	};
}
