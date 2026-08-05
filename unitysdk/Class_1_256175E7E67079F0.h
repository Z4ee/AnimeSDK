#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_256175E7E67079F0_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x137669F0)
#define CLASS_1_256175E7E67079F0_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x137667B0)
#define CLASS_1_256175E7E67079F0_METHOD_1_7714A6200DEB1D19_OFFSET UNITYSDK_OFFSET(0x137669A0)
#define CLASS_1_256175E7E67079F0_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x13766800)
#define CLASS_1_256175E7E67079F0_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x13766450)
#define CLASS_1_256175E7E67079F0__CTOR_OFFSET UNITYSDK_OFFSET(0x13766440)

inline static constexpr unsigned int Class_1_256175E7E67079F0_TypeDefinitionIndex = 60979;

class Class_1_256175E7E67079F0 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectMisc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigViewObjectMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_256175E7E67079F0_TypeDefinitionIndex)->GetStaticField(0x38F40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::MoleMole::Config::ConfigViewObjectMisc* Method_1_7714A6200DEB1D19()
	{
		return ((::MoleMole::Config::ConfigViewObjectMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_7714A6200DEB1D19_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}
};
