#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveDestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E4FA7133ABAF3904_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xF424C00)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_053942551B871792_OFFSET UNITYSDK_OFFSET(0xF424590)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_0B0BD69D9C629EA9_OFFSET UNITYSDK_OFFSET(0xF424B00)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xF424810)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xF424870)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_44BBC94B0FE09175_OFFSET UNITYSDK_OFFSET(0xF4243C0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_49A6B4B3D5617E03_OFFSET UNITYSDK_OFFSET(0xF4248E0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_6080732EBB757F55_OFFSET UNITYSDK_OFFSET(0xF424730)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_B50306B9D936219E_OFFSET UNITYSDK_OFFSET(0xF423D00)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xF424AB0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF424BF0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_F5D172C7F3F82F80_OFFSET UNITYSDK_OFFSET(0xF423DA0)
#define CLASS_1_E4FA7133ABAF3904_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xF424C10)
#define CLASS_1_E4FA7133ABAF3904__CTOR_OFFSET UNITYSDK_OFFSET(0xF424C20)

inline static constexpr unsigned int Class_1_E4FA7133ABAF3904_TypeDefinitionIndex = 57221;

class Class_1_E4FA7133ABAF3904 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
	::UnityEngine::Transform* CDHNMGNPODA; // 0x18
	::System::Single HJLOCBLHNLD; // 0x20
	::System::Single JFAGECNFHJL; // 0x24
	::RPG::GameCore::AdventureMoveDestType _Type_k__BackingField; // 0x28
	::UnityEngine::Vector3 HOFJHLNNGNM; // 0x2C
	::UnityEngine::Vector3 IHPLKKJLPBJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B50306B9D936219E(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_B50306B9D936219E_OFFSET))(this, a1);
	}

	::System::Void Method_1_053942551B871792(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_053942551B871792_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6080732EBB757F55(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_6080732EBB757F55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F5D172C7F3F82F80(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_F5D172C7F3F82F80_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_49A6B4B3D5617E03(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_49A6B4B3D5617E03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_0B0BD69D9C629EA9(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_0B0BD69D9C629EA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_44BBC94B0FE09175(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_44BBC94B0FE09175_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::AdventureMoveDestType get_Type()
	{
		return ((::RPG::GameCore::AdventureMoveDestType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AdventureMoveDestType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureMoveDestType))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_SET_TYPE_OFFSET))(this, a1);
	}
};
