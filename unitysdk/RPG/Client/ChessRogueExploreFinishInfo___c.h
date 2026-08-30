#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C116F60B38AF6E8E_3;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA8390)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA83D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET UNITYSDK_OFFSET(0xCBA83E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo___c_TypeDefinitionIndex = 66959;

	class ChessRogueExploreFinishInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueExploreFinishInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueExploreFinishInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x3DD70);
		}
		static ::System::Comparison_1<::Class_1_C116F60B38AF6E8E_3*>** StaticGet___9__78_0()
		{
			return (::System::Comparison_1<::Class_1_C116F60B38AF6E8E_3*>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x3DD78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__78_0(::Class_1_C116F60B38AF6E8E_3* a1, ::Class_1_C116F60B38AF6E8E_3* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C116F60B38AF6E8E_3*, ::Class_1_C116F60B38AF6E8E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET))(this, a1, a2);
		}
	};
}
