#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildStage; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEEA720)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEEA750)
#define RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__INITSTAGES_B__9_0_OFFSET UNITYSDK_OFFSET(0xCEEA760)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSeasonData___c_TypeDefinitionIndex = 63866;

	class EvolveBuildSeasonData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EvolveBuildSeasonData___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildSeasonData___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildSeasonData___c_TypeDefinitionIndex)->GetStaticField(0x66290);
		}
		static ::System::Comparison_1<::RPG::Client::EvolveBuildStage*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildStage*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildSeasonData___c_TypeDefinitionIndex)->GetStaticField(0x66298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitStages_b__9_0(::RPG::Client::EvolveBuildStage* a1, ::RPG::Client::EvolveBuildStage* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildStage*, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSEASONDATA___C__INITSTAGES_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
