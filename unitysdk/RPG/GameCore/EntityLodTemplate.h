#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_A35ECDAF9C1B5006_OFFSET UNITYSDK_OFFSET(0x171A1700)
#define RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_BB987BB6EB30049F_OFFSET UNITYSDK_OFFSET(0x171A1740)
#define RPG_GAMECORE_ENTITYLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x171A1730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodTemplate_TypeDefinitionIndex = 17638;

	class EntityLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A35ECDAF9C1B5006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_A35ECDAF9C1B5006_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB987BB6EB30049F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_BB987BB6EB30049F_OFFSET))(a1, a2);
		}
	};
}
