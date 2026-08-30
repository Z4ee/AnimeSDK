#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUEAREAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB99150)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB99190)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET UNITYSDK_OFFSET(0xCB991E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET UNITYSDK_OFFSET(0xCB99220)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xCB991A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo___c_TypeDefinitionIndex = 66906;

	class ChessRogueAreaInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueAreaInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueAreaInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x3C310);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x3C318);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x3C320);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x3C328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueNousAccessibleAreaDataList_b__16_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormalChessRogueAreaDataItem_b__18_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormalChessRogueNousAreaDataItem_b__23_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET))(this, a1);
		}
	};
}
