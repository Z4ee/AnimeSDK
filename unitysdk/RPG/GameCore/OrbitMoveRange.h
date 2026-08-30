#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_ORBITMOVERANGE_METHOD_2_F107058FBF2A185D_OFFSET UNITYSDK_OFFSET(0x1D40B740)
#define RPG_GAMECORE_ORBITMOVERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40B960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrbitMoveRange_TypeDefinitionIndex = 22605;

	class OrbitMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x10
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x18
		::RPG::GameCore::DynamicFloat* TransferPercentage; // 0x20
		::System::String* SpeedCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORBITMOVERANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F107058FBF2A185D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OrbitMoveRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OrbitMoveRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORBITMOVERANGE_METHOD_2_F107058FBF2A185D_OFFSET))(a1, a2);
		}
	};
}
