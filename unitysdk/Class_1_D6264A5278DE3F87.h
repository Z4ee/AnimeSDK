#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D6264A5278DE3F87_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x10DCA750)
#define CLASS_1_D6264A5278DE3F87_METHOD_1_52896BC40CAD6BB2_OFFSET UNITYSDK_OFFSET(0x10DCA370)
#define CLASS_1_D6264A5278DE3F87_METHOD_1_6433DB9444956289_OFFSET UNITYSDK_OFFSET(0x10DCA840)
#define CLASS_1_D6264A5278DE3F87_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x10DCA590)
#define CLASS_1_D6264A5278DE3F87_METHOD_1_F4E24AE85AB8BAEB_OFFSET UNITYSDK_OFFSET(0x10DCA380)

inline static constexpr unsigned int Class_1_D6264A5278DE3F87_TypeDefinitionIndex = 61047;

class Class_1_D6264A5278DE3F87 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigIndicatedLights** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigIndicatedLights**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6264A5278DE3F87_TypeDefinitionIndex)->GetStaticField(0x31710);
	}

	static ::MoleMole::Config::ConfigIndicatedLights* Method_1_52896BC40CAD6BB2()
	{
		return ((::MoleMole::Config::ConfigIndicatedLights*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_METHOD_1_52896BC40CAD6BB2_OFFSET))();
	}

	static ::MoleMole::Config::ConfigIndicatedLight* Method_1_F4E24AE85AB8BAEB(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigIndicatedLight*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_METHOD_1_F4E24AE85AB8BAEB_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6433DB9444956289(::MoleMole::Config::ConfigIndicatedLights* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_METHOD_1_6433DB9444956289_OFFSET))(a1);
	}
};
