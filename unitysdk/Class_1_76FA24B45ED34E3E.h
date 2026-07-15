#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class Class_1_118030333D39EAFB;
class Class_1_8654F1DF226F6DE3_2;
class Class_1_E489C7176E109E87_2;
namespace RPG::Client { class GameReplayModel; }
namespace RPG::Client { class ReplayCustomData; }
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define CLASS_1_76FA24B45ED34E3E_METHOD_1_0B134F65EFEE4E15_OFFSET UNITYSDK_OFFSET(0x174EDA20)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_183DE883C67DD68D_OFFSET UNITYSDK_OFFSET(0x174EC410)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_23464A04B1943C97_OFFSET UNITYSDK_OFFSET(0x174EC280)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_28AFAEC4765E39BF_OFFSET UNITYSDK_OFFSET(0x174ECB30)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_3997443D0F28D5B5_OFFSET UNITYSDK_OFFSET(0x174EC480)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_5141FF725A01C5DE_OFFSET UNITYSDK_OFFSET(0x174ECE40)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_7346FA9DBDA45AA0_OFFSET UNITYSDK_OFFSET(0x174EDF10)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x174EC2D0)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_7F38458FF9B86F33_OFFSET UNITYSDK_OFFSET(0x174ECAB0)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x174EBDA0)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_9E7D729D79B06B2C_OFFSET UNITYSDK_OFFSET(0x174EC650)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_A1505032A8BFA665_OFFSET UNITYSDK_OFFSET(0x174ED410)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_B497F5728C36D462_OFFSET UNITYSDK_OFFSET(0x174EE6B0)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x174EBE20)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x174ED9E0)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_DAA953ED232F3753_OFFSET UNITYSDK_OFFSET(0x174EDF80)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_F92D63BB4A18BB31_OFFSET UNITYSDK_OFFSET(0x174EE320)
#define CLASS_1_76FA24B45ED34E3E_METHOD_1_FA0C1E2D751C7A4F_OFFSET UNITYSDK_OFFSET(0x174ED5E0)
#define CLASS_1_76FA24B45ED34E3E__CTOR_OFFSET UNITYSDK_OFFSET(0x174EBE10)

inline static constexpr unsigned int Class_1_76FA24B45ED34E3E_TypeDefinitionIndex = 58248;

class Class_1_76FA24B45ED34E3E : public ::System::Object
{
public:
	static ::Class_1_76FA24B45ED34E3E** StaticGet_Field_1_0()
	{
		return (::Class_1_76FA24B45ED34E3E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76FA24B45ED34E3E_TypeDefinitionIndex)->GetStaticField(0x10650);
	}
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E__CTOR_OFFSET))(this);
	}

	static ::Class_1_76FA24B45ED34E3E* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_76FA24B45ED34E3E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Boolean Method_1_3997443D0F28D5B5(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_3997443D0F28D5B5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_775B6D644F07B554_OFFSET))();
	}

	static ::System::String* Method_1_7F38458FF9B86F33()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_7F38458FF9B86F33_OFFSET))();
	}

	static ::System::String* Method_1_23464A04B1943C97()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_23464A04B1943C97_OFFSET))();
	}

	::System::Void Method_1_28AFAEC4765E39BF(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_28AFAEC4765E39BF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::GameReplayModel* Method_1_9E7D729D79B06B2C(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::RPG::Client::GameReplayModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_9E7D729D79B06B2C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5141FF725A01C5DE(::System::UInt32 a1, ::Class_1_118030333D39EAFB* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_118030333D39EAFB*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_5141FF725A01C5DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_183DE883C67DD68D(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_183DE883C67DD68D_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_A1505032A8BFA665(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_A1505032A8BFA665_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA0C1E2D751C7A4F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_FA0C1E2D751C7A4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0B134F65EFEE4E15(::Il2CppArray<::System::Byte>* a1, ::Class_1_E489C7176E109E87_2* a2, ::System::Action_1<::System::Net::HttpStatusCode>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Class_1_E489C7176E109E87_2*, ::System::Action_1<::System::Net::HttpStatusCode>*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_0B134F65EFEE4E15_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7346FA9DBDA45AA0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_7346FA9DBDA45AA0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_DAA953ED232F3753(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_DAA953ED232F3753_OFFSET))(this, a1);
	}

	::System::Void Method_1_F92D63BB4A18BB31(::System::Int32 a1, ::Class_1_8654F1DF226F6DE3_2* a2, ::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_8654F1DF226F6DE3_2*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_8654F1DF226F6DE3_2*, ::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_8654F1DF226F6DE3_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_F92D63BB4A18BB31_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B497F5728C36D462(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_METHOD_1_B497F5728C36D462_OFFSET))(this, a1);
	}
};
