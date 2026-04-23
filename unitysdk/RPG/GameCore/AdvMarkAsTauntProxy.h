#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVMARKASTAUNTPROXY_METHOD_3_6C110AD00C2AFB6E_OFFSET UNITYSDK_OFFSET(0x18655610)
#define RPG_GAMECORE_ADVMARKASTAUNTPROXY_METHOD_3_F8DBA22760D83224_OFFSET UNITYSDK_OFFSET(0x18655590)
#define RPG_GAMECORE_ADVMARKASTAUNTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x186555E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvMarkAsTauntProxy_TypeDefinitionIndex = 19528;

	class AdvMarkAsTauntProxy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* ProxyTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8DBA22760D83224(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvMarkAsTauntProxy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvMarkAsTauntProxy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY_METHOD_3_F8DBA22760D83224_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C110AD00C2AFB6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvMarkAsTauntProxy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvMarkAsTauntProxy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMARKASTAUNTPROXY_METHOD_3_6C110AD00C2AFB6E_OFFSET))(a1, a2);
		}
	};
}
