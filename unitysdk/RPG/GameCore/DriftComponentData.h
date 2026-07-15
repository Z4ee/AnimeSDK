#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRIFTCOMPONENTDATA_METHOD_2_5AA7CF844D1FF3E9_OFFSET UNITYSDK_OFFSET(0x1BB1A5B0)
#define RPG_GAMECORE_DRIFTCOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1AC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DriftComponentData_TypeDefinitionIndex = 18437;

	class DriftComponentData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 EntityIndex; // 0x10
		::System::SByte TransOffsetType; // 0x14
		::System::Boolean UseLocalTransform; // 0x15
		::System::Boolean UseLocalRotation; // 0x16
		::System::SByte FloAxis; // 0x17
		::System::Single FloatFrequency; // 0x18
		::System::Single FloatDistance; // 0x1C
		::System::Single OffsetNoise3DSpeed; // 0x20
		::System::Single RandomMove3DBoxSize; // 0x24
		::System::SByte TransRotateType; // 0x28
		::System::Boolean UseLoopRotate; // 0x29
		::System::Boolean RotateObjectSpace; // 0x2A
		::System::SByte RotAxis; // 0x2B
		::System::Single RotateSpeed; // 0x2C
		::System::Single RotateNoise3DSpeed; // 0x30
		::System::Single WobbyScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIFTCOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5AA7CF844D1FF3E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DriftComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DriftComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIFTCOMPONENTDATA_METHOD_2_5AA7CF844D1FF3E9_OFFSET))(a1, a2);
		}
	};
}
