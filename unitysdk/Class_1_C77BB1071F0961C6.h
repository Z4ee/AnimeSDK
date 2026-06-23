#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace MoleMole::Config { class WeaponInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C77BB1071F0961C6_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x18934590)
#define CLASS_1_C77BB1071F0961C6_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x189344A0)
#define CLASS_1_C77BB1071F0961C6_METHOD_1_B6BA53A783AB6A95_OFFSET UNITYSDK_OFFSET(0x18934350)
#define CLASS_1_C77BB1071F0961C6_METHOD_1_C2485C31652066E3_OFFSET UNITYSDK_OFFSET(0x189343A0)
#define CLASS_1_C77BB1071F0961C6__CTOR_OFFSET UNITYSDK_OFFSET(0x18934340)

inline static constexpr unsigned int Class_1_C77BB1071F0961C6_TypeDefinitionIndex = 51788;

class Class_1_C77BB1071F0961C6 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIWeapon** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIWeapon**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C77BB1071F0961C6_TypeDefinitionIndex)->GetStaticField(0x47370);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigUIWeapon* Method_1_B6BA53A783AB6A95()
	{
		return ((::MoleMole::Config::ConfigUIWeapon*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_METHOD_1_B6BA53A783AB6A95_OFFSET))();
	}

	static ::MoleMole::Config::WeaponInfo* Method_1_C2485C31652066E3(::System::Int32 a1)
	{
		return ((::MoleMole::Config::WeaponInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_METHOD_1_C2485C31652066E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
