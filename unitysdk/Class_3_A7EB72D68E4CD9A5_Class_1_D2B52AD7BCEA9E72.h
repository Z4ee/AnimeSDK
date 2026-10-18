#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x164699D0)
#define CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1646E190)
#define CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1646E200)
#define CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_4_OFFSET UNITYSDK_OFFSET(0x16473630)
#define CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_OFFSET UNITYSDK_OFFSET(0x164735C0)

inline static constexpr unsigned int Class_3_A7EB72D68E4CD9A5_Class_1_D2B52AD7BCEA9E72_TypeDefinitionIndex = 58494;

class Class_3_A7EB72D68E4CD9A5_Class_1_D2B52AD7BCEA9E72 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AJIKDOPMGMA; // 0x18
	::UnityEngine::Vector3 HFOMPEEAPCG; // 0x20
	::System::Single IDKONBFPBLH; // 0x2C
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
	::System::Boolean BEIHEDFDKNM; // 0x3C
	::System::Boolean NPMDJDEEEAN; // 0x3D
	::System::Int32 BHMKFNONGKJ; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_3(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_4(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_CLASS_1_D2B52AD7BCEA9E72__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
