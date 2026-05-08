#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace MoleMole::Config { class ConfigDynamicAccessorySkinningData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_49105453559132CC_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x117CB470)
#define CLASS_1_49105453559132CC_METHOD_1_118EE1B3DE2A372B_OFFSET UNITYSDK_OFFSET(0x117CB730)
#define CLASS_1_49105453559132CC_METHOD_1_607AA080DC8C5641_OFFSET UNITYSDK_OFFSET(0x117CB720)
#define CLASS_1_49105453559132CC_METHOD_1_6BA091C99ADD53BA_OFFSET UNITYSDK_OFFSET(0x117CB820)
#define CLASS_1_49105453559132CC_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x117CB560)

inline static constexpr unsigned int Class_1_49105453559132CC_TypeDefinitionIndex = 82276;

class Class_1_49105453559132CC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigDynamicAccessories** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigDynamicAccessories**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49105453559132CC_TypeDefinitionIndex)->GetStaticField(0x47E50);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigDynamicAccessories* Method_1_607AA080DC8C5641()
	{
		return ((::MoleMole::Config::ConfigDynamicAccessories*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_607AA080DC8C5641_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigDynamicAccessorySkinningData* Method_1_118EE1B3DE2A372B(::System::Int32 a1)
	{
		return ((::MoleMole::Config::ConfigDynamicAccessorySkinningData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_118EE1B3DE2A372B_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BA091C99ADD53BA(::MoleMole::Config::ConfigDynamicAccessories* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_6BA091C99ADD53BA_OFFSET))(a1);
	}
};
