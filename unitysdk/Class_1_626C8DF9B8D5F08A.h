#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_626C8DF9B8D5F08A_METHOD_1_06488126D6AE20CA_OFFSET UNITYSDK_OFFSET(0x12759BA0)
#define CLASS_1_626C8DF9B8D5F08A_METHOD_1_346D260AD27D5266_OFFSET UNITYSDK_OFFSET(0x12759D70)
#define CLASS_1_626C8DF9B8D5F08A_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x12759BB0)
#define CLASS_1_626C8DF9B8D5F08A_METHOD_1_9E815F7B26C84192_OFFSET UNITYSDK_OFFSET(0x12759EA0)
#define CLASS_1_626C8DF9B8D5F08A_METHOD_1_E219F1C507C73B91_OFFSET UNITYSDK_OFFSET(0x12759EF0)

inline static constexpr unsigned int Class_1_626C8DF9B8D5F08A_TypeDefinitionIndex = 60867;

class Class_1_626C8DF9B8D5F08A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLevelResultPerforms** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigLevelResultPerforms**)Il2CppClass::FromTypeDefinitionIndex(Class_1_626C8DF9B8D5F08A_TypeDefinitionIndex)->GetStaticField(0x34220);
	}

	static ::System::Void Method_1_06488126D6AE20CA(::MoleMole::Config::ConfigLevelResultPerforms* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigLevelResultPerforms*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_METHOD_1_06488126D6AE20CA_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_346D260AD27D5266(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_METHOD_1_346D260AD27D5266_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_9E815F7B26C84192(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_METHOD_1_9E815F7B26C84192_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigLevelResultPerforms* Method_1_E219F1C507C73B91()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)())((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_METHOD_1_E219F1C507C73B91_OFFSET))();
	}
};
