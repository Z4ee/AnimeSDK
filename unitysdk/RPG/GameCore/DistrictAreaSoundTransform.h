#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_METHOD_2_C657B8AD93CF3436_OFFSET UNITYSDK_OFFSET(0x17173F40)
#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x17174090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAreaSoundTransform_TypeDefinitionIndex = 15857;

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

		static ::System::Void Method_2_C657B8AD93CF3436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictAreaSoundTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictAreaSoundTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_METHOD_2_C657B8AD93CF3436_OFFSET))(a1, a2);
		}
	};
}
