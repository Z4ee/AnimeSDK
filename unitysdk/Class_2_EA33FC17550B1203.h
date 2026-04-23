#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_433253813D49C6BD.h"
#include "unitysdk/Struct_2_B22A8BD8ED65C725.h"
#include "unitysdk/Struct_2_D0FCEBDAF981FB27.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1035;
class Class_0_16E4307DCC419505_1036;
class Class_1_56FF45D7B2C55655;
class Class_1_D09F4FAB9C64FEFA;
class Class_2_9EE43DA5D75B2674;
class Class_2_B3A24056F40872AE;
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class TriggerShapeController_2; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EA33FC17550B1203_METHOD_2_15317D4E99065267_OFFSET UNITYSDK_OFFSET(0xAD31390)
#define CLASS_2_EA33FC17550B1203_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xAD319D0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_310C90A59855501B_OFFSET UNITYSDK_OFFSET(0xAD32220)
#define CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_1_OFFSET UNITYSDK_OFFSET(0xAD31F00)
#define CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_2_OFFSET UNITYSDK_OFFSET(0xAD320B0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xAD31AA0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_3DC96812F324FE20_OFFSET UNITYSDK_OFFSET(0xAD31530)
#define CLASS_2_EA33FC17550B1203_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0xAD32060)
#define CLASS_2_EA33FC17550B1203_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xAD31C00)
#define CLASS_2_EA33FC17550B1203_METHOD_2_5B1E204FC3227E4D_OFFSET UNITYSDK_OFFSET(0xAD32E50)
#define CLASS_2_EA33FC17550B1203_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xAD31D70)
#define CLASS_2_EA33FC17550B1203_METHOD_2_7F4A14CD1C67620C_OFFSET UNITYSDK_OFFSET(0xAD316B0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_91B1D0230882FAE3_OFFSET UNITYSDK_OFFSET(0xAD32490)
#define CLASS_2_EA33FC17550B1203_METHOD_2_A1D11836899B50E3_OFFSET UNITYSDK_OFFSET(0xAD31210)
#define CLASS_2_EA33FC17550B1203_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0xAD32DC0)
#define CLASS_2_EA33FC17550B1203__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD32F40)
#define CLASS_2_EA33FC17550B1203__CTOR_OFFSET UNITYSDK_OFFSET(0xAD31890)

inline static constexpr unsigned int Class_2_EA33FC17550B1203_TypeDefinitionIndex = 68061;

class Class_2_EA33FC17550B1203 : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA33FC17550B1203_TypeDefinitionIndex)->GetStaticField(0x10750);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_D0FCEBDAF981FB27>*>* Field_2_4; // 0x18
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_433253813D49C6BD, ::Class_2_B3A24056F40872AE*>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1035*>* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_D0FCEBDAF981FB27>*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1036*>* Field_2_5; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_6; // 0x40
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_B22A8BD8ED65C725, ::Class_2_9EE43DA5D75B2674*>* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203__CCTOR_OFFSET))();
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_A1D11836899B50E3(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_A1D11836899B50E3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_15317D4E99065267(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action_1<::System::Int32>* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_15317D4E99065267_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_3DC96812F324FE20(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_3DC96812F324FE20_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_7F4A14CD1C67620C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action_1<::System::Int32>* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_7F4A14CD1C67620C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_1_OFFSET))(this);
	}

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_3B258437A86233AC_2_OFFSET))(this);
	}

	::System::Void Method_2_310C90A59855501B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_310C90A59855501B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_91B1D0230882FAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_91B1D0230882FAE3_OFFSET))(this);
	}

	::System::Void Method_2_CC75865AF9CCA3AF(::Class_1_D09F4FAB9C64FEFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D09F4FAB9C64FEFA*))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	static ::System::Int64 Method_2_5B1E204FC3227E4D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_5B1E204FC3227E4D_OFFSET))(a1, a2, a3);
	}
};
