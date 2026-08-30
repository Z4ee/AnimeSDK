#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_METHOD_2_1F0E31563523514D_OFFSET UNITYSDK_OFFSET(0x1D0E7D40)
#define RPG_GAMECORE_FIVEDIMPHYSICSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F7470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPhysicsConfig_TypeDefinitionIndex = 16497;

	class FiveDimPhysicsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FixedUpdateProxyPrefabPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1F0E31563523514D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPhysicsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPhysicsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSCONFIG_METHOD_2_1F0E31563523514D_OFFSET))(a1, a2);
		}
	};
}
