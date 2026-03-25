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

#define CLASS_1_420D24AB4041AC38_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xB279240)
#define CLASS_1_420D24AB4041AC38_METHOD_1_15D9626FE8E7452F_OFFSET UNITYSDK_OFFSET(0xB278D00)
#define CLASS_1_420D24AB4041AC38_METHOD_1_2EA1D7D04E30AB42_OFFSET UNITYSDK_OFFSET(0xB277A50)
#define CLASS_1_420D24AB4041AC38_METHOD_1_2EA5D57136C4AAA5_OFFSET UNITYSDK_OFFSET(0xB278BB0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_3E674153F6518428_OFFSET UNITYSDK_OFFSET(0xB2787F0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB277940)
#define CLASS_1_420D24AB4041AC38_METHOD_1_44BBC94B0FE09175_OFFSET UNITYSDK_OFFSET(0xB278E10)
#define CLASS_1_420D24AB4041AC38_METHOD_1_49730D55A7D71A40_OFFSET UNITYSDK_OFFSET(0xB278490)
#define CLASS_1_420D24AB4041AC38_METHOD_1_50B69D6BAC0D54FB_OFFSET UNITYSDK_OFFSET(0xB277EB0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0xB278FF0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_692E4469B670E58D_OFFSET UNITYSDK_OFFSET(0xB278AC0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_6EB39E9269C86FAF_OFFSET UNITYSDK_OFFSET(0xB277720)
#define CLASS_1_420D24AB4041AC38_METHOD_1_97EB76AFBF862E54_OFFSET UNITYSDK_OFFSET(0xB2782D0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB2778A0)
#define CLASS_1_420D24AB4041AC38_METHOD_1_B91A743CE299CFF4_OFFSET UNITYSDK_OFFSET(0xB278340)
#define CLASS_1_420D24AB4041AC38_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0xB277B50)
#define CLASS_1_420D24AB4041AC38_METHOD_1_D8692E6ABD340C6B_OFFSET UNITYSDK_OFFSET(0xB278210)
#define CLASS_1_420D24AB4041AC38_METHOD_1_E07E9A00A7781C2A_OFFSET UNITYSDK_OFFSET(0xB278400)
#define CLASS_1_420D24AB4041AC38_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xB278770)
#define CLASS_1_420D24AB4041AC38_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xB279250)
#define CLASS_1_420D24AB4041AC38__CTOR_OFFSET UNITYSDK_OFFSET(0xB279260)

inline static constexpr unsigned int Class_1_420D24AB4041AC38_TypeDefinitionIndex = 49181;

class Class_1_420D24AB4041AC38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_1_4; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::GameEntity*>* Field_1_5; // 0x20
	::System::Boolean Field_1_1; // 0x28
	::System::Boolean _BlockNew_k__BackingField; // 0x29
	::RPG::GameCore::ELevelPerformanceType Field_1_0; // 0x2C

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

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_2EA1D7D04E30AB42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_2EA1D7D04E30AB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Void Method_1_50B69D6BAC0D54FB(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_50B69D6BAC0D54FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E07E9A00A7781C2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_E07E9A00A7781C2A_OFFSET))(this, a1);
	}

	::System::Void Method_1_49730D55A7D71A40(::RPG::GameCore::ELevelPerformanceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_49730D55A7D71A40_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_3E674153F6518428(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_3E674153F6518428_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2EA5D57136C4AAA5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_2EA5D57136C4AAA5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_15D9626FE8E7452F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_15D9626FE8E7452F_OFFSET))(this, a1);
	}

	::System::Void Method_1_44BBC94B0FE09175(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_44BBC94B0FE09175_OFFSET))(this, a1);
	}

	::System::Void Method_1_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_1_D8692E6ABD340C6B(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_D8692E6ABD340C6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_692E4469B670E58D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_METHOD_1_692E4469B670E58D_OFFSET))(this, a1, a2);
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

	::System::Void set_BlockNew(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_420D24AB4041AC38_SET_BLOCKNEW_OFFSET))(this, value);
	}
};
