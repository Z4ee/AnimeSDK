#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace MoleMole { class ConfigTimelineCamera_CameraCurveGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1766E310)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_59803B2D40C464EA_OFFSET UNITYSDK_OFFSET(0x1766E350)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_5FD757F67AD684FB_OFFSET UNITYSDK_OFFSET(0x1766E1C0)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_6A4652BA93A6FC2A_OFFSET UNITYSDK_OFFSET(0x1766DAC0)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_99FC1F8B003E43D4_OFFSET UNITYSDK_OFFSET(0x1766DF80)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_FAB6F47F103312BD_OFFSET UNITYSDK_OFFSET(0x1766E150)
#define CLASS_1_7DE823F9B40DDB7F_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x1766DE90)
#define CLASS_1_7DE823F9B40DDB7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1766DAB0)

inline static constexpr unsigned int Class_1_7DE823F9B40DDB7F_TypeDefinitionIndex = 81529;

class Class_1_7DE823F9B40DDB7F : public ::System::Object
{
public:
	static ::MoleMole::ConfigTimelineCamera** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigTimelineCamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DE823F9B40DDB7F_TypeDefinitionIndex)->GetStaticField(0x3B500);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTimelineCamera_CameraCurveGroup*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTimelineCamera_CameraCurveGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DE823F9B40DDB7F_TypeDefinitionIndex)->GetStaticField(0x3B508);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_6A4652BA93A6FC2A(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_6A4652BA93A6FC2A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_99FC1F8B003E43D4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_99FC1F8B003E43D4_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* Method_1_FAB6F47F103312BD(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_FAB6F47F103312BD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_59803B2D40C464EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_59803B2D40C464EA_OFFSET))(a1);
	}

	static ::MoleMole::ConfigTimelineCamera_CameraCurveGroup* Method_1_5FD757F67AD684FB(::System::String* a1)
	{
		return ((::MoleMole::ConfigTimelineCamera_CameraCurveGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DE823F9B40DDB7F_METHOD_1_5FD757F67AD684FB_OFFSET))(a1);
	}
};
