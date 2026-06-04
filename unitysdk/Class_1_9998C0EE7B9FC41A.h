#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelMasterShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_A92BC063ED2379EB;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9998C0EE7B9FC41A_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDE3FAF0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xDE3FFD0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0xDE3FCE0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xDE3FF90)
#define CLASS_1_9998C0EE7B9FC41A_TICK_OFFSET UNITYSDK_OFFSET(0xDE3FF20)
#define CLASS_1_9998C0EE7B9FC41A__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE401B0)
#define CLASS_1_9998C0EE7B9FC41A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3FAE0)

inline static constexpr unsigned int Class_1_9998C0EE7B9FC41A_TypeDefinitionIndex = 72173;

class Class_1_9998C0EE7B9FC41A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9998C0EE7B9FC41A_TypeDefinitionIndex)->GetStaticField(0x68E80);
	}
	::Class_2_B66C1067C0468FBB* Field_1_1; // 0x10
	::Class_1_A92BC063ED2379EB* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_3; // 0x20
	::Class_1_3F1549C2A53A3A5B* Field_1_4; // 0x28
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType Field_1_5; // 0x30

	::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::Class_2_B66C1067C0468FBB*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A__CCTOR_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_TICK_OFFSET))(this, a1);
	}

	::Class_1_3F1549C2A53A3A5B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3F1549C2A53A3A5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	static ::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_51AC7912135C5E23_OFFSET))();
	}
};
