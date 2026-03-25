#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_1A263F5BDD91B9DA;
class Class_1_35379441886C7D20;
class Class_1_3A7B270FE0BE90AE;
namespace RPG::Client { class BaseLobby; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E988B1C7B26759C7_METHOD_1_39CC46C8B3049A76_OFFSET UNITYSDK_OFFSET(0x8C8E510)
#define CLASS_1_E988B1C7B26759C7_METHOD_1_4373BBE89904705E_OFFSET UNITYSDK_OFFSET(0x8C8E300)
#define CLASS_1_E988B1C7B26759C7_METHOD_1_790AAF053B33251D_OFFSET UNITYSDK_OFFSET(0x8C8E620)

inline static constexpr unsigned int Class_1_E988B1C7B26759C7_TypeDefinitionIndex = 53413;

class Class_1_E988B1C7B26759C7 : public ::System::Object
{
public:
	static ::RPG::Client::BaseLobby* Method_1_4373BBE89904705E(::Enum_3_F80BFD5B986D5503_3 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* a3, ::System::UInt32 a4, ::Class_1_1A263F5BDD91B9DA* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_F80BFD5B986D5503_3, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*, ::System::UInt32, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_4373BBE89904705E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::BaseLobby* Method_1_39CC46C8B3049A76(::Enum_3_F80BFD5B986D5503_3 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* a3, ::System::UInt32 a4, ::Class_1_1A263F5BDD91B9DA* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_F80BFD5B986D5503_3, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*, ::System::UInt32, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_39CC46C8B3049A76_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_35379441886C7D20* Method_1_790AAF053B33251D(::Enum_3_F80BFD5B986D5503_3 a1, ::System::Object* a2)
	{
		return ((::Class_1_35379441886C7D20*(*)(::Enum_3_F80BFD5B986D5503_3, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E988B1C7B26759C7_METHOD_1_790AAF053B33251D_OFFSET))(a1, a2);
	}
};
