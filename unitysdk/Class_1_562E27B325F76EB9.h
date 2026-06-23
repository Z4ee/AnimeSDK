#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/Struct_2_3959D6851A344518.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_344;
class Class_1_05CB482B8638F6BA;
class Class_1_08B34D65A9FCAAE5;
class Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0;
class Class_1_9518B5776748B41E;
namespace MoleMole { class ChessboardTextureSheetTagsData; }

#define CLASS_1_562E27B325F76EB9_METHOD_1_437AD0D2C6E3286F_OFFSET UNITYSDK_OFFSET(0xF8A1A10)
#define CLASS_1_562E27B325F76EB9_METHOD_1_67C16DDF256CF469_OFFSET UNITYSDK_OFFSET(0xF8A0940)
#define CLASS_1_562E27B325F76EB9_METHOD_1_90F0FB5DCC329F4B_OFFSET UNITYSDK_OFFSET(0xF8A1650)
#define CLASS_1_562E27B325F76EB9_METHOD_1_AE9EA39F15B7FD4E_OFFSET UNITYSDK_OFFSET(0xF8A18E0)
#define CLASS_1_562E27B325F76EB9_METHOD_1_E7C932FF941134BA_OFFSET UNITYSDK_OFFSET(0xF8A08A0)
#define CLASS_1_562E27B325F76EB9_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xF8A19C0)
#define CLASS_1_562E27B325F76EB9__CTOR_OFFSET UNITYSDK_OFFSET(0xF8A0890)

inline static constexpr unsigned int Class_1_562E27B325F76EB9_TypeDefinitionIndex = 48167;

class Class_1_562E27B325F76EB9 : public ::System::Object
{
public:
	::MoleMole::ChessboardTextureSheetTagsData* Field_1_4; // 0x10
	::Class_1_08B34D65A9FCAAE5* Field_1_2; // 0x18
	::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* Field_1_5; // 0x20
	::Class_1_9518B5776748B41E* Field_1_0; // 0x28
	::Struct_2_C70A12CE5BBC6553 Field_1_1; // 0x30
	::System::Boolean Field_1_3; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::EffectResult Method_1_E7C932FF941134BA(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_E7C932FF941134BA_OFFSET))(this, a1, a2);
	}

	::Struct_2_C70A12CE5BBC6553 Method_1_67C16DDF256CF469(::Class_1_05CB482B8638F6BA* a1, ::Struct_2_3959D6851A344518& a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Struct_2_C70A12CE5BBC6553(*)(::PVOID, ::Class_1_05CB482B8638F6BA*, ::Struct_2_3959D6851A344518&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_67C16DDF256CF469_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_90F0FB5DCC329F4B(::MoleMole::HollowChessboard::EffectResult a1, ::Class_0_16E4307DCC419505_344* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::EffectResult, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_90F0FB5DCC329F4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE9EA39F15B7FD4E(::Class_1_9518B5776748B41E* a1, ::Class_1_08B34D65A9FCAAE5* a2, ::MoleMole::ChessboardTextureSheetTagsData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9518B5776748B41E*, ::Class_1_08B34D65A9FCAAE5*, ::MoleMole::ChessboardTextureSheetTagsData*))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_AE9EA39F15B7FD4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_9518B5776748B41E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9518B5776748B41E*))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::EffectResult Method_1_437AD0D2C6E3286F(::Class_1_05CB482B8638F6BA* a1, ::Struct_2_3959D6851A344518& a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::Class_1_05CB482B8638F6BA*, ::Struct_2_3959D6851A344518&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_1_562E27B325F76EB9_METHOD_1_437AD0D2C6E3286F_OFFSET))(this, a1, a2, a3);
	}
};
