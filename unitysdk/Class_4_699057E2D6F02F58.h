#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_699057E2D6F02F58_METHOD_4_0CF581A7F8BEAE54_OFFSET UNITYSDK_OFFSET(0xFF76120)
#define CLASS_4_699057E2D6F02F58__CTOR_OFFSET UNITYSDK_OFFSET(0xFF761D0)

inline static constexpr unsigned int Class_4_699057E2D6F02F58_TypeDefinitionIndex = 71231;

class Class_4_699057E2D6F02F58 : public ::Class_3_B3B7AD2B34783116
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_699057E2D6F02F58__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_0CF581A7F8BEAE54()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_699057E2D6F02F58_METHOD_4_0CF581A7F8BEAE54_OFFSET))(this);
	}
};
