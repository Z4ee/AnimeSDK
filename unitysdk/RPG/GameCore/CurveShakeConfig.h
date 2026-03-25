#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CURVESHAKECONFIG_METHOD_2_8AEE028FC6E06C5E_OFFSET UNITYSDK_OFFSET(0x171407E0)
#define RPG_GAMECORE_CURVESHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171409A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurveShakeConfig_TypeDefinitionIndex = 15024;

	class CurveShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CurvePath; // 0x10
		::System::Single CurveDuration; // 0x18
		::RPG::MVector3 CurveAmplitude; // 0x1C
		::RPG::MVector3 CurveRandomDir; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVESHAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8AEE028FC6E06C5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CurveShakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CurveShakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVESHAKECONFIG_METHOD_2_8AEE028FC6E06C5E_OFFSET))(a1, a2);
		}
	};
}
