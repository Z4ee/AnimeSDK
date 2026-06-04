#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COLLIDERCONFIG_METHOD_2_DB1183BA0272677E_OFFSET UNITYSDK_OFFSET(0x19666F50)
#define RPG_GAMECORE_COLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196670C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderConfig_TypeDefinitionIndex = 16626;

	class ColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AxisType Axis; // 0x10
		::RPG::MVector3 Center; // 0x14
		::RPG::MVector3 Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DB1183BA0272677E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERCONFIG_METHOD_2_DB1183BA0272677E_OFFSET))(a1, a2);
		}
	};
}
