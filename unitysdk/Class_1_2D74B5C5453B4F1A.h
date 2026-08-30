#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2D74B5C5453B4F1A_METHOD_1_B46237DDEED84972_OFFSET UNITYSDK_OFFSET(0x18495DE0)
#define CLASS_1_2D74B5C5453B4F1A_METHOD_1_D30A0D39CEB09ED8_OFFSET UNITYSDK_OFFSET(0x184959A0)
#define CLASS_1_2D74B5C5453B4F1A_METHOD_1_DFD15D8343A95148_OFFSET UNITYSDK_OFFSET(0x18496320)
#define CLASS_1_2D74B5C5453B4F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x18496370)

inline static constexpr unsigned int Class_1_2D74B5C5453B4F1A_TypeDefinitionIndex = 76899;

class Class_1_2D74B5C5453B4F1A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D74B5C5453B4F1A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_D30A0D39CEB09ED8(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D74B5C5453B4F1A_METHOD_1_D30A0D39CEB09ED8_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_B46237DDEED84972(::Class_0_16E4307DCC419505_255* a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType& a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_255*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType&))((::PBYTE)hIl2Cpp + CLASS_1_2D74B5C5453B4F1A_METHOD_1_B46237DDEED84972_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGame::PixAir::PixAirPlaneType Method_1_DFD15D8343A95148(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1)
	{
		return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + CLASS_1_2D74B5C5453B4F1A_METHOD_1_DFD15D8343A95148_OFFSET))(a1);
	}
};
