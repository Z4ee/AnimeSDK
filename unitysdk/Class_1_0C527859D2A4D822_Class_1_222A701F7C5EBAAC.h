#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE4D8600)
#define CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D9BD0)

inline static constexpr unsigned int Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC_TypeDefinitionIndex = 72866;

class Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Quaternion Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x3C
	::System::Boolean Field_1_6; // 0x40
	::UnityEngine::Vector3 Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
