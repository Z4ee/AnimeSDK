#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_D971D8B6E2FD99DC_Class_3_A09093250D8C682A;
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_1EE0370E67DFC030_OFFSET UNITYSDK_OFFSET(0xB014F20)
#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_2BB6EBBCAB393772_OFFSET UNITYSDK_OFFSET(0xB014DE0)
#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB00DAF0)
#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_8CB7C096F6E88ACD_OFFSET UNITYSDK_OFFSET(0xB0150A0)
#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_B6F378591AB6D6B0_OFFSET UNITYSDK_OFFSET(0xB014FD0)
#define CLASS_1_D971D8B6E2FD99DC_METHOD_1_C6E054E52157389E_OFFSET UNITYSDK_OFFSET(0xB015040)
#define CLASS_1_D971D8B6E2FD99DC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB015380)

inline static constexpr unsigned int Class_1_D971D8B6E2FD99DC_TypeDefinitionIndex = 55415;

class Class_1_D971D8B6E2FD99DC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_D971D8B6E2FD99DC_Class_3_A09093250D8C682A*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_D971D8B6E2FD99DC_Class_3_A09093250D8C682A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D971D8B6E2FD99DC_TypeDefinitionIndex)->GetStaticField(0x488A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D971D8B6E2FD99DC_TypeDefinitionIndex)->GetStaticField(0x488A8);
	}
	static ::System::Collections::Generic::SortedList_2<::System::UInt16, ::System::RuntimeTypeHandle>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::SortedList_2<::System::UInt16, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D971D8B6E2FD99DC_TypeDefinitionIndex)->GetStaticField(0x488B0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D971D8B6E2FD99DC_TypeDefinitionIndex)->GetStaticField(0x488B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_5A124CAF1E48B74F_OFFSET))();
	}

	static ::System::UInt16 Method_1_1EE0370E67DFC030(::System::RuntimeTypeHandle a1)
	{
		return ((::System::UInt16(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_1EE0370E67DFC030_OFFSET))(a1);
	}

	static ::System::RuntimeTypeHandle Method_1_B6F378591AB6D6B0(::System::UInt16 a1)
	{
		return ((::System::RuntimeTypeHandle(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_B6F378591AB6D6B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C6E054E52157389E(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_C6E054E52157389E_OFFSET))(a1);
	}

	static ::System::Object* Method_1_8CB7C096F6E88ACD(::RPG::Client::NetPacket* a1, ::System::UInt32& a2)
	{
		return ((::System::Object*(*)(::RPG::Client::NetPacket*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_8CB7C096F6E88ACD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BB6EBBCAB393772(::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_1_D971D8B6E2FD99DC_METHOD_1_2BB6EBBCAB393772_OFFSET))(a1);
	}
};
