#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22DFC3839E157DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8D6B0)

inline static constexpr unsigned int Class_1_22DFC3839E157DF2_TypeDefinitionIndex = 58755;

class Class_1_22DFC3839E157DF2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22DFC3839E157DF2__CTOR_OFFSET))(this);
	}
};
