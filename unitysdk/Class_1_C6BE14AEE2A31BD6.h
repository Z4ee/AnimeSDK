#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_502;
class Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6BE14AEE2A31BD6_METHOD_1_A374847F6BA149F4_OFFSET UNITYSDK_OFFSET(0x87AC630)
#define CLASS_1_C6BE14AEE2A31BD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x87AC8B0)

inline static constexpr unsigned int Class_1_C6BE14AEE2A31BD6_TypeDefinitionIndex = 48568;

class Class_1_C6BE14AEE2A31BD6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_502*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_502*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6BE14AEE2A31BD6_TypeDefinitionIndex)->GetStaticField(0x34DF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6BE14AEE2A31BD6__CCTOR_OFFSET))();
	}

	static ::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5* Method_1_A374847F6BA149F4(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5*(*)(::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_C6BE14AEE2A31BD6_METHOD_1_A374847F6BA149F4_OFFSET))(a1);
	}
};
