#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_495;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37399E0EB1AF196F_CLASS_1_8C333BC50B0013E4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E17820)

inline static constexpr unsigned int Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4_TypeDefinitionIndex = 52108;

class Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_495*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_CLASS_1_8C333BC50B0013E4__CTOR_OFFSET))(this);
	}
};
