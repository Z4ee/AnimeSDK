#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ProfileCounter; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_14613881B5AE6CE2_METHOD_1_19798F449A07F371_OFFSET UNITYSDK_OFFSET(0x11BF0F30)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x11BF1780)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_232047DCB11AC4DC_OFFSET UNITYSDK_OFFSET(0x11BF23A0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_3432C1AC45306F95_OFFSET UNITYSDK_OFFSET(0x11BF1660)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_3C31B0557213ABF3_OFFSET UNITYSDK_OFFSET(0x11BF12E0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_440EF5F3B9D7FA9F_OFFSET UNITYSDK_OFFSET(0x11BF1710)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_561370910B6940D2_OFFSET UNITYSDK_OFFSET(0x11BF1060)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_677FE239F17E3706_OFFSET UNITYSDK_OFFSET(0x11BF20C0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x11BF18C0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_6DC9045D9C3368A7_OFFSET UNITYSDK_OFFSET(0x11BF2220)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_1_OFFSET UNITYSDK_OFFSET(0x11BF1500)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_2_OFFSET UNITYSDK_OFFSET(0x11BF15B0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_OFFSET UNITYSDK_OFFSET(0x11BF1450)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DB841484E2856C2A_OFFSET UNITYSDK_OFFSET(0x11BF1FD0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DEB5725467F34108_OFFSET UNITYSDK_OFFSET(0x11BF0EC0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DED4CCF46ACC00F8_OFFSET UNITYSDK_OFFSET(0x11BF00B0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DF90A361DB556F36_OFFSET UNITYSDK_OFFSET(0x11BF1170)
#define CLASS_1_14613881B5AE6CE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BF2530)

inline static constexpr unsigned int Class_1_14613881B5AE6CE2_TypeDefinitionIndex = 52111;

class Class_1_14613881B5AE6CE2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5180);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_Field_1_12()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5188);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_3()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5190);
	}
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5198);
	}
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51A0);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_4()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityType>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51B0);
	}
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51B8);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_5()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51C0);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::ProfileCounter*>*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::ProfileCounter*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51C8);
	}
	static ::System::Comparison_1<::RPG::ProfileCounter*>** StaticGet_Field_1_10()
	{
		return (::System::Comparison_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51D0);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_2()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x51D8);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x2AA0);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x2AA4);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x2AA8);
	}
	// static const ::System::Int32 Field_1_13 = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DED4CCF46ACC00F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DED4CCF46ACC00F8_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DEB5725467F34108(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DEB5725467F34108_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_19798F449A07F371(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_19798F449A07F371_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_561370910B6940D2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_561370910B6940D2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_DF90A361DB556F36(::RPG::GameCore::EntityType a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DF90A361DB556F36_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_3C31B0557213ABF3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_3C31B0557213ABF3_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_3432C1AC45306F95(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_3432C1AC45306F95_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_440EF5F3B9D7FA9F(::RPG::ProfileCounter* a1, ::RPG::ProfileCounter* a2)
	{
		return ((::System::Int32(*)(::RPG::ProfileCounter*, ::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_440EF5F3B9D7FA9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_19FB5FBEA9EA66CD_OFFSET))();
	}

	static ::System::Int32 Method_1_DB841484E2856C2A(::RPG::GameCore::EntityType a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DB841484E2856C2A_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_677FE239F17E3706(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_677FE239F17E3706_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6DC9045D9C3368A7(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_6DC9045D9C3368A7_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_6D93101E4CE10A96_OFFSET))();
	}

	static ::RPG::GameCore::EntityManager* Method_1_232047DCB11AC4DC()
	{
		return ((::RPG::GameCore::EntityManager*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_232047DCB11AC4DC_OFFSET))();
	}
};
