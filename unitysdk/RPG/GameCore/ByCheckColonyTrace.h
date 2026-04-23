#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET UNITYSDK_OFFSET(0x18721B80)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_78D3808F89F82113_OFFSET UNITYSDK_OFFSET(0x18721AB0)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18721B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyTrace_TypeDefinitionIndex = 20718;

	class ByCheckColonyTrace : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_78D3808F89F82113(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_78D3808F89F82113_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_723FDA3A5B10AD11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_METHOD_4_723FDA3A5B10AD11_OFFSET))(a1, a2);
		}
	};
}
