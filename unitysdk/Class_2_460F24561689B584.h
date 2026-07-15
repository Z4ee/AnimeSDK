#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_460F24561689B584_Struct_2_4D7C3078EE4CFF95.h"
#include "unitysdk/Class_2_460F24561689B584_Struct_2_5E743308CAC2DAD7.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_425;
class Class_1_CB986F8DD1655D73;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_460F24561689B584_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14BA3DA0)
#define CLASS_2_460F24561689B584_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14BA4410)
#define CLASS_2_460F24561689B584_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x14BA4B50)
#define CLASS_2_460F24561689B584_METHOD_2_221A0C77140D71BA_OFFSET UNITYSDK_OFFSET(0x14BA4530)
#define CLASS_2_460F24561689B584_METHOD_2_223503D30FA71861_OFFSET UNITYSDK_OFFSET(0x14BA4360)
#define CLASS_2_460F24561689B584_METHOD_2_26FFA4B6B47BB8C6_OFFSET UNITYSDK_OFFSET(0x14BA3AD0)
#define CLASS_2_460F24561689B584_METHOD_2_9581BE628286891C_OFFSET UNITYSDK_OFFSET(0x14BA3A60)
#define CLASS_2_460F24561689B584_METHOD_2_A95DC8FB0A8EEF19_OFFSET UNITYSDK_OFFSET(0x14BA4980)
#define CLASS_2_460F24561689B584_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x14BA4CA0)
#define CLASS_2_460F24561689B584_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14BA4B40)
#define CLASS_2_460F24561689B584_TICK_OFFSET UNITYSDK_OFFSET(0x14BA3E40)
#define CLASS_2_460F24561689B584__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BA4CC0)
#define CLASS_2_460F24561689B584__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA4CB0)

inline static constexpr unsigned int Class_2_460F24561689B584_TypeDefinitionIndex = 54357;

class Class_2_460F24561689B584 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_460F24561689B584_TypeDefinitionIndex)->GetStaticField(0x27E0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_2461A19B320A03F9* Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::Class_2_460F24561689B584_Struct_2_4D7C3078EE4CFF95 Field_2_4; // 0x28
	::Class_2_460F24561689B584_Struct_2_4D7C3078EE4CFF95 Field_2_5; // 0x2C
	::System::Boolean Field_2_6; // 0x30
	::Class_2_460F24561689B584_Struct_2_5E743308CAC2DAD7 Field_2_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9581BE628286891C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_9581BE628286891C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_26FFA4B6B47BB8C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_26FFA4B6B47BB8C6_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_LATEUPDATE_OFFSET))(this, a1);
	}

	::Class_1_CB986F8DD1655D73* Method_2_223503D30FA71861(::Class_2_2461A19B320A03F9* a1)
	{
		return ((::Class_1_CB986F8DD1655D73*(*)(::PVOID, ::Class_2_2461A19B320A03F9*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_223503D30FA71861_OFFSET))(this, a1);
	}

	::System::Void Method_2_221A0C77140D71BA(::Class_2_2461A19B320A03F9* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2461A19B320A03F9*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_221A0C77140D71BA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A95DC8FB0A8EEF19(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_A95DC8FB0A8EEF19_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_460F24561689B584_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};
