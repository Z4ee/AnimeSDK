#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelMasterShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_176;
class Class_1_C4FD36003027AC99;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_14;
class Class_2_49CAB3DE74280C58;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9998C0EE7B9FC41A_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA9B20D0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xA9B25A0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0xA9B22B0)
#define CLASS_1_9998C0EE7B9FC41A_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xA9B2560)
#define CLASS_1_9998C0EE7B9FC41A_TICK_OFFSET UNITYSDK_OFFSET(0xA9B24F0)
#define CLASS_1_9998C0EE7B9FC41A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9B27D0)
#define CLASS_1_9998C0EE7B9FC41A__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B20C0)

inline static constexpr unsigned int Class_1_9998C0EE7B9FC41A_TypeDefinitionIndex = 63195;

class Class_1_9998C0EE7B9FC41A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9998C0EE7B9FC41A_TypeDefinitionIndex)->GetStaticField(0x48BF0);
	}
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_176*>* Field_1_3; // 0x10
	::Class_1_C4FD36003027AC99* Field_1_5; // 0x18
	::Class_2_49CAB3DE74280C58* Field_1_4; // 0x20
	::Class_1_F9EBB5A401350F78* Field_1_1; // 0x28
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType Field_1_2; // 0x30

	::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType a1, ::Class_2_49CAB3DE74280C58* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::Class_2_49CAB3DE74280C58*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A__CCTOR_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_TICK_OFFSET))(this, a1);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	static ::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9998C0EE7B9FC41A_METHOD_1_885DF4DA0F709E3E_OFFSET))();
	}
};
