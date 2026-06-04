#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A5C7D9C380EAC2CB_METHOD_1_E6EC55CD94CE07EF_OFFSET UNITYSDK_OFFSET(0xA48BD90)
#define CLASS_1_A5C7D9C380EAC2CB__CTOR_OFFSET UNITYSDK_OFFSET(0xA48BF10)

inline static constexpr unsigned int Class_1_A5C7D9C380EAC2CB_TypeDefinitionIndex = 44498;

class Class_1_A5C7D9C380EAC2CB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7D9C380EAC2CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6EC55CD94CE07EF(::Class_1_A5C7D9C380EAC2CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5C7D9C380EAC2CB*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7D9C380EAC2CB_METHOD_1_E6EC55CD94CE07EF_OFFSET))(this, a1);
	}
};
