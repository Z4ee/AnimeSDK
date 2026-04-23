#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillRelatedAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xB18CD40)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xB18D0B0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xB18D100)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB18CE10)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__INIT_OFFSET UNITYSDK_OFFSET(0xB18CE70)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillRelatedAvatarDataGroup_TypeDefinitionIndex = 57648;

	class SkillRelatedAvatarDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SkillRelatedAvatarData*>* _AvatarDataList; // 0x10
		::System::UInt32 _Level; // 0x18

		::System::Void _ctor(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__CTOR_OFFSET))(this, level);
		}

		static ::RPG::Client::SkillRelatedAvatarDataGroup* Create(::System::UInt32 level)
		{
			return ((::RPG::Client::SkillRelatedAvatarDataGroup*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_CREATE_OFFSET))(level);
		}

		::System::Int32 GetRelatedAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARCOUNT_OFFSET))(this);
		}

		::RPG::Client::SkillRelatedAvatarData* GetRelatedAvatarData(::System::Int32 index)
		{
			return ((::RPG::Client::SkillRelatedAvatarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP_GETRELATEDAVATARDATA_OFFSET))(this, index);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP__INIT_OFFSET))(this);
		}
	};
}
