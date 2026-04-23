#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormationDataServantMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LocationData; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONDATA_METHOD_2_E359314CE645F3C6_OFFSET UNITYSDK_OFFSET(0x1892A3D0)
#define RPG_GAMECORE_FORMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1892A6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationData_TypeDefinitionIndex = 16226;

	class FormationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean AdjustByTargetWidth; // 0x18
		::System::Boolean IsIncludeTempLeave; // 0x19
		::System::Boolean IgnoreCharacterRootOffset; // 0x1A
		::RPG::MVector3 RootOffset; // 0x1C
		::RPG::GameCore::FormationDataServantMode ServantMode; // 0x28
		::Il2CppArray<::RPG::GameCore::LocationData*>* LocationList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E359314CE645F3C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONDATA_METHOD_2_E359314CE645F3C6_OFFSET))(a1, a2);
		}
	};
}
