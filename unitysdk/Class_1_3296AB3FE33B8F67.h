#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1101;
class Class_0_16E4307DCC419505_1102;
class Class_1_96755BD61CBCF580;
class Class_1_96755BD61CBCF580_1;
class Class_1_CA217ABF4E3B4F3F;
class Class_1_ED4078FD2D52700C;
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3296AB3FE33B8F67_METHOD_1_22BC55C609FDA193_1_OFFSET UNITYSDK_OFFSET(0x16EA7350)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_22BC55C609FDA193_OFFSET UNITYSDK_OFFSET(0x16EA6C10)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_2428689E42B9BF9F_OFFSET UNITYSDK_OFFSET(0x16EA7E10)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_2D9A571C1250C68E_OFFSET UNITYSDK_OFFSET(0x16EA67A0)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16EA7AB0)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_422AB2AF5B8C2DDD_OFFSET UNITYSDK_OFFSET(0x16EA7B70)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_51E57F165EBF5E29_OFFSET UNITYSDK_OFFSET(0x16EA6690)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_5745C775C4B95BE1_OFFSET UNITYSDK_OFFSET(0x16EA8230)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_621C5C880AB95ED4_OFFSET UNITYSDK_OFFSET(0x16EA92E0)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_7E0BA3BA48D3AD9F_OFFSET UNITYSDK_OFFSET(0x16EAA290)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_8209CD22AEC0587E_OFFSET UNITYSDK_OFFSET(0x16EA86E0)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_8DAD66D3B054788B_OFFSET UNITYSDK_OFFSET(0x16EA7BD0)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_C4C51197A5DA4BF8_OFFSET UNITYSDK_OFFSET(0x16EA8990)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_C70732B391500FE6_OFFSET UNITYSDK_OFFSET(0x16EA9990)
#define CLASS_1_3296AB3FE33B8F67_METHOD_1_C9D0B753CBD895D7_OFFSET UNITYSDK_OFFSET(0x16EA6BA0)
#define CLASS_1_3296AB3FE33B8F67__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EAAC90)
#define CLASS_1_3296AB3FE33B8F67__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAAC80)

inline static constexpr unsigned int Class_1_3296AB3FE33B8F67_TypeDefinitionIndex = 69784;

class Class_1_3296AB3FE33B8F67 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_ED4078FD2D52700C*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_ED4078FD2D52700C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3296AB3FE33B8F67_TypeDefinitionIndex)->GetStaticField(0x64260);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_51E57F165EBF5E29(::System::Object* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>* a2, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_51E57F165EBF5E29_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C9D0B753CBD895D7(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_C9D0B753CBD895D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Boolean Method_1_422AB2AF5B8C2DDD(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_422AB2AF5B8C2DDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D9A571C1250C68E(::System::Object* a1, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1101*>* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1102*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1101*>*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_2D9A571C1250C68E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2428689E42B9BF9F(::System::Object* a1, ::Class_1_96755BD61CBCF580* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1101*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1101*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_2428689E42B9BF9F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5745C775C4B95BE1(::System::Object* a1, ::Class_1_96755BD61CBCF580_1* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1102*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580_1*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_5745C775C4B95BE1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8209CD22AEC0587E(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_8209CD22AEC0587E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C4C51197A5DA4BF8(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_C4C51197A5DA4BF8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_621C5C880AB95ED4(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_621C5C880AB95ED4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8DAD66D3B054788B(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_8DAD66D3B054788B_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_1101* Method_1_C70732B391500FE6(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
	{
		return ((::Class_0_16E4307DCC419505_1101*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_C70732B391500FE6_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_1102* Method_1_7E0BA3BA48D3AD9F(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
	{
		return ((::Class_0_16E4307DCC419505_1102*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_7E0BA3BA48D3AD9F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_22BC55C609FDA193(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1101*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_22BC55C609FDA193_OFFSET))(a1);
	}

	static ::System::Void Method_1_22BC55C609FDA193_1(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67_METHOD_1_22BC55C609FDA193_1_OFFSET))(a1);
	}
};
