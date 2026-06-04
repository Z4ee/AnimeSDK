#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_603;
class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8B0718C71B99C2CA_METHOD_1_58B4CA76C59D5517_OFFSET UNITYSDK_OFFSET(0xA97A7E0)
#define CLASS_1_8B0718C71B99C2CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA97AA30)

inline static constexpr unsigned int Class_1_8B0718C71B99C2CA_TypeDefinitionIndex = 56051;

class Class_1_8B0718C71B99C2CA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_603*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_603*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B0718C71B99C2CA_TypeDefinitionIndex)->GetStaticField(0x68550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B0718C71B99C2CA__CCTOR_OFFSET))();
	}

	static ::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_58B4CA76C59D5517(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_8B0718C71B99C2CA_METHOD_1_58B4CA76C59D5517_OFFSET))(a1);
	}
};
