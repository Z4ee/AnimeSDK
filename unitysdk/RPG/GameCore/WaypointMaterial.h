#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_WAYPOINTMATERIAL_METHOD_2_958208537EAC1625_OFFSET UNITYSDK_OFFSET(0x1910D5D0)
#define RPG_GAMECORE_WAYPOINTMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1910D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypointMaterial_TypeDefinitionIndex = 17984;

	class WaypointMaterial : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatValues; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ColorValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_958208537EAC1625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaypointMaterial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaypointMaterial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTMATERIAL_METHOD_2_958208537EAC1625_OFFSET))(a1, a2);
		}
	};
}
