#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_CE3965F1DF913DAB_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1388E0B0)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_4A4861B1D79F80F6_OFFSET UNITYSDK_OFFSET(0x1388D9E0)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x1388DB60)
#define CLASS_1_CE3965F1DF913DAB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1388E1D0)
#define CLASS_1_CE3965F1DF913DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1388E1E0)

inline static constexpr unsigned int Class_1_CE3965F1DF913DAB_TypeDefinitionIndex = 54739;

class Class_1_CE3965F1DF913DAB : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x2C
	::System::Single Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::UnityEngine::Quaternion Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x50
	::System::Single Field_1_8; // 0x54
	::System::Boolean Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_10; // 0x5C
	::System::Single Field_1_11; // 0x68

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
