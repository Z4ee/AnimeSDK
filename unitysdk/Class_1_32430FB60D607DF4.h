#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECFFC16237241DB_1;
class Class_1_B8B7AE2DAD90AA4E;
class Class_1_CA3918258B4D86BD;
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

#define CLASS_1_32430FB60D607DF4_METHOD_1_0A315C2EE125802C_OFFSET UNITYSDK_OFFSET(0xD18C030)
#define CLASS_1_32430FB60D607DF4_METHOD_1_23464A04B1943C97_OFFSET UNITYSDK_OFFSET(0xD18A5B0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_26CBA52DD031F5E7_OFFSET UNITYSDK_OFFSET(0xD18B180)
#define CLASS_1_32430FB60D607DF4_METHOD_1_2F2D70EEBA8D5D33_OFFSET UNITYSDK_OFFSET(0xD18B760)
#define CLASS_1_32430FB60D607DF4_METHOD_1_3997443D0F28D5B5_OFFSET UNITYSDK_OFFSET(0xD18A7D0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_3AEC061B82BF5572_OFFSET UNITYSDK_OFFSET(0xD18A740)
#define CLASS_1_32430FB60D607DF4_METHOD_1_6C2389CB7168BAAF_OFFSET UNITYSDK_OFFSET(0xD18C2E0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_7346FA9DBDA45AA0_OFFSET UNITYSDK_OFFSET(0xD18BFC0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xD18A600)
#define CLASS_1_32430FB60D607DF4_METHOD_1_7B6EF3F012A71816_OFFSET UNITYSDK_OFFSET(0xD18AEE0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0xD18B980)
#define CLASS_1_32430FB60D607DF4_METHOD_1_7F38458FF9B86F33_OFFSET UNITYSDK_OFFSET(0xD18AE60)
#define CLASS_1_32430FB60D607DF4_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xD18A150)
#define CLASS_1_32430FB60D607DF4_METHOD_1_9EC9344D657332F5_OFFSET UNITYSDK_OFFSET(0xD18A9A0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_C4230C6F203E729D_OFFSET UNITYSDK_OFFSET(0xD18BBE0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0xD18A1D0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD18BBA0)
#define CLASS_1_32430FB60D607DF4_METHOD_1_D34E5856FCEDA7A8_OFFSET UNITYSDK_OFFSET(0xD18C640)
#define CLASS_1_32430FB60D607DF4__CTOR_OFFSET UNITYSDK_OFFSET(0xD18A1C0)

inline static constexpr unsigned int Class_1_32430FB60D607DF4_TypeDefinitionIndex = 49442;

class Class_1_32430FB60D607DF4 : public ::System::Object
{
public:
	static ::Class_1_32430FB60D607DF4** StaticGet_Field_1_1()
	{
		return (::Class_1_32430FB60D607DF4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32430FB60D607DF4_TypeDefinitionIndex)->GetStaticField(0x46170);
	}
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__CTOR_OFFSET))(this);
	}

	static ::Class_1_32430FB60D607DF4* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_32430FB60D607DF4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Boolean Method_1_3997443D0F28D5B5(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_3997443D0F28D5B5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_775B6D644F07B554_OFFSET))();
	}

	static ::System::String* Method_1_7F38458FF9B86F33()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_7F38458FF9B86F33_OFFSET))();
	}

	static ::System::String* Method_1_23464A04B1943C97()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_23464A04B1943C97_OFFSET))();
	}

	::System::Void Method_1_7B6EF3F012A71816(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_7B6EF3F012A71816_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::GameReplayModel* Method_1_9EC9344D657332F5(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
	{
		return ((::RPG::Client::GameReplayModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_9EC9344D657332F5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_26CBA52DD031F5E7(::System::UInt32 a1, ::Class_1_CA3918258B4D86BD* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_CA3918258B4D86BD*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_26CBA52DD031F5E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_3AEC061B82BF5572(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_3AEC061B82BF5572_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_2F2D70EEBA8D5D33(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_2F2D70EEBA8D5D33_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C4230C6F203E729D(::Il2CppArray<::System::Byte>* a1, ::Class_1_7ECFFC16237241DB_1* a2, ::System::Action_1<::System::Net::HttpStatusCode>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Class_1_7ECFFC16237241DB_1*, ::System::Action_1<::System::Net::HttpStatusCode>*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_C4230C6F203E729D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7346FA9DBDA45AA0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_7346FA9DBDA45AA0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0A315C2EE125802C(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_0A315C2EE125802C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C2389CB7168BAAF(::System::Int32 a1, ::Class_1_B8B7AE2DAD90AA4E* a2, ::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*, ::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*>*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_6C2389CB7168BAAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D34E5856FCEDA7A8(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_METHOD_1_D34E5856FCEDA7A8_OFFSET))(this, a1);
	}
};
