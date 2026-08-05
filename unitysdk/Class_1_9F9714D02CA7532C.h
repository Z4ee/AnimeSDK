#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9F9714D02CA7532C_METHOD_1_2BD5D416BE8183AF_OFFSET UNITYSDK_OFFSET(0x16429B90)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x16429970)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_E0990BFB432B1B69_OFFSET UNITYSDK_OFFSET(0x16429920)
#define CLASS_1_9F9714D02CA7532C_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x164297F0)

inline static constexpr unsigned int Class_1_9F9714D02CA7532C_TypeDefinitionIndex = 87931;

class Class_1_9F9714D02CA7532C : public ::System::Object
{
public:
	static ::ConfigTextureColor** StaticGet_Field_1_0()
	{
		return (::ConfigTextureColor**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F9714D02CA7532C_TypeDefinitionIndex)->GetStaticField(0x415A0);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E0990BFB432B1B69(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_E0990BFB432B1B69_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::ConfigTextureColor* Method_1_2BD5D416BE8183AF()
	{
		return ((::ConfigTextureColor*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_METHOD_1_2BD5D416BE8183AF_OFFSET))();
	}
};
