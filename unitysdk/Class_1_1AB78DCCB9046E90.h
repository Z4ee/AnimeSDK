#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AB78DCCB9046E90_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x14059FD0)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x14059540)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x1405A330)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_56F6CDFA4ECA6BD0_OFFSET UNITYSDK_OFFSET(0x1405A1C0)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x140597E0)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_A9C245AF1EEC949A_OFFSET UNITYSDK_OFFSET(0x14059830)
#define CLASS_1_1AB78DCCB9046E90_METHOD_1_B52CCE1789698BA7_OFFSET UNITYSDK_OFFSET(0x1405A420)
#define CLASS_1_1AB78DCCB9046E90__CCTOR_OFFSET UNITYSDK_OFFSET(0x14059530)
#define CLASS_1_1AB78DCCB9046E90__CTOR_OFFSET UNITYSDK_OFFSET(0x14059520)

inline static constexpr unsigned int Class_1_1AB78DCCB9046E90_TypeDefinitionIndex = 84104;

class Class_1_1AB78DCCB9046E90 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1AB78DCCB9046E90_TypeDefinitionIndex)->GetStaticField(0x46260);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1AB78DCCB9046E90_TypeDefinitionIndex)->GetStaticField(0x46268);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_A9C245AF1EEC949A(::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_A9C245AF1EEC949A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_56F6CDFA4ECA6BD0(::MoleMole::Config::WeatherType a1, ::MoleMole::Config::TimePeriodType a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_56F6CDFA4ECA6BD0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_18982EFD3B740683_OFFSET))();
	}

	static ::MoleMole::Config::WeatherType Method_1_B52CCE1789698BA7(::System::String* a1)
	{
		return ((::MoleMole::Config::WeatherType(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_METHOD_1_B52CCE1789698BA7_OFFSET))(a1);
	}
};
