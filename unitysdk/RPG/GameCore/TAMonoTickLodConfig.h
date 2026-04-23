#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TAMONOTICKLODCONFIG_METHOD_2_DE062AAAC1CBB4C4_OFFSET UNITYSDK_OFFSET(0x18ECCAD0)
#define RPG_GAMECORE_TAMONOTICKLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECCBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TAMonoTickLodConfig_TypeDefinitionIndex = 18241;

	class TAMonoTickLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TAMonoTickLodTemplate*>* LodTemplateMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE062AAAC1CBB4C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TAMonoTickLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TAMonoTickLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODCONFIG_METHOD_2_DE062AAAC1CBB4C4_OFFSET))(a1, a2);
		}
	};
}
