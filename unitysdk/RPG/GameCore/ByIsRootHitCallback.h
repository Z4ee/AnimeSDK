#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_237726AA6455864A_OFFSET UNITYSDK_OFFSET(0x170324C0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_F4D37F4B18AAC7A0_OFFSET UNITYSDK_OFFSET(0x170323F0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17032470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRootHitCallback_TypeDefinitionIndex = 21732;

	class ByIsRootHitCallback : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4D37F4B18AAC7A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_F4D37F4B18AAC7A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_237726AA6455864A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_237726AA6455864A_OFFSET))(a1, a2);
		}
	};
}
