#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A23478E8A9A00866_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x16C4B3E0)
#define CLASS_1_A23478E8A9A00866_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x16C4B4D0)
#define CLASS_1_A23478E8A9A00866_METHOD_1_9D51180C66B6AC8B_OFFSET UNITYSDK_OFFSET(0x16C4B690)
#define CLASS_1_A23478E8A9A00866_METHOD_1_C7D59C18089DE1D4_OFFSET UNITYSDK_OFFSET(0x16C4B8D0)
#define CLASS_1_A23478E8A9A00866_METHOD_1_D33E7B320E076FD7_OFFSET UNITYSDK_OFFSET(0x16C4B8E0)

inline static constexpr unsigned int Class_1_A23478E8A9A00866_TypeDefinitionIndex = 52085;

class Class_1_A23478E8A9A00866 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSpecialEffectHitWall** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSpecialEffectHitWall**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A23478E8A9A00866_TypeDefinitionIndex)->GetStaticField(0x451F0);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_9D51180C66B6AC8B(::System::String* a1, ::MoleMole::Config::DamageDecalData& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::DamageDecalData&))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_METHOD_1_9D51180C66B6AC8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C7D59C18089DE1D4(::MoleMole::Config::ConfigSpecialEffectHitWall* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_METHOD_1_C7D59C18089DE1D4_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigSpecialEffectHitWall* Method_1_D33E7B320E076FD7()
	{
		return ((::MoleMole::Config::ConfigSpecialEffectHitWall*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_METHOD_1_D33E7B320E076FD7_OFFSET))();
	}
};
