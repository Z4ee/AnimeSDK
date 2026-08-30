#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_A716431842D8A527_OFFSET UNITYSDK_OFFSET(0x1D7C5B30)
#define RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_B9B8DBC32781E371_OFFSET UNITYSDK_OFFSET(0x1D7C5AF0)
#define RPG_GAMECORE_ENTITYLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodTemplate_TypeDefinitionIndex = 18983;

	class EntityLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9B8DBC32781E371(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_B9B8DBC32781E371_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A716431842D8A527(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_METHOD_3_A716431842D8A527_OFFSET))(a1, a2);
		}
	};
}
