#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueGambleGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA304C30)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA304C70)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET UNITYSDK_OFFSET(0xA304C80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc___c_TypeDefinitionIndex = 54747;

	class RogueGambleBaseFunc___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueGambleBaseFunc___c_TypeDefinitionIndex)->GetStaticField(0x15860);
		}
		static ::RPG::Client::RogueGambleBaseFunc___c** StaticGet___9()
		{
			return (::RPG::Client::RogueGambleBaseFunc___c**)Il2CppClass::FromTypeDefinitionIndex(RogueGambleBaseFunc___c_TypeDefinitionIndex)->GetStaticField(0x15868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortGroupDataList_b__12_0(::RPG::Client::RogueGambleGroupData* x, ::RPG::Client::RogueGambleGroupData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET))(this, x, y);
		}
	};
}
