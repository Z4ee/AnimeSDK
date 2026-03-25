#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BA489CC837CB7557_2;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9374C60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9374CA0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET UNITYSDK_OFFSET(0x9374CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo___c_TypeDefinitionIndex = 54480;

	class ChessRogueExploreFinishInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_BA489CC837CB7557_2*>** StaticGet___9__78_0()
		{
			return (::System::Comparison_1<::Class_1_BA489CC837CB7557_2*>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x46850);
		}
		static ::RPG::Client::ChessRogueExploreFinishInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueExploreFinishInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x46858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__78_0(::Class_1_BA489CC837CB7557_2* x, ::Class_1_BA489CC837CB7557_2* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_BA489CC837CB7557_2*, ::Class_1_BA489CC837CB7557_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET))(this, x, y);
		}
	};
}
