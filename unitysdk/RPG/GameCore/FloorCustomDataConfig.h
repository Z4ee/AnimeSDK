#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorSavedValueConfig; }

#define RPG_GAMECORE_FLOORCUSTOMDATACONFIG_METHOD_2_892DC0BA527FD00F_OFFSET UNITYSDK_OFFSET(0x1D10BDB0)
#define RPG_GAMECORE_FLOORCUSTOMDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10BF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomDataConfig_TypeDefinitionIndex = 18072;

	class FloorCustomDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* CustomValues; // 0x10
		::Il2CppArray<::RPG::GameCore::FloorSavedValueConfig*>* SavedValues; // 0x18
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* ConstValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_892DC0BA527FD00F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMDATACONFIG_METHOD_2_892DC0BA527FD00F_OFFSET))(a1, a2);
		}
	};
}
