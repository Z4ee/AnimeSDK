#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET UNITYSDK_OFFSET(0xD5102C0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85_TypeDefinitionIndex = 76362;

	class FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::System::Single CNOELHGCKJJ; // 0x18
		::System::Single FFGJKEHMKDP; // 0x1C
		::System::Boolean NBAMBCOKBCI; // 0x20
		::System::Boolean GJILHKKPEKP; // 0x21
		::System::Boolean MKAHJABPEPA; // 0x22
		::System::Single HKAFGIGIOIM; // 0x24
		::UnityEngine::Vector3 CNFKIHNOOCJ; // 0x28
		::System::UInt32 NOPJJBBDMGO; // 0x34
		::UnityEngine::Vector3 IAAHNOFKNGN; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET))(this);
		}
	};
}
