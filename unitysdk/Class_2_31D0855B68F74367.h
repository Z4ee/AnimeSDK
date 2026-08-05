#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

class Class_1_F356FCA60006484C;
class Class_2_AD2DCA69807FE773;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define CLASS_2_31D0855B68F74367_METHOD_2_4A34971154D82A93_OFFSET UNITYSDK_OFFSET(0x17801E90)
#define CLASS_2_31D0855B68F74367_METHOD_2_A2CC1DE06D50FC58_OFFSET UNITYSDK_OFFSET(0x17802210)
#define CLASS_2_31D0855B68F74367__CTOR_OFFSET UNITYSDK_OFFSET(0x17802450)

inline static constexpr unsigned int Class_2_31D0855B68F74367_TypeDefinitionIndex = 84373;

class Class_2_31D0855B68F74367 : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D0855B68F74367__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_4A34971154D82A93(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_31D0855B68F74367_METHOD_2_4A34971154D82A93_OFFSET))(this, a1);
	}

	static ::Class_2_AD2DCA69807FE773* Method_2_A2CC1DE06D50FC58(::Foundation::Unreal::FTransform3D a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
	{
		return ((::Class_2_AD2DCA69807FE773*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + CLASS_2_31D0855B68F74367_METHOD_2_A2CC1DE06D50FC58_OFFSET))(a1, a2);
	}
};
