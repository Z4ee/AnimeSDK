#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_49105453559132CC_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x185DD9A0)
#define CLASS_1_49105453559132CC_METHOD_1_3DFDF70DB9099E80_OFFSET UNITYSDK_OFFSET(0x185DDC50)
#define CLASS_1_49105453559132CC_METHOD_1_607AA080DC8C5641_OFFSET UNITYSDK_OFFSET(0x185DD980)
#define CLASS_1_49105453559132CC_METHOD_1_6BA091C99ADD53BA_OFFSET UNITYSDK_OFFSET(0x185DD990)
#define CLASS_1_49105453559132CC_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x185DDA90)

inline static constexpr unsigned int Class_1_49105453559132CC_TypeDefinitionIndex = 64581;

class Class_1_49105453559132CC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigDynamicAccessories** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigDynamicAccessories**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49105453559132CC_TypeDefinitionIndex)->GetStaticField(0x47A40);
	}

	static ::MoleMole::Config::ConfigDynamicAccessories* Method_1_607AA080DC8C5641()
	{
		return ((::MoleMole::Config::ConfigDynamicAccessories*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_607AA080DC8C5641_OFFSET))();
	}

	static ::System::Void Method_1_6BA091C99ADD53BA(::MoleMole::Config::ConfigDynamicAccessories* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_6BA091C99ADD53BA_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigDynamicAccessoryData* Method_1_3DFDF70DB9099E80(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigDynamicAccessoryData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_3DFDF70DB9099E80_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}
};
