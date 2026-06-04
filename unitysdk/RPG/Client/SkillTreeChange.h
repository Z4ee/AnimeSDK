#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillTreeChange_SkillTreeChangeInfo; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREECHANGE_GETCOMMENTS_OFFSET UNITYSDK_OFFSET(0xC8E2EE0)
#define RPG_CLIENT_SKILLTREECHANGE_GETSKILLDESC_OFFSET UNITYSDK_OFFSET(0xC8E2890)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERPOINT_OFFSET UNITYSDK_OFFSET(0xC8E1D10)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSKILL_OFFSET UNITYSDK_OFFSET(0xC8E1D50)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSUBSKILLS_OFFSET UNITYSDK_OFFSET(0xC8E1D90)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFOREPOINT_OFFSET UNITYSDK_OFFSET(0xC8E1CF0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESKILL_OFFSET UNITYSDK_OFFSET(0xC8E1D30)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESUBSKILLS_OFFSET UNITYSDK_OFFSET(0xC8E1D70)
#define RPG_CLIENT_SKILLTREECHANGE_GET_HASSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xC8E2290)
#define RPG_CLIENT_SKILLTREECHANGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC8E1DB0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC8E1FF0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCAFTER_OFFSET UNITYSDK_OFFSET(0xC8E25D0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCBEFORE_OFFSET UNITYSDK_OFFSET(0xC8E2450)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCAFTER_OFFSET UNITYSDK_OFFSET(0xC8E27F0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCBEFORE_OFFSET UNITYSDK_OFFSET(0xC8E2750)
#define RPG_CLIENT_SKILLTREECHANGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xC8E2DA0)
#define RPG_CLIENT_SKILLTREECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E1C80)
#define RPG_CLIENT_SKILLTREECHANGE__GETENHANCEDSKILLROWID_OFFSET UNITYSDK_OFFSET(0xC8E2B00)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeChange_TypeDefinitionIndex = 58460;

	class SkillTreeChange : public ::System::Object
	{
	public:
		::RPG::Client::SkillTreeChange_SkillTreeChangeInfo* Before; // 0x10
		::RPG::Client::SkillTreeChange_SkillTreeChangeInfo* After; // 0x18

		::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeRow* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AvatarSkillTreeRow* get_BeforePoint()
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_BEFOREPOINT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* get_AfterPoint()
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_AFTERPOINT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillRow* get_BeforeSkill()
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESKILL_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillRow* get_AfterSkill()
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSKILL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* get_BeforeSubSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESUBSKILLS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* get_AfterSubSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSUBSKILLS_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasSimpleDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_HASSIMPLEDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_PointDescBefore()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCBEFORE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PointDescAfter()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCAFTER_OFFSET))(this);
		}

		::RPG::Client::TextID get_PointSimpleDescBefore()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCBEFORE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PointSimpleDescAfter()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCAFTER_OFFSET))(this);
		}

		::RPG::Client::TextID GetSkillDesc(::RPG::GameCore::AvatarSkillRow* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GETSKILLDESC_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetEnhancedSkillRowID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE__GETENHANCEDSKILLROWID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GET_TYPENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetComments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GETCOMMENTS_OFFSET))(this);
		}
	};
}
