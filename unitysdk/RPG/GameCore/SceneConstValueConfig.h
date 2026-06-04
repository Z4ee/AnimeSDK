#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SCENECONSTVALUECONFIG_METHOD_2_DF6B4522CBBB4F8C_OFFSET UNITYSDK_OFFSET(0x19C1D010)
#define RPG_GAMECORE_SCENECONSTVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1D2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneConstValueConfig_TypeDefinitionIndex = 18196;

	class SceneConstValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 NormTemplateVisionDistanceFactor; // 0x10
		::System::String* DefaultNormTemplateName; // 0x18
		::System::Single OverrideColliderSizeForLod; // 0x20
		::System::Single OverrideSCSizeForLod; // 0x24
		::System::Single DefaultDynamicItemSizeForLod; // 0x28
		::System::Int32 NormDistanceTemplateMaxVisionDistance; // 0x2C
		::Il2CppArray<::System::Int32>* TAMonoTickIntervalByLOD; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENECONSTVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF6B4522CBBB4F8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SceneConstValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SceneConstValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENECONSTVALUECONFIG_METHOD_2_DF6B4522CBBB4F8C_OFFSET))(a1, a2);
		}
	};
}
