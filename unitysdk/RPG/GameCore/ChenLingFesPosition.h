#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESPOSITION_METHOD_2_F6D3CA7EFDA402C5_OFFSET UNITYSDK_OFFSET(0x1E016740)
#define RPG_GAMECORE_CHENLINGFESPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0168B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPosition_TypeDefinitionIndex = 18222;

	class ChenLingFesPosition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 PositionX; // 0x10
		::System::Int32 PositionZ; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F6D3CA7EFDA402C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPOSITION_METHOD_2_F6D3CA7EFDA402C5_OFFSET))(a1, a2);
		}
	};
}
