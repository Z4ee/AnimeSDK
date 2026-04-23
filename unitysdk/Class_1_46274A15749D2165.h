#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveDestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_46274A15749D2165_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x11E62600)
#define CLASS_1_46274A15749D2165_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11E62210)
#define CLASS_1_46274A15749D2165_METHOD_1_31F139006510646B_OFFSET UNITYSDK_OFFSET(0x11E61820)
#define CLASS_1_46274A15749D2165_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x11E62270)
#define CLASS_1_46274A15749D2165_METHOD_1_4470079B241DC9AC_OFFSET UNITYSDK_OFFSET(0x11E61DA0)
#define CLASS_1_46274A15749D2165_METHOD_1_49A6B4B3D5617E03_OFFSET UNITYSDK_OFFSET(0x11E622E0)
#define CLASS_1_46274A15749D2165_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11E62500)
#define CLASS_1_46274A15749D2165_METHOD_1_6080732EBB757F55_OFFSET UNITYSDK_OFFSET(0x11E62130)
#define CLASS_1_46274A15749D2165_METHOD_1_74266F3AC4A9D5C1_OFFSET UNITYSDK_OFFSET(0x11E61F70)
#define CLASS_1_46274A15749D2165_METHOD_1_A3CB7D3409843D89_OFFSET UNITYSDK_OFFSET(0x11E61780)
#define CLASS_1_46274A15749D2165_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x11E624B0)
#define CLASS_1_46274A15749D2165_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11E625F0)
#define CLASS_1_46274A15749D2165_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x11E62610)
#define CLASS_1_46274A15749D2165__CTOR_OFFSET UNITYSDK_OFFSET(0x11E62620)

inline static constexpr unsigned int Class_1_46274A15749D2165_TypeDefinitionIndex = 52585;

class Class_1_46274A15749D2165 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_4; // 0x18
	::RPG::GameCore::AdventureMoveDestType _Type_k__BackingField; // 0x20
	::UnityEngine::Vector3 Field_1_6; // 0x24
	::System::Single Field_1_1; // 0x30
	::System::Single Field_1_2; // 0x34
	::UnityEngine::Vector3 Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A3CB7D3409843D89(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_A3CB7D3409843D89_OFFSET))(this, a1);
	}

	::System::Void Method_1_74266F3AC4A9D5C1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_74266F3AC4A9D5C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6080732EBB757F55(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_6080732EBB757F55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_31F139006510646B(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_31F139006510646B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_49A6B4B3D5617E03(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_49A6B4B3D5617E03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_4470079B241DC9AC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_4470079B241DC9AC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::AdventureMoveDestType get_Type()
	{
		return ((::RPG::GameCore::AdventureMoveDestType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AdventureMoveDestType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureMoveDestType))((::PBYTE)hIl2Cpp + CLASS_1_46274A15749D2165_SET_TYPE_OFFSET))(this, value);
	}
};
