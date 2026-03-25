#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetPacket; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_F0B596C95F12CAB2_METHOD_1_548073936DB8C3FF_OFFSET UNITYSDK_OFFSET(0x11566A70)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_7545003592901ACE_OFFSET UNITYSDK_OFFSET(0x115665E0)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_A18722CA272785A8_OFFSET UNITYSDK_OFFSET(0x11566EE0)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_AA76C364DB506F02_OFFSET UNITYSDK_OFFSET(0x11566340)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_C155B49BEB149D60_OFFSET UNITYSDK_OFFSET(0x11566940)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_CE1F719EF4F1C62F_OFFSET UNITYSDK_OFFSET(0x11567330)
#define CLASS_1_F0B596C95F12CAB2_METHOD_1_EB5193D3968F32BB_OFFSET UNITYSDK_OFFSET(0x11566500)

inline static constexpr unsigned int Class_1_F0B596C95F12CAB2_TypeDefinitionIndex = 56720;

class Class_1_F0B596C95F12CAB2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>* Method_1_AA76C364DB506F02()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_AA76C364DB506F02_OFFSET))();
	}

	static ::System::Boolean Method_1_EB5193D3968F32BB(::System::UInt16 a1, ::RPG::Client::NetPacket* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* a3)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::RPG::Client::NetPacket*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_EB5193D3968F32BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7545003592901ACE(::System::Object* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* a2)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_7545003592901ACE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CE1F719EF4F1C62F(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_CE1F719EF4F1C62F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C155B49BEB149D60(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_C155B49BEB149D60_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_548073936DB8C3FF(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_548073936DB8C3FF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A18722CA272785A8(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F0B596C95F12CAB2_METHOD_1_A18722CA272785A8_OFFSET))(a1, a2);
	}
};
