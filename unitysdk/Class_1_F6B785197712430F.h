#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F6B785197712430F_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x13069D50)
#define CLASS_1_F6B785197712430F_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x13069E40)
#define CLASS_1_F6B785197712430F_METHOD_1_9C25CF5A7B0B9AEF_OFFSET UNITYSDK_OFFSET(0x13069B40)
#define CLASS_1_F6B785197712430F_METHOD_1_B77EEDF8ECF69212_OFFSET UNITYSDK_OFFSET(0x1306A020)
#define CLASS_1_F6B785197712430F_METHOD_1_C22B31761DC46521_OFFSET UNITYSDK_OFFSET(0x1306A010)

inline static constexpr unsigned int Class_1_F6B785197712430F_TypeDefinitionIndex = 72957;

class Class_1_F6B785197712430F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeleportSelections** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTeleportSelections**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6B785197712430F_TypeDefinitionIndex)->GetStaticField(0x35520);
	}

	static ::MoleMole::Config::ConfigTeleportSelection3C* Method_1_9C25CF5A7B0B9AEF(::MoleMole::Config::TeleportSelectionType a1)
	{
		return ((::MoleMole::Config::ConfigTeleportSelection3C*(*)(::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_9C25CF5A7B0B9AEF_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C22B31761DC46521(::MoleMole::Config::ConfigTeleportSelections* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_C22B31761DC46521_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigTeleportSelections* Method_1_B77EEDF8ECF69212()
	{
		return ((::MoleMole::Config::ConfigTeleportSelections*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_METHOD_1_B77EEDF8ECF69212_OFFSET))();
	}
};
