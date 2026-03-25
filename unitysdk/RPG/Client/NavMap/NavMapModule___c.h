#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E26050)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E26080)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C___INITTABCONTAINSUBTABS_B__59_0_OFFSET UNITYSDK_OFFSET(0x9E26090)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapModule___c_TypeDefinitionIndex = 61354;

	class NavMapModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::NavMapSubTabRow*>** StaticGet___9__59_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::NavMapSubTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapModule___c_TypeDefinitionIndex)->GetStaticField(0x456E0);
		}
		static ::RPG::Client::NavMap::NavMapModule___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::NavMapModule___c**)Il2CppClass::FromTypeDefinitionIndex(NavMapModule___c_TypeDefinitionIndex)->GetStaticField(0x456E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitTabContainSubTabs_b__59_0(::RPG::GameCore::NavMapSubTabRow* x, ::RPG::GameCore::NavMapSubTabRow* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::GameCore::NavMapSubTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C___INITTABCONTAINSUBTABS_B__59_0_OFFSET))(this, x, y);
		}
	};
}
