#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetPacket; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_8566B514487EDEC5_METHOD_1_0895E40595AA43D5_OFFSET UNITYSDK_OFFSET(0x1691BEE0)
#define CLASS_1_8566B514487EDEC5_METHOD_1_23A1B43C4C61D5BC_OFFSET UNITYSDK_OFFSET(0x1691C310)
#define CLASS_1_8566B514487EDEC5_METHOD_1_2D6F869DE72D5B9A_OFFSET UNITYSDK_OFFSET(0x1691CD50)
#define CLASS_1_8566B514487EDEC5_METHOD_1_585B0D457CC614E1_OFFSET UNITYSDK_OFFSET(0x1691BDE0)
#define CLASS_1_8566B514487EDEC5_METHOD_1_A750B2EA0895F0D9_OFFSET UNITYSDK_OFFSET(0x1691BAE0)
#define CLASS_1_8566B514487EDEC5_METHOD_1_C4C51197A5DA4BF8_OFFSET UNITYSDK_OFFSET(0x1691C580)
#define CLASS_1_8566B514487EDEC5_METHOD_1_CE1F719EF4F1C62F_OFFSET UNITYSDK_OFFSET(0x1691D4D0)

inline static constexpr unsigned int Class_1_8566B514487EDEC5_TypeDefinitionIndex = 69363;

class Class_1_8566B514487EDEC5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>* Method_1_A750B2EA0895F0D9()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_A750B2EA0895F0D9_OFFSET))();
	}

	static ::System::Boolean Method_1_585B0D457CC614E1(::System::UInt16 a1, ::RPG::Client::NetPacket* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* a3)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::RPG::Client::NetPacket*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_585B0D457CC614E1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0895E40595AA43D5(::System::Object* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* a2)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_0895E40595AA43D5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CE1F719EF4F1C62F(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_CE1F719EF4F1C62F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_23A1B43C4C61D5BC(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_23A1B43C4C61D5BC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C4C51197A5DA4BF8(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_C4C51197A5DA4BF8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2D6F869DE72D5B9A(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8566B514487EDEC5_METHOD_1_2D6F869DE72D5B9A_OFFSET))(a1, a2);
	}
};
