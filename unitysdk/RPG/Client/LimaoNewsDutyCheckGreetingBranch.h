#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_METHOD_4_21E8F6ABB45DBD0A_OFFSET UNITYSDK_OFFSET(0x1CD4C0C0)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_METHOD_4_650113ADAAC746B1_OFFSET UNITYSDK_OFFSET(0x1CD4C100)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4C0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsDutyCheckGreetingBranch_TypeDefinitionIndex = 10231;

	class LimaoNewsDutyCheckGreetingBranch : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_21E8F6ABB45DBD0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_METHOD_4_21E8F6ABB45DBD0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_650113ADAAC746B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsDutyCheckGreetingBranch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKGREETINGBRANCH_METHOD_4_650113ADAAC746B1_OFFSET))(a1, a2);
		}
	};
}
