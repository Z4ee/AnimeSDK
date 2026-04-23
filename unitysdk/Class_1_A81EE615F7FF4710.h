#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_470C0D8ED6D7F159_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A81EE615F7FF4710__CTOR_OFFSET UNITYSDK_OFFSET(0x17B00050)

inline static constexpr unsigned int Class_1_A81EE615F7FF4710_TypeDefinitionIndex = 37691;

class Class_1_A81EE615F7FF4710 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_470C0D8ED6D7F159_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81EE615F7FF4710__CTOR_OFFSET))(this);
	}
};
