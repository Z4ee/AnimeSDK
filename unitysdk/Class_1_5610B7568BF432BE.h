#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5610B7568BF432BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1104B9D0)

inline static constexpr unsigned int Class_1_5610B7568BF432BE_TypeDefinitionIndex = 55288;

class Class_1_5610B7568BF432BE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79*>* InteractDataList; // 0x10
	::System::UInt32 Version; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5610B7568BF432BE__CTOR_OFFSET))(this);
	}
};
