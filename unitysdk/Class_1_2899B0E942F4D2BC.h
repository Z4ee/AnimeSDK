#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVSwitchReason.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_055C5EAE0A9ABD4D;
class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2899B0E942F4D2BC_METHOD_1_6593AFF6D557D0EC_OFFSET UNITYSDK_OFFSET(0x17EB7C80)
#define CLASS_1_2899B0E942F4D2BC_METHOD_1_7813B04986E9626D_OFFSET UNITYSDK_OFFSET(0x17EB7F60)
#define CLASS_1_2899B0E942F4D2BC_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x17EB7EF0)
#define CLASS_1_2899B0E942F4D2BC_METHOD_1_8695FFE2881491AB_OFFSET UNITYSDK_OFFSET(0x17EB7FF0)
#define CLASS_1_2899B0E942F4D2BC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17EB7FB0)
#define CLASS_1_2899B0E942F4D2BC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17EB7C40)
#define CLASS_1_2899B0E942F4D2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB7BB0)

inline static constexpr unsigned int Class_1_2899B0E942F4D2BC_TypeDefinitionIndex = 47352;

class Class_1_2899B0E942F4D2BC : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_055C5EAE0A9ABD4D*>* Field_1_0; // 0x18

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6593AFF6D557D0EC(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_6593AFF6D557D0EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7813B04986E9626D(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_7813B04986E9626D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_055C5EAE0A9ABD4D* Method_1_8695FFE2881491AB(::Enum_3_ABCAEFDF06E3479A a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Action* a4, ::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason a5, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a6, ::System::Action* a7, ::System::Boolean a8)
	{
		return ((::Class_1_055C5EAE0A9ABD4D*(*)(::PVOID, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Action*, ::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC_METHOD_1_8695FFE2881491AB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
