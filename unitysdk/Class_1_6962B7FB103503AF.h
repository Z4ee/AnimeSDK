#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_10.h"
#include "unitysdk/System/Object.h"

class Class_1_72CC10A34CA99622;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6962B7FB103503AF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B57E10)

inline static constexpr unsigned int Class_1_6962B7FB103503AF_TypeDefinitionIndex = 59343;

class Class_1_6962B7FB103503AF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_72CC10A34CA99622*>* Field_1_0; // 0x10
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_10>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6962B7FB103503AF__CTOR_OFFSET))(this);
	}
};
