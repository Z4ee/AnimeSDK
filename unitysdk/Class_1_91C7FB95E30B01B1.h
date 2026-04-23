#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_1154;
class Class_0_16E4307DCC419505_578;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_91C7FB95E30B01B1_METHOD_1_9081199CC3400961_OFFSET UNITYSDK_OFFSET(0x11DF77A0)
#define CLASS_1_91C7FB95E30B01B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DF7A00)

inline static constexpr unsigned int Class_1_91C7FB95E30B01B1_TypeDefinitionIndex = 72521;

class Class_1_91C7FB95E30B01B1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1154*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1154*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91C7FB95E30B01B1_TypeDefinitionIndex)->GetStaticField(0x4EC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91C7FB95E30B01B1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_578* Method_1_9081199CC3400961(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_91C7FB95E30B01B1_METHOD_1_9081199CC3400961_OFFSET))(a1);
	}
};
