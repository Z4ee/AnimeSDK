#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CCB98C808F221F2_METHOD_1_107AE0B285DCDF05_OFFSET UNITYSDK_OFFSET(0xEAA1FD0)
#define CLASS_1_9CCB98C808F221F2_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0xEAA1C00)
#define CLASS_1_9CCB98C808F221F2_METHOD_1_2E294644D1044EA9_OFFSET UNITYSDK_OFFSET(0xEAA2250)
#define CLASS_1_9CCB98C808F221F2_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0xEAA2110)
#define CLASS_1_9CCB98C808F221F2_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xEAA2200)
#define CLASS_1_9CCB98C808F221F2_METHOD_1_5B5A95363B8BF029_OFFSET UNITYSDK_OFFSET(0xEAA1E90)
#define CLASS_1_9CCB98C808F221F2__CCTOR_OFFSET UNITYSDK_OFFSET(0xEAA1BF0)
#define CLASS_1_9CCB98C808F221F2__CTOR_OFFSET UNITYSDK_OFFSET(0xEAA1BE0)

inline static constexpr unsigned int Class_1_9CCB98C808F221F2_TypeDefinitionIndex = 76268;

class Class_1_9CCB98C808F221F2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CCB98C808F221F2_TypeDefinitionIndex)->GetStaticField(0x3B100);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherEntry>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherEntry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CCB98C808F221F2_TypeDefinitionIndex)->GetStaticField(0x3B108);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5B5A95363B8BF029(::System::String* a1, ::MoleMole::DynamicOverrideWeatherEntry& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::DynamicOverrideWeatherEntry&))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_5B5A95363B8BF029_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_107AE0B285DCDF05(::System::String* a1, ::MoleMole::DynamicOverrideWeatherV2Entry& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry&))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_107AE0B285DCDF05_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_2E294644D1044EA9(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>*))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_METHOD_1_2E294644D1044EA9_OFFSET))(a1);
	}
};
