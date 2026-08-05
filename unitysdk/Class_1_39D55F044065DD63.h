#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostEffects; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_39D55F044065DD63_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x12D3E5E0)
#define CLASS_1_39D55F044065DD63_METHOD_1_0FA4E7E02CBCC1A7_OFFSET UNITYSDK_OFFSET(0x12D3E810)
#define CLASS_1_39D55F044065DD63_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x12D3E4F0)
#define CLASS_1_39D55F044065DD63_METHOD_1_B4B2DAB24E5EED10_OFFSET UNITYSDK_OFFSET(0x12D3E400)

inline static constexpr unsigned int Class_1_39D55F044065DD63_TypeDefinitionIndex = 50210;

class Class_1_39D55F044065DD63 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_39D55F044065DD63_TypeDefinitionIndex)->GetStaticField(0x327E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_39D55F044065DD63_TypeDefinitionIndex)->GetStaticField(0x327E8);
	}
	static ::MoleMole::Config::ConfigGhostEffects** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigGhostEffects**)Il2CppClass::FromTypeDefinitionIndex(Class_1_39D55F044065DD63_TypeDefinitionIndex)->GetStaticField(0x327F0);
	}

	static ::MoleMole::Config::ConfigGhostMove* Method_1_B4B2DAB24E5EED10(::MoleMole::Config::CharacterSize a1)
	{
		return ((::MoleMole::Config::ConfigGhostMove*(*)(::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_METHOD_1_B4B2DAB24E5EED10_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigGhostEffect* Method_1_0FA4E7E02CBCC1A7(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigGhostEffect*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_39D55F044065DD63_METHOD_1_0FA4E7E02CBCC1A7_OFFSET))(a1);
	}
};
