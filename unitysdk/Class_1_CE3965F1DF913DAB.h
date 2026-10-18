#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_CE3965F1DF913DAB_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x15990AD0)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_4A4861B1D79F80F6_OFFSET UNITYSDK_OFFSET(0x15990400)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x15990580)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15990BF0)
#define CLASS_1_CE3965F1DF913DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15990C00)

inline static constexpr unsigned int Class_1_CE3965F1DF913DAB_TypeDefinitionIndex = 58589;

class Class_1_CE3965F1DF913DAB : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
	::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* MJHIMCFFIHD; // 0x18
	::UnityEngine::Vector3 CJFHPEDCMKB; // 0x20
	::System::Single HPCHCEFOKJB; // 0x2C
	::System::Int32 JGNAANKNEGD; // 0x30
	::UnityEngine::Vector3 DAPNFDEFLBD; // 0x34
	::System::Single GHCBLGBCPIA; // 0x40
	::UnityEngine::Quaternion AHANGHKAIBO; // 0x44
	::System::Single NEHHIFNALHJ; // 0x54
	::System::Single FHGDBJGOLOM; // 0x58
	::System::Boolean LFJHKGPGMKN; // 0x5C
	::UnityEngine::Vector3 PDJBFBPEHFE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE3965F1DF913DAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4A4861B1D79F80F6(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* a2, ::System::Single a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_CE3965F1DF913DAB_METHOD_1_4A4861B1D79F80F6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE3965F1DF913DAB_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE3965F1DF913DAB_METHOD_1_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE3965F1DF913DAB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
