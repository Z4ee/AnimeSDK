#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillTreeChange_SkillTreeChangeInfo; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREECHANGE_GETCOMMENTS_OFFSET UNITYSDK_OFFSET(0xA49E7A0)
#define RPG_CLIENT_SKILLTREECHANGE_GETSKILLDESC_OFFSET UNITYSDK_OFFSET(0xA49E200)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERPOINT_OFFSET UNITYSDK_OFFSET(0xA49DA50)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSKILL_OFFSET UNITYSDK_OFFSET(0xA49DA90)
#define RPG_CLIENT_SKILLTREECHANGE_GET_AFTERSUBSKILLS_OFFSET UNITYSDK_OFFSET(0xA49DAD0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFOREPOINT_OFFSET UNITYSDK_OFFSET(0xA49DA30)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESKILL_OFFSET UNITYSDK_OFFSET(0xA49DA70)
#define RPG_CLIENT_SKILLTREECHANGE_GET_BEFORESUBSKILLS_OFFSET UNITYSDK_OFFSET(0xA49DAB0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_HASSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA49DC00)
#define RPG_CLIENT_SKILLTREECHANGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA49DAF0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA49DB50)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCAFTER_OFFSET UNITYSDK_OFFSET(0xA49DF40)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTDESCBEFORE_OFFSET UNITYSDK_OFFSET(0xA49DDC0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCAFTER_OFFSET UNITYSDK_OFFSET(0xA49E160)
#define RPG_CLIENT_SKILLTREECHANGE_GET_POINTSIMPLEDESCBEFORE_OFFSET UNITYSDK_OFFSET(0xA49E0C0)
#define RPG_CLIENT_SKILLTREECHANGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xA49E660)
#define RPG_CLIENT_SKILLTREECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA49D9C0)
#define RPG_CLIENT_SKILLTREECHANGE__GETENHANCEDSKILLROWID_OFFSET UNITYSDK_OFFSET(0xA49E3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeChange_TypeDefinitionIndex = 50790;

	class SkillTreeChange : public ::System::Object
	{
	public:
		::RPG::Client::SkillTreeChange_SkillTreeChangeInfo* After; // 0x10
		::RPG::Client::SkillTreeChange_SkillTreeChangeInfo* Before; // 0x18

		::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeRow* beforePoint, ::RPG::GameCore::AvatarSkillTreeRow* afterPoint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE__CTOR_OFFSET))(this, beforePoint, afterPoint);
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

		::RPG::Client::TextID GetSkillDesc(::RPG::GameCore::AvatarSkillRow* skill, ::System::Boolean isSimple)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_GETSKILLDESC_OFFSET))(this, skill, isSimple);
		}

		::System::UInt32 _GetEnhancedSkillRowID(::System::UInt32 skillID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE__GETENHANCEDSKILLROWID_OFFSET))(this, skillID);
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
