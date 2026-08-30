#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C370D91670DF0B16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76E1A0)

inline static constexpr unsigned int Class_1_C370D91670DF0B16_TypeDefinitionIndex = 41583;

class Class_1_C370D91670DF0B16 : public ::System::Object
{
public:
	::UnityEngine::GameObject* CDANMPGNPHN; // 0x10
	::Class_2_B8E38BF47138A2E5* OFHDAHHPNPJ; // 0x18
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* DOCBCODGIEH; // 0x20
	::System::Action* MGJLINFADJK; // 0x28
	::System::Action* CLOCJNLFPPP; // 0x30
	::System::Int32 BGOFFMAFPNM; // 0x38
	::System::Boolean IIDHHGEICBB; // 0x3C
	::System::Boolean HCDIMDELHDA; // 0x3D
	::System::Boolean KAGICIAJEEA; // 0x3E
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C370D91670DF0B16__CTOR_OFFSET))(this);
	}
};
