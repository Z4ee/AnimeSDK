#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7EDC5CD53A870E73_METHOD_1_4DE4F47E504EB9CD_OFFSET UNITYSDK_OFFSET(0x11AD9760)
#define CLASS_1_7EDC5CD53A870E73_METHOD_1_7F8518DE9BC47039_OFFSET UNITYSDK_OFFSET(0x11AD9A30)
#define CLASS_1_7EDC5CD53A870E73_METHOD_1_878229E508C8F1EB_OFFSET UNITYSDK_OFFSET(0x11AD9710)
#define CLASS_1_7EDC5CD53A870E73_METHOD_1_8AADCB469BEBBAEF_OFFSET UNITYSDK_OFFSET(0x11AD96C0)
#define CLASS_1_7EDC5CD53A870E73__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD96B0)

inline static constexpr unsigned int Class_1_7EDC5CD53A870E73_TypeDefinitionIndex = 50354;

class Class_1_7EDC5CD53A870E73 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAudioBasePath** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigAudioBasePath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EDC5CD53A870E73_TypeDefinitionIndex)->GetStaticField(0x31AA0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigAudioBasePath* Method_1_8AADCB469BEBBAEF()
	{
		return ((::MoleMole::Config::ConfigAudioBasePath*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_METHOD_1_8AADCB469BEBBAEF_OFFSET))();
	}

	static ::System::Void Method_1_878229E508C8F1EB(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_METHOD_1_878229E508C8F1EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F8518DE9BC47039(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_METHOD_1_7F8518DE9BC47039_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4DE4F47E504EB9CD(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7EDC5CD53A870E73_METHOD_1_4DE4F47E504EB9CD_OFFSET))(a1, a2);
	}
};
