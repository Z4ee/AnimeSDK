#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_2CE7FB463BD517C5_OFFSET UNITYSDK_OFFSET(0x1CEA48F0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET UNITYSDK_OFFSET(0x1CEA4720)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_EE1AEA8AEC0275D0_OFFSET UNITYSDK_OFFSET(0x1CEA46E0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_F993DD1927510872_OFFSET UNITYSDK_OFFSET(0x1CEA48C0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA4710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyTrace_TypeDefinitionIndex = 21620;

	class ByCheckColonyTrace : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EE1AEA8AEC0275D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_EE1AEA8AEC0275D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_723FDA3A5B10AD11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F993DD1927510872(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_F993DD1927510872_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2CE7FB463BD517C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_2CE7FB463BD517C5_OFFSET))(a1, a2);
		}
	};
}
