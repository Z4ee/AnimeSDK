#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_96DC956462FF7C4A_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x127A7890)
#define CLASS_1_96DC956462FF7C4A_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x127A7AA0)
#define CLASS_1_96DC956462FF7C4A_METHOD_1_C72388BCAABFC53E_OFFSET UNITYSDK_OFFSET(0x127A7B90)

inline static constexpr unsigned int Class_1_96DC956462FF7C4A_TypeDefinitionIndex = 65989;

class Class_1_96DC956462FF7C4A : public ::System::Object
{
public:
	static ::MoleMole::Config::GamifiedPropConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::GamifiedPropConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96DC956462FF7C4A_TypeDefinitionIndex)->GetStaticField(0x33450);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::GamifiedPropConfig* Method_1_C72388BCAABFC53E()
	{
		return ((::MoleMole::Config::GamifiedPropConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_METHOD_1_C72388BCAABFC53E_OFFSET))();
	}
};
