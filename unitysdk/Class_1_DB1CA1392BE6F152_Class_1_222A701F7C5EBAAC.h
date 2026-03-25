#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DB1CA1392BE6F152_CLASS_1_222A701F7C5EBAAC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10B938A0)
#define CLASS_1_DB1CA1392BE6F152_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x10B93E20)

inline static constexpr unsigned int Class_1_DB1CA1392BE6F152_Class_1_222A701F7C5EBAAC_TypeDefinitionIndex = 62514;

class Class_1_DB1CA1392BE6F152_Class_1_222A701F7C5EBAAC : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C
	::UnityEngine::Quaternion Field_1_5; // 0x38
	::System::Single Field_1_2; // 0x48
	::System::Boolean Field_1_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_CLASS_1_222A701F7C5EBAAC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
