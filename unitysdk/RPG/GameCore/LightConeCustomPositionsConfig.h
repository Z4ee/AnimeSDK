#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988C040)
#define RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1988C140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightConeCustomPositionsConfig_TypeDefinitionIndex = 16632;

	class LightConeCustomPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* CustomPositionAnchor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightConeCustomPositionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightConeCustomPositionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
