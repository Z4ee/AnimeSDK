#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4E83900A3DADCA;
class Class_1_66C3ADF82330F716;
class Class_1_9671734BA1DFB3F8;
class Class_1_D975FC0407AA8C9D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D37BADBAF66E56C6_METHOD_1_28D8354732952A7F_OFFSET UNITYSDK_OFFSET(0x17F0A080)
#define CLASS_1_D37BADBAF66E56C6_METHOD_1_B801C940FC77F45B_OFFSET UNITYSDK_OFFSET(0x17F09FB0)
#define CLASS_1_D37BADBAF66E56C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0B450)

inline static constexpr unsigned int Class_1_D37BADBAF66E56C6_TypeDefinitionIndex = 39007;

class Class_1_D37BADBAF66E56C6 : public ::System::Object
{
public:
	::Class_1_D975FC0407AA8C9D* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_9671734BA1DFB3F8*>* Field_1_6; // 0x18
	::Class_1_5F4E83900A3DADCA* Field_1_5; // 0x20
	::Class_1_D975FC0407AA8C9D* Field_1_0; // 0x28
	::Class_1_66C3ADF82330F716* Field_1_4; // 0x30
	::Class_1_9671734BA1DFB3F8* Field_1_8; // 0x38
	::Class_1_9671734BA1DFB3F8* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_10; // 0x48
	::Class_1_9671734BA1DFB3F8* Field_1_2; // 0x50
	::RPG::Client::LittleGame::Marble::MarbleHpType Field_1_9; // 0x58
	::System::UInt32 Field_1_3; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D37BADBAF66E56C6__CTOR_OFFSET))(this);
	}

	::Class_1_9671734BA1DFB3F8* Method_1_B801C940FC77F45B(::RPG::GameCore::MarbleTarget a1)
	{
		return ((::Class_1_9671734BA1DFB3F8*(*)(::PVOID, ::RPG::GameCore::MarbleTarget))((::PBYTE)hIl2Cpp + CLASS_1_D37BADBAF66E56C6_METHOD_1_B801C940FC77F45B_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_9671734BA1DFB3F8*>* Method_1_28D8354732952A7F(::RPG::GameCore::MarbleTarget a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::Class_1_9671734BA1DFB3F8*>*(*)(::PVOID, ::RPG::GameCore::MarbleTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D37BADBAF66E56C6_METHOD_1_28D8354732952A7F_OFFSET))(this, a1, a2);
	}
};
