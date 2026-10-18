#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87598940223885B0_eFileLoaderPosType.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_DA980A1B385339D6_METHOD_1_045A4450DAD06392_OFFSET UNITYSDK_OFFSET(0x1EBD89B0)
#define CLASS_1_DA980A1B385339D6_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x1EBD8740)
#define CLASS_1_DA980A1B385339D6_METHOD_1_601A50F845D0F728_OFFSET UNITYSDK_OFFSET(0x1EBD88C0)
#define CLASS_1_DA980A1B385339D6_METHOD_1_9A77CE9679CCAC20_OFFSET UNITYSDK_OFFSET(0x1EBD87B0)
#define CLASS_1_DA980A1B385339D6_METHOD_1_A2B7120403F397BC_OFFSET UNITYSDK_OFFSET(0x1EBD8A20)
#define CLASS_1_DA980A1B385339D6_METHOD_1_E0C856C92FD46474_OFFSET UNITYSDK_OFFSET(0x1EBD85E0)
#define CLASS_1_DA980A1B385339D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD8A90)

inline static constexpr unsigned int Class_1_DA980A1B385339D6_TypeDefinitionIndex = 35270;

class Class_1_DA980A1B385339D6 : public ::System::Object
{
public:
	static ::System::String** StaticGet_EOOAOBGPFKC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA980A1B385339D6_TypeDefinitionIndex)->GetStaticField(0x1280);
	}
	static ::System::String** StaticGet_LCEHLLJPDBM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA980A1B385339D6_TypeDefinitionIndex)->GetStaticField(0x1288);
	}
	static ::RPG::Client::FileVisitorPosMode* StaticGet_JMCNIANAFBO()
	{
		return (::RPG::Client::FileVisitorPosMode*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA980A1B385339D6_TypeDefinitionIndex)->GetStaticField(0x730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Byte>* Method_1_E0C856C92FD46474(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_E0C856C92FD46474_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A77CE9679CCAC20(::System::String* a1, ::Class_1_87598940223885B0_eFileLoaderPosType& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_87598940223885B0_eFileLoaderPosType&))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_9A77CE9679CCAC20_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_601A50F845D0F728(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_601A50F845D0F728_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_045A4450DAD06392(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_045A4450DAD06392_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_A2B7120403F397BC(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DA980A1B385339D6_METHOD_1_A2B7120403F397BC_OFFSET))(a1, a2);
	}
};
