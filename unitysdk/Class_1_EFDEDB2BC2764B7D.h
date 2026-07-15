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

#define CLASS_1_EFDEDB2BC2764B7D_METHOD_1_B801C940FC77F45B_OFFSET UNITYSDK_OFFSET(0x1B243870)
#define CLASS_1_EFDEDB2BC2764B7D_METHOD_1_F6634A5119C618EF_OFFSET UNITYSDK_OFFSET(0x1B252240)
#define CLASS_1_EFDEDB2BC2764B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B253FB0)

inline static constexpr unsigned int Class_1_EFDEDB2BC2764B7D_TypeDefinitionIndex = 40584;

class Class_1_EFDEDB2BC2764B7D : public ::System::Object
{
public:
	::Class_1_D975FC0407AA8C9D* Field_1_0; // 0x10
	::Class_1_3DEF26C653AFADFD* Field_1_1; // 0x18
	::Class_1_D975FC0407AA8C9D* Field_1_2; // 0x20
	::Class_1_5F4E83900A3DADCA* Field_1_3; // 0x28
	::Class_1_3DEF26C653AFADFD* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_5; // 0x38
	::Class_1_66C3ADF82330F716* Field_1_6; // 0x40
	::Class_1_3DEF26C653AFADFD* Field_1_7; // 0x48
	::Il2CppArray<::Class_1_3DEF26C653AFADFD*>* Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x58
	::RPG::Client::LittleGame::Marble::MarbleHpType Field_1_10; // 0x5C

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
