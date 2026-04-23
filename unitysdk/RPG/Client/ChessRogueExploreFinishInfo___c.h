#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A6496F2113C50F7_2;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FE29E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE2A20)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET UNITYSDK_OFFSET(0x9FE2A30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo___c_TypeDefinitionIndex = 61668;

	class ChessRogueExploreFinishInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_3A6496F2113C50F7_2*>** StaticGet___9__78_0()
		{
			return (::System::Comparison_1<::Class_1_3A6496F2113C50F7_2*>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x52BD0);
		}
		static ::RPG::Client::ChessRogueExploreFinishInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueExploreFinishInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueExploreFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x52BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__78_0(::Class_1_3A6496F2113C50F7_2* x, ::Class_1_3A6496F2113C50F7_2* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_3A6496F2113C50F7_2*, ::Class_1_3A6496F2113C50F7_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET))(this, x, y);
		}
	};
}
