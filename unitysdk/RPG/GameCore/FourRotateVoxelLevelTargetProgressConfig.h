#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_METHOD_2_B944A30025BFE3A8_OFFSET UNITYSDK_OFFSET(0x1976A980)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976AB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelTargetProgressConfig_TypeDefinitionIndex = 15920;

	class FourRotateVoxelLevelTargetProgressConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TargetProgressText; // 0x10
		::Il2CppArray<::System::String*>* TargetGP; // 0x20
		::Il2CppArray<::System::UInt32>* TargetGPTargetValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B944A30025BFE3A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_METHOD_2_B944A30025BFE3A8_OFFSET))(a1, a2);
		}
	};
}
