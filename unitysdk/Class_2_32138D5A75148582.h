#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_51.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

class Class_1_F356FCA60006484C;
class Class_2_AD2DCA69807FE773;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define CLASS_2_32138D5A75148582_METHOD_2_421C7CE67990A045_OFFSET UNITYSDK_OFFSET(0x14E750E0)
#define CLASS_2_32138D5A75148582_METHOD_2_D6DE998AFE2FBD13_OFFSET UNITYSDK_OFFSET(0x14E754A0)
#define CLASS_2_32138D5A75148582__CTOR_OFFSET UNITYSDK_OFFSET(0x14E75580)

inline static constexpr unsigned int Class_2_32138D5A75148582_TypeDefinitionIndex = 48827;

class Class_2_32138D5A75148582 : public ::Class_1_43BD383C98B4C0C5_51
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32138D5A75148582__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_421C7CE67990A045(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_32138D5A75148582_METHOD_2_421C7CE67990A045_OFFSET))(this, a1);
	}

	static ::Class_2_AD2DCA69807FE773* Method_2_D6DE998AFE2FBD13(::Foundation::Unreal::FTransform3D a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
	{
		return ((::Class_2_AD2DCA69807FE773*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + CLASS_2_32138D5A75148582_METHOD_2_D6DE998AFE2FBD13_OFFSET))(a1, a2);
	}
};
