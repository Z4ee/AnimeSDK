#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_03F06B9F41C724C3_OFFSET UNITYSDK_OFFSET(0x17476FD0)
#define RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_C9BC47D0937AF092_OFFSET UNITYSDK_OFFSET(0x17476F80)
#define RPG_GAMECORE_NPCLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17476FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcLodTemplate_TypeDefinitionIndex = 17494;

	class NpcLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9BC47D0937AF092(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_C9BC47D0937AF092_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03F06B9F41C724C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_METHOD_3_03F06B9F41C724C3_OFFSET))(a1, a2);
		}
	};
}
