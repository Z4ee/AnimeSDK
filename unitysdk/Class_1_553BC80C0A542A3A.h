#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_BF85135934DD45B5;
class Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31;
namespace Foundation { class IDownloader; }
namespace MoleMole { class ConfigPreIFixTask; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_553BC80C0A542A3A_METHOD_1_0EE1F7F192FB3754_OFFSET UNITYSDK_OFFSET(0x129369A0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12936AC0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_1_OFFSET UNITYSDK_OFFSET(0x12937880)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x12937420)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x12936F30)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_31143A0662DEF638_OFFSET UNITYSDK_OFFSET(0x12936730)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x129367E0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x129370B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_5782059EA974C4A1_OFFSET UNITYSDK_OFFSET(0x12936CF0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_6D124B18AA198145_OFFSET UNITYSDK_OFFSET(0x12937A80)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x12936B40)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x129364D0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_7FC311FD18620062_OFFSET UNITYSDK_OFFSET(0x12936A30)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_1_OFFSET UNITYSDK_OFFSET(0x12937620)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0x12937220)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_9920914C270B8F42_OFFSET UNITYSDK_OFFSET(0x12936430)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x129376B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C72B4C4F620F109E_OFFSET UNITYSDK_OFFSET(0x12936C20)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_1_OFFSET UNITYSDK_OFFSET(0x12937860)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x12936B20)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_CD0EBD8380A9769C_OFFSET UNITYSDK_OFFSET(0x129372B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x12936210)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_1_OFFSET UNITYSDK_OFFSET(0x12937360)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_2_OFFSET UNITYSDK_OFFSET(0x129373B0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x12936C90)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x129370A0)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0x12937140)
#define CLASS_1_553BC80C0A542A3A_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x12936340)
#define CLASS_1_553BC80C0A542A3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x129361B0)
#define CLASS_1_553BC80C0A542A3A__CTOR_OFFSET UNITYSDK_OFFSET(0x129361A0)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_TypeDefinitionIndex = 72007;

class Class_1_553BC80C0A542A3A : public ::System::Object
{
public:
	static ::Class_1_553BC80C0A542A3A** StaticGet_Field_1_0()
	{
		return (::Class_1_553BC80C0A542A3A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x30D40);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x30D48);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_553BC80C0A542A3A_TypeDefinitionIndex)->GetStaticField(0x30D50);
	}
	::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* Field_1_8; // 0x10
	::Class_1_BF85135934DD45B5* Field_1_10; // 0x18
	::Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31* Field_1_12; // 0x20
	::Foundation::IDownloader* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x30
	::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* Field_1_9; // 0x38
	::MoleMole::ConfigPreIFixTask* Field_1_4; // 0x40
	::System::Action_1<::System::Boolean>* Field_1_7; // 0x48
	::System::Boolean Field_1_6; // 0x50
	::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A Field_1_5; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	static ::System::Void Method_1_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_705FFC79B57F4953_OFFSET))(a1);
	}

	::System::Void Method_1_31143A0662DEF638(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::ConfigPreIFixTask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::ConfigPreIFixTask*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_31143A0662DEF638_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0EE1F7F192FB3754()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_0EE1F7F192FB3754_OFFSET))(this);
	}

	::System::Void Method_1_7FC311FD18620062(::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_7FC311FD18620062_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_1_C72B4C4F620F109E(::System::Action_1<::System::Boolean>* a1, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* a2, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>*, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C72B4C4F620F109E_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Void Method_1_5782059EA974C4A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_5782059EA974C4A1_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_9920914C270B8F42(::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_9920914C270B8F42_OFFSET))(this, a1, a2);
	}

	::Class_1_BF85135934DD45B5* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_BF85135934DD45B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_3491513EEDE20EE3_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_F0BD65B017F2AC0B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_896FA9EAB4C29FB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_CD0EBD8380A9769C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_CD0EBD8380A9769C_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68_2(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_D8299432719B3C68_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_896FA9EAB4C29FB4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_896FA9EAB4C29FB4_1_OFFSET))(this);
	}

	static ::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_B768DA94E3FD91D9_OFFSET))();
	}

	::System::Void Method_1_C9312916D3A31323_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_C9312916D3A31323_1_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_2566AD459572DFC3_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	static ::System::Void Method_1_6D124B18AA198145(::System::Action_1<::System::Boolean>* a1, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>* a2, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::Action_1<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A>*, ::System::Action_2<::Class_1_553BC80C0A542A3A_Enum_3_5E751D094E8EF69A, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_METHOD_1_6D124B18AA198145_OFFSET))(a1, a2, a3);
	}
};
