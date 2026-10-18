#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_METHOD_2_C504CE62A6CACB29_OFFSET UNITYSDK_OFFSET(0x1D6183A0)
#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D618680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAreaSoundTransform_TypeDefinitionIndex = 17263;

	class DistrictAreaSoundTransform : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Forward; // 0x1C
		::RPG::MVector3 Up; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C504CE62A6CACB29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictAreaSoundTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictAreaSoundTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_METHOD_2_C504CE62A6CACB29_OFFSET))(a1, a2);
		}
	};
}
