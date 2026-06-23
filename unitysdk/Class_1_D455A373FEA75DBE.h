#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D455A373FEA75DBE_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x127E78B0)
#define CLASS_1_D455A373FEA75DBE_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x127E7AC0)
#define CLASS_1_D455A373FEA75DBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x127E78A0)

inline static constexpr unsigned int Class_1_D455A373FEA75DBE_TypeDefinitionIndex = 74060;

class Class_1_D455A373FEA75DBE : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelShootGameConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::LevelShootGameConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D455A373FEA75DBE_TypeDefinitionIndex)->GetStaticField(0x341E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
