#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_17FA9C0BB542BFA8.h"
#include "unitysdk/Struct_2_520121F0B7FF172F.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_920;
class Class_0_16E4307DCC419505_921;
class Class_1_56FF45D7B2C55655;
class Class_1_D09F4FAB9C64FEFA;
class Class_2_9EE43DA5D75B2674;
class Class_2_B3A24056F40872AE;
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class TriggerShapeController_2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x11655620)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_310C90A59855501B_OFFSET UNITYSDK_OFFSET(0x11655E70)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_1_OFFSET UNITYSDK_OFFSET(0x11655B50)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_2_OFFSET UNITYSDK_OFFSET(0x11655D00)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x116556F0)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x11655CB0)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x11655850)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_5B1E204FC3227E4D_OFFSET UNITYSDK_OFFSET(0x116569E0)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x116559C0)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_91B1D0230882FAE3_OFFSET UNITYSDK_OFFSET(0x116560E0)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_B450091C793D57A9_OFFSET UNITYSDK_OFFSET(0x11655310)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_C6C58FDABA90EC31_OFFSET UNITYSDK_OFFSET(0x11655140)
#define CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0x11656950)
#define CLASS_2_C9D4C3CD6B28C0AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11656AD0)
#define CLASS_2_C9D4C3CD6B28C0AF__CTOR_OFFSET UNITYSDK_OFFSET(0x116554E0)

inline static constexpr unsigned int Class_2_C9D4C3CD6B28C0AF_TypeDefinitionIndex = 60623;

class Class_2_C9D4C3CD6B28C0AF : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9D4C3CD6B28C0AF_TypeDefinitionIndex)->GetStaticField(0x12640);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_920*>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_921*>* Field_2_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_6; // 0x30
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_17FA9C0BB542BFA8, ::Class_2_B3A24056F40872AE*>* Field_2_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* Field_2_3; // 0x40
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_520121F0B7FF172F, ::Class_2_9EE43DA5D75B2674*>* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF__CCTOR_OFFSET))();
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_C6C58FDABA90EC31(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_C6C58FDABA90EC31_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_D09F4FAB9C64FEFA* Method_2_B450091C793D57A9(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_B450091C793D57A9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_1_OFFSET))(this);
	}

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_3B258437A86233AC_2_OFFSET))(this);
	}

	::System::Void Method_2_310C90A59855501B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_310C90A59855501B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_91B1D0230882FAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_91B1D0230882FAE3_OFFSET))(this);
	}

	::System::Void Method_2_CC75865AF9CCA3AF(::Class_1_D09F4FAB9C64FEFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D09F4FAB9C64FEFA*))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	static ::System::Int64 Method_2_5B1E204FC3227E4D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C9D4C3CD6B28C0AF_METHOD_2_5B1E204FC3227E4D_OFFSET))(a1, a2, a3);
	}
};
