#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/System/Object.h"

class Class_1_3DEF26C653AFADFD;
class Class_1_5F4E83900A3DADCA;
class Class_1_66C3ADF82330F716;
class Class_1_D975FC0407AA8C9D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EFDEDB2BC2764B7D_METHOD_1_B801C940FC77F45B_OFFSET UNITYSDK_OFFSET(0x1C625470)
#define CLASS_1_EFDEDB2BC2764B7D_METHOD_1_F6634A5119C618EF_OFFSET UNITYSDK_OFFSET(0x1C625540)
#define CLASS_1_EFDEDB2BC2764B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6272C0)

inline static constexpr unsigned int Class_1_EFDEDB2BC2764B7D_TypeDefinitionIndex = 41522;

class Class_1_EFDEDB2BC2764B7D : public ::System::Object
{
public:
	::Class_1_3DEF26C653AFADFD* EOBLJJBOBIN; // 0x10
	::Class_1_D975FC0407AA8C9D* BEGKIKOGEOD; // 0x18
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* HGCNLFIMDKL; // 0x20
	::Class_1_5F4E83900A3DADCA* PNIDCBNNGDC; // 0x28
	::Il2CppArray<::Class_1_3DEF26C653AFADFD*>* KPJHIOKBJEI; // 0x30
	::Class_1_3DEF26C653AFADFD* JNICAKGMMPI; // 0x38
	::Class_1_66C3ADF82330F716* ALPKKNKAFBG; // 0x40
	::Class_1_D975FC0407AA8C9D* DLAKJKEADPN; // 0x48
	::Class_1_3DEF26C653AFADFD* IHIEIEHJJIN; // 0x50
	::RPG::Client::LittleGame::Marble::MarbleHpType FGKNABDECLA; // 0x58
	::System::UInt32 GHMHMKINNEJ; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFDEDB2BC2764B7D__CTOR_OFFSET))(this);
	}

	::Class_1_3DEF26C653AFADFD* Method_1_B801C940FC77F45B(::RPG::GameCore::MarbleTarget a1)
	{
		return ((::Class_1_3DEF26C653AFADFD*(*)(::PVOID, ::RPG::GameCore::MarbleTarget))((::PBYTE)hIl2Cpp + CLASS_1_EFDEDB2BC2764B7D_METHOD_1_B801C940FC77F45B_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_3DEF26C653AFADFD*>* Method_1_F6634A5119C618EF(::RPG::GameCore::MarbleTarget a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::Class_1_3DEF26C653AFADFD*>*(*)(::PVOID, ::RPG::GameCore::MarbleTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFDEDB2BC2764B7D_METHOD_1_F6634A5119C618EF_OFFSET))(this, a1, a2);
	}
};
