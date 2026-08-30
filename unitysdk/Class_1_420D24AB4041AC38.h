#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_06EF49E17999C143;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_420D24AB4041AC38_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xBAC65B0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xBAC5BA0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0xBAC5740)
#define CLASS_1_420D24AB4041AC38_METHOD_1_1F9DB45F7550A899_OFFSET UNITYSDK_OFFSET(0xBAC60C0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_23E46EE8A57B2031_OFFSET UNITYSDK_OFFSET(0xBAC5550)
#define CLASS_1_420D24AB4041AC38_METHOD_1_2EA1D7D04E30AB42_OFFSET UNITYSDK_OFFSET(0xBAC4D40)
#define CLASS_1_420D24AB4041AC38_METHOD_1_3818CB5A16BBAD51_OFFSET UNITYSDK_OFFSET(0xBAC5C20)
#define CLASS_1_420D24AB4041AC38_METHOD_1_3F6536FACF868D47_OFFSET UNITYSDK_OFFSET(0xBAC5EB0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_5C5FA00D654BE77A_OFFSET UNITYSDK_OFFSET(0xBAC61A0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_5CBD1A3583FE9FDC_OFFSET UNITYSDK_OFFSET(0xBAC5FA0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_6EB39E9269C86FAF_OFFSET UNITYSDK_OFFSET(0xBAC4A10)
#define CLASS_1_420D24AB4041AC38_METHOD_1_97EB76AFBF862E54_OFFSET UNITYSDK_OFFSET(0xBAC5610)
#define CLASS_1_420D24AB4041AC38_METHOD_1_A3341C341945A85E_OFFSET UNITYSDK_OFFSET(0xBAC5160)
#define CLASS_1_420D24AB4041AC38_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBAC4BA0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_B91A743CE299CFF4_OFFSET UNITYSDK_OFFSET(0xBAC5680)
#define CLASS_1_420D24AB4041AC38_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0xBAC4E40)
#define CLASS_1_420D24AB4041AC38_METHOD_1_E2F7C0EC16594FD9_OFFSET UNITYSDK_OFFSET(0xBAC5870)
#define CLASS_1_420D24AB4041AC38_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBAC4C40)
#define CLASS_1_420D24AB4041AC38_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xBAC6380)
#define CLASS_1_420D24AB4041AC38_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xBAC65C0)
#define CLASS_1_420D24AB4041AC38__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC65D0)

inline static constexpr unsigned int Class_1_420D24AB4041AC38_TypeDefinitionIndex = 60800;

class Class_1_420D24AB4041AC38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::GameEntity*>* GPNHEDBHBHL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* JKDEAEGLAON; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PIFIOLGCNDO; // 0x20
	::System::Boolean _BlockNew_k__BackingField; // 0x28
	::System::Boolean OCCIFHOEJMI; // 0x29
	::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EB39E9269C86FAF(::Class_1_06EF49E17999C143* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06EF49E17999C143*, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_6EB39E9269C86FAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_1_2EA1D7D04E30AB42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_2EA1D7D04E30AB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Void Method_1_A3341C341945A85E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_A3341C341945A85E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2F7C0EC16594FD9(::RPG::GameCore::ELevelPerformanceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_E2F7C0EC16594FD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_3818CB5A16BBAD51(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_3818CB5A16BBAD51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5CBD1A3583FE9FDC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_5CBD1A3583FE9FDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1F9DB45F7550A899(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_1F9DB45F7550A899_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C5FA00D654BE77A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_5C5FA00D654BE77A_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_1_23E46EE8A57B2031(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_23E46EE8A57B2031_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F6536FACF868D47(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_3F6536FACF868D47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97EB76AFBF862E54(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_97EB76AFBF862E54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B91A743CE299CFF4(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_B91A743CE299CFF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_BlockNew()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_GET_BLOCKNEW_OFFSET))(this);
	}

	::System::Void set_BlockNew(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_SET_BLOCKNEW_OFFSET))(this, a1);
	}
};
