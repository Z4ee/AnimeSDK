#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_C50F5982E5600913;
class Class_1_E7DB216A3FFF6C29;
namespace RPG::Client { class BaseLobby; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E988B1C7B26759C7_METHOD_1_04C9CA75C7CD64AE_OFFSET UNITYSDK_OFFSET(0x1370A150)
#define CLASS_1_E988B1C7B26759C7_METHOD_1_39CC46C8B3049A76_OFFSET UNITYSDK_OFFSET(0x1370A040)
#define CLASS_1_E988B1C7B26759C7_METHOD_1_4373BBE89904705E_OFFSET UNITYSDK_OFFSET(0x13709E20)
#define CLASS_1_E988B1C7B26759C7_METHOD_1_9E97E57C6B331FC6_OFFSET UNITYSDK_OFFSET(0x1370A400)

inline static constexpr unsigned int Class_1_E988B1C7B26759C7_TypeDefinitionIndex = 61491;

class Class_1_E988B1C7B26759C7 : public ::System::Object
{
public:
	static ::RPG::Client::BaseLobby* Method_1_4373BBE89904705E(::Enum_3_A35B38E5F9115A76_2 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_E7DB216A3FFF6C29* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_A35B38E5F9115A76_2, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_4373BBE89904705E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::BaseLobby* Method_1_39CC46C8B3049A76(::Enum_3_A35B38E5F9115A76_2 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_E7DB216A3FFF6C29* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_A35B38E5F9115A76_2, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_39CC46C8B3049A76_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_0C36FD2A7876DF8E* Method_1_04C9CA75C7CD64AE(::Enum_3_A35B38E5F9115A76_2 a1, ::System::Object* a2)
	{
		return ((::Class_1_0C36FD2A7876DF8E*(*)(::Enum_3_A35B38E5F9115A76_2, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_04C9CA75C7CD64AE_OFFSET))(a1, a2);
	}

	static ::Class_1_E7DB216A3FFF6C29* Method_1_9E97E57C6B331FC6(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::Class_1_E7DB216A3FFF6C29*(*)(::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_9E97E57C6B331FC6_OFFSET))(a1);
	}
};
