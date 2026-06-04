#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A49573EAE5086B1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_611F5177B2A953F1_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0xAD25CA0)
#define CLASS_1_611F5177B2A953F1_METHOD_1_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0xAD246E0)
#define CLASS_1_611F5177B2A953F1_METHOD_1_722C40A9A071D2E1_OFFSET UNITYSDK_OFFSET(0xAD249D0)
#define CLASS_1_611F5177B2A953F1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xAD25D60)
#define CLASS_1_611F5177B2A953F1_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xAD24130)
#define CLASS_1_611F5177B2A953F1_METHOD_1_9B2911E57853F013_OFFSET UNITYSDK_OFFSET(0xAD24210)
#define CLASS_1_611F5177B2A953F1_METHOD_1_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0xAD25120)
#define CLASS_1_611F5177B2A953F1_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xAD25DB0)
#define CLASS_1_611F5177B2A953F1_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xAD24C20)
#define CLASS_1_611F5177B2A953F1_METHOD_1_D98443162EDB45BC_OFFSET UNITYSDK_OFFSET(0xAD24770)
#define CLASS_1_611F5177B2A953F1_METHOD_1_DB60754F7B0F1262_OFFSET UNITYSDK_OFFSET(0xAD253A0)
#define CLASS_1_611F5177B2A953F1__CTOR_OFFSET UNITYSDK_OFFSET(0xAD23F60)

inline static constexpr unsigned int Class_1_611F5177B2A953F1_TypeDefinitionIndex = 52304;

class Class_1_611F5177B2A953F1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_3A49573EAE5086B1*>* Field_1_1; // 0x10
	::Class_1_3A49573EAE5086B1* Field_1_2; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::Class_1_3A49573EAE5086B1* Method_1_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_3A49573EAE5086B1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_1_D98443162EDB45BC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_D98443162EDB45BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_A5809AB80389F7DE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_DB60754F7B0F1262()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_DB60754F7B0F1262_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_1092C5537716905B_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_9B2911E57853F013(::Class_1_3A49573EAE5086B1* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_3A49573EAE5086B1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_9B2911E57853F013_OFFSET))(this, a1, a2);
	}

	::Class_1_3A49573EAE5086B1* Method_1_722C40A9A071D2E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_3A49573EAE5086B1*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_722C40A9A071D2E1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611F5177B2A953F1_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
