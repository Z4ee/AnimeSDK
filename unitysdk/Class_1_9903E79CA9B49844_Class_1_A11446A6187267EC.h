#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapResource; }
namespace MoleMole { class ConfigRichtapResource_Resource; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9903E79CA9B49844_CLASS_1_A11446A6187267EC_METHOD_1_3F311BC66E33BABC_OFFSET UNITYSDK_OFFSET(0xF64A060)
#define CLASS_1_9903E79CA9B49844_CLASS_1_A11446A6187267EC__CTOR_OFFSET UNITYSDK_OFFSET(0xF64A050)

inline static constexpr unsigned int Class_1_9903E79CA9B49844_Class_1_A11446A6187267EC_TypeDefinitionIndex = 41887;

class Class_1_9903E79CA9B49844_Class_1_A11446A6187267EC : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::MoleMole::ConfigRichtapResource*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::ConfigRichtapResource_Resource*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_A11446A6187267EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F311BC66E33BABC(::MoleMole::ConfigRichtapResource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapResource*))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_A11446A6187267EC_METHOD_1_3F311BC66E33BABC_OFFSET))(this, a1);
	}
};
