#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2EF8DEBC271BC4FB_METHOD_1_0719AE4E9602FC80_OFFSET UNITYSDK_OFFSET(0x138FA840)
#define CLASS_1_2EF8DEBC271BC4FB_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x138FA620)
#define CLASS_1_2EF8DEBC271BC4FB_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x138FA530)

inline static constexpr unsigned int Class_1_2EF8DEBC271BC4FB_TypeDefinitionIndex = 69573;

class Class_1_2EF8DEBC271BC4FB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLineMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigZipLineMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF8DEBC271BC4FB_TypeDefinitionIndex)->GetStaticField(0x38910);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigZipLineMap* Method_1_0719AE4E9602FC80()
	{
		return ((::MoleMole::Config::ConfigZipLineMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_METHOD_1_0719AE4E9602FC80_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
