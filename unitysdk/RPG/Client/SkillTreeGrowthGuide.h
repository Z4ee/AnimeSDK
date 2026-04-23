#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_1_15CE52DCB05275B5;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xB18E7F0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xB18EA80)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xB18E8D0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB18EBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuide_TypeDefinitionIndex = 60358;

	class SkillTreeGrowthGuide : public ::System::Object
	{
	public:
		::Class_1_15CE52DCB05275B5* _Factory; // 0x10
		::RPG::Client::IAvatarInfoProvider* _Avatar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SkillTreeGrowthGuide* Create(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::SkillTreeGrowthGuide*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET))(avatar);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
