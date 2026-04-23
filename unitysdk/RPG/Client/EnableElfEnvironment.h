#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ENABLEELFENVIRONMENT_METHOD_3_D49CF3245DD693F8_OFFSET UNITYSDK_OFFSET(0x185E5160)
#define RPG_CLIENT_ENABLEELFENVIRONMENT_METHOD_3_E768B99BEA3AA751_OFFSET UNITYSDK_OFFSET(0x185E51E0)
#define RPG_CLIENT_ENABLEELFENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x185E51B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnableElfEnvironment_TypeDefinitionIndex = 10094;

	class EnableElfEnvironment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D49CF3245DD693F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::EnableElfEnvironment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::EnableElfEnvironment*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT_METHOD_3_D49CF3245DD693F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E768B99BEA3AA751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::EnableElfEnvironment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::EnableElfEnvironment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT_METHOD_3_E768B99BEA3AA751_OFFSET))(a1, a2);
		}
	};
}
