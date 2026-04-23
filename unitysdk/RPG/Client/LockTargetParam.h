#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LOCKTARGETPARAM_METHOD_2_7926AB46F25CEA7C_OFFSET UNITYSDK_OFFSET(0x185EB480)
#define RPG_CLIENT_LOCKTARGETPARAM_METHOD_2_DEDA9B3A2805D428_OFFSET UNITYSDK_OFFSET(0x185EB300)
#define RPG_CLIENT_LOCKTARGETPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x185EB470)

namespace RPG::Client
{
	inline static constexpr unsigned int LockTargetParam_TypeDefinitionIndex = 10060;

	class LockTargetParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DEDA9B3A2805D428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LockTargetParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LockTargetParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM_METHOD_2_DEDA9B3A2805D428_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7926AB46F25CEA7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LockTargetParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LockTargetParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM_METHOD_2_7926AB46F25CEA7C_OFFSET))(a1, a2);
		}
	};
}
