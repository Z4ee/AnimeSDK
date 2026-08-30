#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_METHOD_3_CAB754287B34AD06_OFFSET UNITYSDK_OFFSET(0x1D112F10)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_METHOD_3_F838ABA09515F3F3_OFFSET UNITYSDK_OFFSET(0x1D112F50)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D112F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelAnimalAttachBillboardConfig_TypeDefinitionIndex = 16601;

	class FourRotateVoxelAnimalAttachBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsAnimalAttachBillboard; // 0x10
		::System::String* AttachPointName; // 0x18
		::System::String* BindLevelVarName; // 0x20
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x28
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CAB754287B34AD06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_METHOD_3_CAB754287B34AD06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F838ABA09515F3F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_METHOD_3_F838ABA09515F3F3_OFFSET))(a1, a2);
		}
	};
}
