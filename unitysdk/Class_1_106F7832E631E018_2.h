#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_106F7832E631E018_2_METHOD_1_C4102714C6C68582_OFFSET UNITYSDK_OFFSET(0x168704F0)
#define CLASS_1_106F7832E631E018_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16870390)

inline static constexpr unsigned int Class_1_106F7832E631E018_2_TypeDefinitionIndex = 58974;

class Class_1_106F7832E631E018_2 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_106F7832E631E018_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C4102714C6C68582(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_106F7832E631E018_2_METHOD_1_C4102714C6C68582_OFFSET))(this, a1, a2);
	}
};
