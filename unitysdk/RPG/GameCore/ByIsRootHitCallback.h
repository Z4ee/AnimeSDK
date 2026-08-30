#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_237726AA6455864A_OFFSET UNITYSDK_OFFSET(0x1CF471F0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_790C63A4AD23C001_OFFSET UNITYSDK_OFFSET(0x1CF471B0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_7BCF328C893025F5_OFFSET UNITYSDK_OFFSET(0x1CF47360)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_AE942EE597AC6B74_OFFSET UNITYSDK_OFFSET(0x1CF47330)
#define RPG_GAMECORE_BYISROOTHITCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF471E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRootHitCallback_TypeDefinitionIndex = 23234;

	class ByIsRootHitCallback : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_790C63A4AD23C001(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_790C63A4AD23C001_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_237726AA6455864A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_237726AA6455864A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE942EE597AC6B74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_AE942EE597AC6B74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7BCF328C893025F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_METHOD_4_7BCF328C893025F5_OFFSET))(a1, a2);
		}
	};
}
