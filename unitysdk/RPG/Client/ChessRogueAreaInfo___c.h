#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUEAREAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9366980)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93669C0)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET UNITYSDK_OFFSET(0x9366A10)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET UNITYSDK_OFFSET(0x9366A50)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x93669D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo___c_TypeDefinitionIndex = 54427;

	class ChessRogueAreaInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x46700);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x46708);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x46710);
		}
		static ::RPG::Client::ChessRogueAreaInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueAreaInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueAreaInfo___c_TypeDefinitionIndex)->GetStaticField(0x46718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueNousAccessibleAreaDataList_b__16_0(::RPG::Client::ChessRogueAreaDataItem* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET))(this, a);
		}

		::System::Boolean _GetFormalChessRogueAreaDataItem_b__18_0(::RPG::Client::ChessRogueAreaDataItem* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET))(this, a);
		}

		::System::Boolean _GetFormalChessRogueNousAreaDataItem_b__23_0(::RPG::Client::ChessRogueAreaDataItem* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET))(this, a);
		}
	};
}
