#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
class Class_1_440BC8B0F4E66EEB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xC8E3470)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xC8E3790)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xC8E35C0)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E3550)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuide_TypeDefinitionIndex = 61293;

	class SkillTreeGrowthGuide : public ::System::Object
	{
	public:
		::Class_1_440BC8B0F4E66EEB* _Factory; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SkillTreeGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::SkillTreeGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
