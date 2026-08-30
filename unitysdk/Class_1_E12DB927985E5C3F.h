#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_290F18DE0106AF33;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E12DB927985E5C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C425180)

inline static constexpr unsigned int Class_1_E12DB927985E5C3F_TypeDefinitionIndex = 40354;

class Class_1_E12DB927985E5C3F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_290F18DE0106AF33*>*>* GBPHKOAFCNE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E12DB927985E5C3F__CTOR_OFFSET))(this);
	}
};
