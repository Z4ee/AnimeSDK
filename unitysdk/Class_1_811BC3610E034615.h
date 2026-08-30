#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG::Client { class NetPacket; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_811BC3610E034615_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC471CE0)
#define CLASS_1_811BC3610E034615_METHOD_1_4849BA9D1FD778BB_OFFSET UNITYSDK_OFFSET(0xC474060)
#define CLASS_1_811BC3610E034615_METHOD_1_A774D974379F588B_OFFSET UNITYSDK_OFFSET(0xC473FC0)
#define CLASS_1_811BC3610E034615_METHOD_1_C6E054E52157389E_OFFSET UNITYSDK_OFFSET(0xC474280)
#define CLASS_1_811BC3610E034615_METHOD_1_D1F6DCF1B64C031F_OFFSET UNITYSDK_OFFSET(0xC4742E0)
#define CLASS_1_811BC3610E034615_METHOD_1_DA690EAE12488F51_OFFSET UNITYSDK_OFFSET(0xC474190)
#define CLASS_1_811BC3610E034615__CCTOR_OFFSET UNITYSDK_OFFSET(0xC474460)

inline static constexpr unsigned int Class_1_811BC3610E034615_TypeDefinitionIndex = 59436;

class Class_1_811BC3610E034615 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_MKOKMGIHECP()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_811BC3610E034615_TypeDefinitionIndex)->GetStaticField(0x433E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::System::UInt16 Method_1_A774D974379F588B(::System::RuntimeTypeHandle a1)
	{
		return ((::System::UInt16(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_A774D974379F588B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4849BA9D1FD778BB(::System::RuntimeTypeHandle a1, ::System::UInt16& a2)
	{
		return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::UInt16&))((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_4849BA9D1FD778BB_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_DA690EAE12488F51(::System::UInt16 a1)
	{
		return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_DA690EAE12488F51_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C6E054E52157389E(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_C6E054E52157389E_OFFSET))(a1);
	}

	static ::System::Object* Method_1_D1F6DCF1B64C031F(::RPG::Client::NetPacket* a1, ::System::UInt32& a2)
	{
		return ((::System::Object*(*)(::RPG::Client::NetPacket*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_811BC3610E034615_METHOD_1_D1F6DCF1B64C031F_OFFSET))(a1, a2);
	}
};
