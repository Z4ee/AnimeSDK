#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueGambleGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEBAD70)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBADB0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET UNITYSDK_OFFSET(0xDEBADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc___c_TypeDefinitionIndex = 67230;

	class RogueGambleBaseFunc___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueGambleBaseFunc___c_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		static ::RPG::Client::RogueGambleBaseFunc___c** StaticGet___9()
		{
			return (::RPG::Client::RogueGambleBaseFunc___c**)Il2CppClass::FromTypeDefinitionIndex(RogueGambleBaseFunc___c_TypeDefinitionIndex)->GetStaticField(0x1F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortGroupDataList_b__12_0(::RPG::Client::RogueGambleGroupData* a1, ::RPG::Client::RogueGambleGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET))(this, a1, a2);
		}
	};
}
