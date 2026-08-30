#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_997BC107281E8D79;
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___O_TypeDefinitionIndex = 63875;

	class EvolveBuildUtils___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_997BC107281E8D79*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>** StaticGet__0___SlotInfo2GearEquipInfo()
		{
			return (::System::Func_2<::Class_1_997BC107281E8D79*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___O_TypeDefinitionIndex)->GetStaticField(0x64750);
		}
	};
}
