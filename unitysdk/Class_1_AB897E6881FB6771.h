#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AB897E6881FB6771_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x18847570)
#define CLASS_1_AB897E6881FB6771_METHOD_1_207DBCF5DD244835_OFFSET UNITYSDK_OFFSET(0x18847360)
#define CLASS_1_AB897E6881FB6771_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x188473B0)
#define CLASS_1_AB897E6881FB6771__CTOR_OFFSET UNITYSDK_OFFSET(0x18847350)

inline static constexpr unsigned int Class_1_AB897E6881FB6771_TypeDefinitionIndex = 85015;

class Class_1_AB897E6881FB6771 : public ::System::Object
{
public:
	static ::MoleMole::ConfigBuddyUISetting** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigBuddyUISetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB897E6881FB6771_TypeDefinitionIndex)->GetStaticField(0x4B8C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ConfigBuddyUISetting* Method_1_207DBCF5DD244835()
	{
		return ((::MoleMole::ConfigBuddyUISetting*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_METHOD_1_207DBCF5DD244835_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}
};
