#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_138243AAB005D137_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x91020F0)
#define CLASS_2_138243AAB005D137_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x9101910)
#define CLASS_2_138243AAB005D137_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9102390)
#define CLASS_2_138243AAB005D137_METHOD_2_5FCF0DF625E63BE6_OFFSET UNITYSDK_OFFSET(0x9101D10)
#define CLASS_2_138243AAB005D137_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x9102360)
#define CLASS_2_138243AAB005D137_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x9102210)
#define CLASS_2_138243AAB005D137_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x91017E0)
#define CLASS_2_138243AAB005D137__CTOR_OFFSET UNITYSDK_OFFSET(0x9101790)

inline static constexpr unsigned int Class_2_138243AAB005D137_TypeDefinitionIndex = 50500;

class Class_2_138243AAB005D137 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BGCurveProjectileData* Field_2_0; // 0x48
	::RPG::GameCore::MonoProjectileBGCurve* Field_2_1; // 0x50
	::System::Boolean Field_2_4; // 0x58
	::UnityEngine::Vector3 Field_2_3; // 0x5C
	::System::Single Field_2_5; // 0x68
	::UnityEngine::Vector3 Field_2_2; // 0x6C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_5FCF0DF625E63BE6(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_5FCF0DF625E63BE6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138243AAB005D137_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
