#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4F1D452C628E12FE_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x16BF2E30)
#define CLASS_1_4F1D452C628E12FE_METHOD_1_4535CB44F51FDE8A_OFFSET UNITYSDK_OFFSET(0x16BF2CF0)
#define CLASS_1_4F1D452C628E12FE_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x16BF2D40)

inline static constexpr unsigned int Class_1_4F1D452C628E12FE_TypeDefinitionIndex = 38357;

class Class_1_4F1D452C628E12FE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBattlePhotoActivity** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigBattlePhotoActivity**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F1D452C628E12FE_TypeDefinitionIndex)->GetStaticField(0x3B840);
	}

	static ::MoleMole::Config::ConfigBattlePhotoActivity* Method_1_4535CB44F51FDE8A()
	{
		return ((::MoleMole::Config::ConfigBattlePhotoActivity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_METHOD_1_4535CB44F51FDE8A_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
