#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGround; }
namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0F42A885256B3519_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x15905E70)
#define CLASS_1_0F42A885256B3519_METHOD_1_4F368A66897B4A5E_OFFSET UNITYSDK_OFFSET(0x15906170)
#define CLASS_1_0F42A885256B3519_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x15906080)
#define CLASS_1_0F42A885256B3519__CTOR_OFFSET UNITYSDK_OFFSET(0x15905E60)

inline static constexpr unsigned int Class_1_0F42A885256B3519_TypeDefinitionIndex = 55484;

class Class_1_0F42A885256B3519 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigShootingGroundScriptableObject** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigShootingGroundScriptableObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F42A885256B3519_TypeDefinitionIndex)->GetStaticField(0x42050);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigShootingGround* Method_1_4F368A66897B4A5E(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigShootingGround*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_METHOD_1_4F368A66897B4A5E_OFFSET))(a1);
	}
};
