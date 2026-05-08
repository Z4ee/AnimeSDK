#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_23396669E9674E71_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x138EE3C0)
#define CLASS_1_23396669E9674E71_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x138EE4B0)
#define CLASS_1_23396669E9674E71_METHOD_1_93D196F07E525D1C_OFFSET UNITYSDK_OFFSET(0x138EE680)
#define CLASS_1_23396669E9674E71_METHOD_1_A9455A632056812F_OFFSET UNITYSDK_OFFSET(0x138EE670)
#define CLASS_1_23396669E9674E71_METHOD_1_F5235F374F0EB89C_OFFSET UNITYSDK_OFFSET(0x138EE860)

inline static constexpr unsigned int Class_1_23396669E9674E71_TypeDefinitionIndex = 45714;

class Class_1_23396669E9674E71 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEntityAttackEffectNames** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigEntityAttackEffectNames**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23396669E9674E71_TypeDefinitionIndex)->GetStaticField(0x40FE0);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A9455A632056812F(::MoleMole::Config::ConfigEntityAttackEffectNames* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_A9455A632056812F_OFFSET))(a1);
	}

	static ::System::String* Method_1_93D196F07E525D1C(::System::String* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::String*(*)(::System::String*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_93D196F07E525D1C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityAttackEffectNames* Method_1_F5235F374F0EB89C()
	{
		return ((::MoleMole::Config::ConfigEntityAttackEffectNames*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_F5235F374F0EB89C_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}
};
