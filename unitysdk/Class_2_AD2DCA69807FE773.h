#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }

#define CLASS_2_AD2DCA69807FE773_METHOD_2_3D91C4D19A6FCF55_OFFSET UNITYSDK_OFFSET(0x11B014D0)
#define CLASS_2_AD2DCA69807FE773_METHOD_2_49BE5DA27852175E_OFFSET UNITYSDK_OFFSET(0x11B018A0)
#define CLASS_2_AD2DCA69807FE773__CTOR_OFFSET UNITYSDK_OFFSET(0x11B01350)

inline static constexpr unsigned int Class_2_AD2DCA69807FE773_TypeDefinitionIndex = 85243;

class Class_2_AD2DCA69807FE773 : public ::Class_1_5BD3EF046502B972
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	::MoleMole::ConfigAnimationCurveGroup* Field_2_0; // 0x20
	::UnityEngine::Vector3 Field_2_7; // 0x28
	::System::Boolean Field_2_2; // 0x34
	::System::Single Field_2_5; // 0x38
	::Foundation::Unreal::FTransform3D Field_2_1; // 0x3C
	::UnityEngine::Vector3 Field_2_6; // 0x64

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::Foundation::Unreal::FTransform3D a3, ::MoleMole::ConfigAnimationCurveGroup* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD2DCA69807FE773__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::UICameraAtom Method_2_3D91C4D19A6FCF55(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_AD2DCA69807FE773_METHOD_2_3D91C4D19A6FCF55_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UICameraAtom Method_2_49BE5DA27852175E(::System::Single a1)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD2DCA69807FE773_METHOD_2_49BE5DA27852175E_OFFSET))(this, a1);
	}
};
