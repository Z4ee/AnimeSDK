#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EA4941C55D733B61_CLASS_1_222A701F7C5EBAAC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x961F150)
#define CLASS_1_EA4941C55D733B61_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x9620500)

inline static constexpr unsigned int Class_1_EA4941C55D733B61_Class_1_222A701F7C5EBAAC_TypeDefinitionIndex = 70525;

class Class_1_EA4941C55D733B61_Class_1_222A701F7C5EBAAC : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Quaternion Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_4; // 0x3C
	::System::Boolean Field_1_7; // 0x48
	::System::Single Field_1_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4941C55D733B61_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4941C55D733B61_CLASS_1_222A701F7C5EBAAC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
