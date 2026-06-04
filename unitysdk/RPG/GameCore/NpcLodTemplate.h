#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_0B9A34BA288ECA43_OFFSET UNITYSDK_OFFSET(0x199D1E90)
#define RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_1E4F64B0CC33E8ED_OFFSET UNITYSDK_OFFSET(0x199D1E40)
#define RPG_GAMECORE_NPCLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D1E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcLodTemplate_TypeDefinitionIndex = 18125;

	class NpcLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E4F64B0CC33E8ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_1E4F64B0CC33E8ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B9A34BA288ECA43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_0B9A34BA288ECA43_OFFSET))(a1, a2);
		}
	};
}
