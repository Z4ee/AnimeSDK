#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAeonDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUEAEONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FCFBE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCFC20)
#define RPG_CLIENT_CHESSROGUEAEONINFO___C__GETCHESSROGUEAEONSORTEDDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x9FCFC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonInfo___c_TypeDefinitionIndex = 61609;

	class ChessRogueAeonInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueAeonInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueAeonInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x51B50);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAeonDataItem*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAeonDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x51B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetChessRogueAeonSortedData_b__7_0(::RPG::Client::ChessRogueAeonDataItem* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChessRogueAeonDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO___C__GETCHESSROGUEAEONSORTEDDATA_B__7_0_OFFSET))(this, a);
		}
	};
}
