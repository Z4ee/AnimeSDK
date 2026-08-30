#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETNOSHADOWCASTER_METHOD_3_2A4CE371EF606860_OFFSET UNITYSDK_OFFSET(0x1D509C70)
#define RPG_GAMECORE_SETNOSHADOWCASTER_METHOD_3_70544DCB50B04F8D_OFFSET UNITYSDK_OFFSET(0x1D509C20)
#define RPG_GAMECORE_SETNOSHADOWCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D509C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNoShadowCaster_TypeDefinitionIndex = 22639;

	class SetNoShadowCaster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeName; // 0x18
		::System::Boolean UseAllRenderer; // 0x20
		::System::Boolean IsNoShadow; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70544DCB50B04F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNoShadowCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNoShadowCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER_METHOD_3_70544DCB50B04F8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A4CE371EF606860(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNoShadowCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNoShadowCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNOSHADOWCASTER_METHOD_3_2A4CE371EF606860_OFFSET))(a1, a2);
		}
	};
}
