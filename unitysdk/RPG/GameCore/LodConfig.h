#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LODCONFIG_METHOD_2_01AB4A09CD6B49D5_OFFSET UNITYSDK_OFFSET(0x1736D030)
#define RPG_GAMECORE_LODCONFIG_METHOD_2_FF316D7C9BCF8CB7_OFFSET UNITYSDK_OFFSET(0x1736CF00)
#define RPG_GAMECORE_LODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1736D020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LodConfig_TypeDefinitionIndex = 17626;

	class LodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LodTemplate*>* LodTemplateMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* NormDistanceLodTemplateMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMappingPropLod; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF316D7C9BCF8CB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG_METHOD_2_FF316D7C9BCF8CB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_01AB4A09CD6B49D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG_METHOD_2_01AB4A09CD6B49D5_OFFSET))(a1, a2);
		}
	};
}
