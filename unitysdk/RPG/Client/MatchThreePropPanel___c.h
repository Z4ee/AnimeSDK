#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client { class MatchThreePropItemPanel; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B4CC80)
#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4CCC0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__SETUPVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0x9B4CCF0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL___C__SETUPVIEW_B__24_1_OFFSET UNITYSDK_OFFSET(0x9B4CCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePropPanel___c_TypeDefinitionIndex = 53591;

	class MatchThreePropPanel___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::MatchThreePropItemPanel*, ::RPG::Client::MatchThreeGameProp*, ::System::Boolean>** StaticGet___9__24_1()
		{
			return (::System::Func_3<::RPG::Client::MatchThreePropItemPanel*, ::RPG::Client::MatchThreeGameProp*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePropPanel___c_TypeDefinitionIndex)->GetStaticField(0x2FC30);
		}
		static ::System::Comparison_1<::RPG::Client::MatchThreePropItemPanel*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreePropItemPanel*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePropPanel___c_TypeDefinitionIndex)->GetStaticField(0x2FC38);
		}
		static ::RPG::Client::MatchThreePropPanel___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreePropPanel___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePropPanel___c_TypeDefinitionIndex)->GetStaticField(0x2FC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetupView_b__24_1(::RPG::Client::MatchThreePropItemPanel* panel, ::RPG::Client::MatchThreeGameProp* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreePropItemPanel*, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__SETUPVIEW_B__24_1_OFFSET))(this, panel, info);
		}

		::System::Int32 _SetupView_b__24_0(::RPG::Client::MatchThreePropItemPanel* lhs, ::RPG::Client::MatchThreePropItemPanel* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreePropItemPanel*, ::RPG::Client::MatchThreePropItemPanel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL___C__SETUPVIEW_B__24_0_OFFSET))(this, lhs, rhs);
		}
	};
}
