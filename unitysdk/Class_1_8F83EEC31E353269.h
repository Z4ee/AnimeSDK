#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F83EEC31E353269_METHOD_1_0ECDF0DE3873D804_OFFSET UNITYSDK_OFFSET(0x13B23220)
#define CLASS_1_8F83EEC31E353269_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x13B230F0)
#define CLASS_1_8F83EEC31E353269_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x13B22D50)
#define CLASS_1_8F83EEC31E353269_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x13B22BB0)
#define CLASS_1_8F83EEC31E353269_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x13B22DA0)
#define CLASS_1_8F83EEC31E353269__CTOR_OFFSET UNITYSDK_OFFSET(0x13B22BA0)

inline static constexpr unsigned int Class_1_8F83EEC31E353269_TypeDefinitionIndex = 38479;

class Class_1_8F83EEC31E353269 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectEntityDither** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigViewObjectEntityDither**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F83EEC31E353269_TypeDefinitionIndex)->GetStaticField(0x30590);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigViewObjectEntityDither* Method_1_0ECDF0DE3873D804()
	{
		return ((::MoleMole::Config::ConfigViewObjectEntityDither*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_0ECDF0DE3873D804_OFFSET))();
	}
};
