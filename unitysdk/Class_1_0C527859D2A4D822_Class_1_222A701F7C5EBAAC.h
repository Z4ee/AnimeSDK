#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF8A8F20)
#define CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET UNITYSDK_OFFSET(0xF8AA400)

inline static constexpr unsigned int Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC_TypeDefinitionIndex = 76810;

class Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* MEFLGMJLNIJ; // 0x10
	::UnityEngine::Transform* BJFJJPKBIJH; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* IHMAFDEHKBH; // 0x20
	::System::Single DJCLLOAGJEE; // 0x28
	::System::Single CNOELHGCKJJ; // 0x2C
	::System::Boolean GAFBLCMLKDN; // 0x30
	::UnityEngine::Vector3 NKMFGLAOHOF; // 0x34
	::UnityEngine::Quaternion ADOMOMAIGNM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_222A701F7C5EBAAC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
