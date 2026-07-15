#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_METHOD_3_3EC95546C2F18D94_OFFSET UNITYSDK_OFFSET(0x1BE2F030)
#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_METHOD_3_F3DB7E6039C94711_OFFSET UNITYSDK_OFFSET(0x1BE2EFF0)
#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2F020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupAlleyTransportGuide_TypeDefinitionIndex = 23435;

	class SetupAlleyTransportGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockHorizon; // 0x18
		::System::Boolean LockVertical; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3DB7E6039C94711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupAlleyTransportGuide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupAlleyTransportGuide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_METHOD_3_F3DB7E6039C94711_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3EC95546C2F18D94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupAlleyTransportGuide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupAlleyTransportGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_METHOD_3_3EC95546C2F18D94_OFFSET))(a1, a2);
		}
	};
}
