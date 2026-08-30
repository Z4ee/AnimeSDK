#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB35280)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB352C0)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETHIDECABINETINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CB35440)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETHIDECABINETINFO_B__4_1_OFFSET UNITYSDK_OFFSET(0x1CB354A0)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETNORMALCABINETINFO_B__3_0_OFFSET UNITYSDK_OFFSET(0x1CB352D0)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETNORMALCABINETINFO_B__3_1_OFFSET UNITYSDK_OFFSET(0x1CB35390)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueCabinetDataInfo___c_TypeDefinitionIndex = 66910;

	class ChessRogueCabinetDataInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueCabinetDataInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueCabinetDataInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueCabinetDataInfo___c_TypeDefinitionIndex)->GetStaticField(0x47DA0);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueCabinetDataInfo___c_TypeDefinitionIndex)->GetStaticField(0x47DA8);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueCabinetDataInfo___c_TypeDefinitionIndex)->GetStaticField(0x47DB0);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueCabinetDataInfo___c_TypeDefinitionIndex)->GetStaticField(0x47DB8);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueCabinetDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueCabinetDataInfo___c_TypeDefinitionIndex)->GetStaticField(0x47DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNormalCabinetInfo_b__3_0(::RPG::Client::ChessRogueCabinetDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueCabinetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETNORMALCABINETINFO_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNormalCabinetInfo_b__3_1(::RPG::Client::ChessRogueCabinetDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChessRogueCabinetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETNORMALCABINETINFO_B__3_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetHideCabinetInfo_b__4_0(::RPG::Client::ChessRogueCabinetDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueCabinetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETHIDECABINETINFO_B__4_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHideCabinetInfo_b__4_1(::RPG::Client::ChessRogueCabinetDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChessRogueCabinetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO___C__GETHIDECABINETINFO_B__4_1_OFFSET))(this, a1);
		}
	};
}
