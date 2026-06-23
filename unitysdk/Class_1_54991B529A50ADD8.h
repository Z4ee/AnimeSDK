#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_54991B529A50ADD8_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x13C9FD70)
#define CLASS_1_54991B529A50ADD8_METHOD_1_33512A4BE655141B_OFFSET UNITYSDK_OFFSET(0x13C9FD60)
#define CLASS_1_54991B529A50ADD8_METHOD_1_4009E1B29ADD0D9B_OFFSET UNITYSDK_OFFSET(0x13C9F4B0)
#define CLASS_1_54991B529A50ADD8_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x13C9F990)
#define CLASS_1_54991B529A50ADD8_METHOD_1_8A3A62AAE5715A24_OFFSET UNITYSDK_OFFSET(0x13C9FB30)

inline static constexpr unsigned int Class_1_54991B529A50ADD8_TypeDefinitionIndex = 60870;

class Class_1_54991B529A50ADD8 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSceneSound** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSceneSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54991B529A50ADD8_TypeDefinitionIndex)->GetStaticField(0x42720);
	}

	static ::System::Void Method_1_4009E1B29ADD0D9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_METHOD_1_4009E1B29ADD0D9B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_METHOD_1_6B5EA38BAE5646C2_OFFSET))();
	}

	static ::System::String* Method_1_8A3A62AAE5715A24(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_METHOD_1_8A3A62AAE5715A24_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigSceneSound* Method_1_33512A4BE655141B()
	{
		return ((::MoleMole::Config::ConfigSceneSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_METHOD_1_33512A4BE655141B_OFFSET))();
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}
};
