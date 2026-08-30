#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TriggerShape.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROJECTILETEMPLATEDATA_METHOD_2_993287E990B17A01_OFFSET UNITYSDK_OFFSET(0x1D173070)
#define RPG_GAMECORE_PROJECTILETEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1731E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileTemplateData_TypeDefinitionIndex = 15480;

	class ProjectileTemplateData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TriggerShape ColliderShape; // 0x18
		::RPG::GameCore::ColliderConfig* ColliderConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_993287E990B17A01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileTemplateData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileTemplateData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATEDATA_METHOD_2_993287E990B17A01_OFFSET))(a1, a2);
		}
	};
}
