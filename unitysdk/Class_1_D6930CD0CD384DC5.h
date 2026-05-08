#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D6930CD0CD384DC5_METHOD_1_0CC1EA4372265873_OFFSET UNITYSDK_OFFSET(0x10910300)
#define CLASS_1_D6930CD0CD384DC5_METHOD_1_299DA8FF1D721BED_OFFSET UNITYSDK_OFFSET(0x10910580)
#define CLASS_1_D6930CD0CD384DC5_METHOD_1_D65F18E3B0189BE5_OFFSET UNITYSDK_OFFSET(0x1090FEC0)
#define CLASS_1_D6930CD0CD384DC5_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x10910470)
#define CLASS_1_D6930CD0CD384DC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1090FE20)

inline static constexpr unsigned int Class_1_D6930CD0CD384DC5_TypeDefinitionIndex = 45246;

class Class_1_D6930CD0CD384DC5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6930CD0CD384DC5_TypeDefinitionIndex)->GetStaticField(0x2C1C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_D65F18E3B0189BE5(::System::String* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Single(*)(::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_METHOD_1_D65F18E3B0189BE5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_299DA8FF1D721BED(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_METHOD_1_299DA8FF1D721BED_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_0CC1EA4372265873(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_METHOD_1_0CC1EA4372265873_OFFSET))(a1);
	}
};
