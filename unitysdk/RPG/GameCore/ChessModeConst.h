#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChessStageRow; }
namespace RPG::GameCore { class ChessUnitRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHESSMODECONST_METHOD_2_1B32AF70E11D7939_OFFSET UNITYSDK_OFFSET(0x1708CB60)
#define RPG_GAMECORE_CHESSMODECONST_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1708CAC0)
#define RPG_GAMECORE_CHESSMODECONST_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1708CB40)
#define RPG_GAMECORE_CHESSMODECONST_METHOD_2_B1A2DA04C35D60D5_OFFSET UNITYSDK_OFFSET(0x1708C8C0)
#define RPG_GAMECORE_CHESSMODECONST__CTOR_OFFSET UNITYSDK_OFFSET(0x1708CAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModeConst_TypeDefinitionIndex = 16188;

	class ChessModeConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::ChessModeConst** StaticGet_Config()
		{
			return (::RPG::GameCore::ChessModeConst**)Il2CppClass::FromTypeDefinitionIndex(ChessModeConst_TypeDefinitionIndex)->GetStaticField(0x26BA0);
		}
		::Il2CppArray<::RPG::GameCore::ChessStageRow*>* StageList; // 0x10
		::Il2CppArray<::RPG::GameCore::ChessUnitRow*>* UnitList; // 0x18
		::Il2CppArray<::System::UInt32>* BackPackUnitList; // 0x20
		::Il2CppArray<::System::UInt32>* BaseUnit; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ChessUnitRow*>* _ChessUnitRowDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODECONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1A2DA04C35D60D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessModeConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessModeConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODECONST_METHOD_2_B1A2DA04C35D60D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODECONST_METHOD_2_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODECONST_METHOD_2_832295EC279E5994_OFFSET))();
		}

		::RPG::GameCore::ChessUnitRow* Method_2_1B32AF70E11D7939(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChessUnitRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODECONST_METHOD_2_1B32AF70E11D7939_OFFSET))(this, a1);
		}
	};
}
