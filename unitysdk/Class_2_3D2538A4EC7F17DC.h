#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class FollowWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_3D2538A4EC7F17DC_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA6EE8C0)
#define CLASS_2_3D2538A4EC7F17DC_METHOD_2_56C3F320BB57A3F7_OFFSET UNITYSDK_OFFSET(0xA6EE690)
#define CLASS_2_3D2538A4EC7F17DC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA6EEAD0)
#define CLASS_2_3D2538A4EC7F17DC_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xA6EE9E0)
#define CLASS_2_3D2538A4EC7F17DC__CTOR_OFFSET UNITYSDK_OFFSET(0xA6EE630)

inline static constexpr unsigned int Class_2_3D2538A4EC7F17DC_TypeDefinitionIndex = 51170;

class Class_2_3D2538A4EC7F17DC : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::FollowWithDetectProjectileData* Field_2_0; // 0x48
	::UnityEngine::Collider* Field_2_1; // 0x50

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3D2538A4EC7F17DC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56C3F320BB57A3F7(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3D2538A4EC7F17DC_METHOD_2_56C3F320BB57A3F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D2538A4EC7F17DC_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D2538A4EC7F17DC_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D2538A4EC7F17DC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
