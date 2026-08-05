#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0669FA8E7DDEB6AA_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x194E7360)
#define CLASS_1_0669FA8E7DDEB6AA_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x194E7450)
#define CLASS_1_0669FA8E7DDEB6AA_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x194E6DC0)
#define CLASS_1_0669FA8E7DDEB6AA_METHOD_1_E2AC930692F52341_OFFSET UNITYSDK_OFFSET(0x194E71F0)

inline static constexpr unsigned int Class_1_0669FA8E7DDEB6AA_TypeDefinitionIndex = 56973;

class Class_1_0669FA8E7DDEB6AA : public ::System::Object
{
public:
	static ::MoleMole::ConfigUISound** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUISound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0669FA8E7DDEB6AA_TypeDefinitionIndex)->GetStaticField(0x38B50);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUISound* Method_1_E2AC930692F52341()
	{
		return ((::MoleMole::ConfigUISound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_METHOD_1_E2AC930692F52341_OFFSET))();
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};
