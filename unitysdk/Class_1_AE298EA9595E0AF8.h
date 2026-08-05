#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83A6E28E3C46AB40;
class Class_2_31D0855B68F74367;
class Class_2_6968552DB576BBB3;
class Class_4_AC6D98911872E0CE;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_AE298EA9595E0AF8_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x101A7960)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_35E9AC4FC60F049D_OFFSET UNITYSDK_OFFSET(0x101A70D0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_4A43CE1304B21F00_OFFSET UNITYSDK_OFFSET(0x101A68C0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_5A09421E202116CD_OFFSET UNITYSDK_OFFSET(0x101A79E0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x101A8570)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_7F7379F8817AA054_OFFSET UNITYSDK_OFFSET(0x101A71F0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x101A85D0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_A63F67655DCFA313_OFFSET UNITYSDK_OFFSET(0x101A7EB0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_D8C1AF43B5839F41_OFFSET UNITYSDK_OFFSET(0x101A7730)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x101A6F70)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x101A70C0)
#define CLASS_1_AE298EA9595E0AF8_METHOD_1_EF9DE33CA43F82BC_OFFSET UNITYSDK_OFFSET(0x101A7CE0)
#define CLASS_1_AE298EA9595E0AF8__CTOR_OFFSET UNITYSDK_OFFSET(0x101A6800)

inline static constexpr unsigned int Class_1_AE298EA9595E0AF8_TypeDefinitionIndex = 61996;

class Class_1_AE298EA9595E0AF8 : public ::System::Object
{
public:
	::Class_4_AC6D98911872E0CE* Field_1_5; // 0x10
	::Class_1_83A6E28E3C46AB40* Field_1_6; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* Field_1_1; // 0x20
	::Class_2_6968552DB576BBB3* Field_1_0; // 0x28
	::Class_2_31D0855B68F74367* Field_1_7; // 0x30
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_4; // 0x38
	::System::Action* Field_1_10; // 0x40
	::System::Action* Field_1_9; // 0x48
	::Foundation::Coroutine::CoroutineHandle Field_1_8; // 0x50
	::System::Boolean Field_1_15; // 0x54
	::System::Boolean Field_1_11; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_4A43CE1304B21F00(::System::String* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_4A43CE1304B21F00_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Void Method_1_35E9AC4FC60F049D(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_35E9AC4FC60F049D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F7379F8817AA054(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_7F7379F8817AA054_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Single Method_1_D8C1AF43B5839F41(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_D8C1AF43B5839F41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Boolean Method_1_5A09421E202116CD(::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_5A09421E202116CD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EF9DE33CA43F82BC(::System::Single a1, ::MoleMole::UICameraAtom& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom&))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_EF9DE33CA43F82BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A63F67655DCFA313(::MoleMole::ConfigAnimationCurveGroup* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::MoleMole::UICameraAtom>* a4, ::System::Single a5, ::System::Action* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::UICameraAtom>*, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_A63F67655DCFA313_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_7A4DA50406643EC6_OFFSET))(this);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE298EA9595E0AF8_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}
};
