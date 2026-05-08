#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_98B54EE3837CBF79_METHOD_1_40B31E5F8149ED80_OFFSET UNITYSDK_OFFSET(0x108244E0)
#define CLASS_1_98B54EE3837CBF79_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x108247C0)
#define CLASS_1_98B54EE3837CBF79_METHOD_1_7A6B7122202B7A54_OFFSET UNITYSDK_OFFSET(0x10824800)
#define CLASS_1_98B54EE3837CBF79_METHOD_1_C35EF0C1A3214CA5_OFFSET UNITYSDK_OFFSET(0x10824740)
#define CLASS_1_98B54EE3837CBF79_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10824390)
#define CLASS_1_98B54EE3837CBF79_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x108243D0)
#define CLASS_1_98B54EE3837CBF79__CCTOR_OFFSET UNITYSDK_OFFSET(0x10824350)

inline static constexpr unsigned int Class_1_98B54EE3837CBF79_TypeDefinitionIndex = 63541;

class Class_1_98B54EE3837CBF79 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98B54EE3837CBF79_TypeDefinitionIndex)->GetStaticField(0x3C050);
	}
	static ::MoleMole::Config::ConfigSideScrollingLevel** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSideScrollingLevel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98B54EE3837CBF79_TypeDefinitionIndex)->GetStaticField(0x3C058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigSideScrollingLevel* Method_1_C35EF0C1A3214CA5()
	{
		return ((::MoleMole::Config::ConfigSideScrollingLevel*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_C35EF0C1A3214CA5_OFFSET))();
	}

	static ::System::Void Method_1_40B31E5F8149ED80(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_40B31E5F8149ED80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::MoleMole::Config::ConfigSideScrollingCamera* Method_1_7A6B7122202B7A54(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigSideScrollingCamera*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_METHOD_1_7A6B7122202B7A54_OFFSET))(a1);
	}
};
