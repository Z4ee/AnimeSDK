#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B53728052B2DD9B5_OFFSET UNITYSDK_OFFSET(0x18C6FCF0)
#define RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_EB1B991853129278_OFFSET UNITYSDK_OFFSET(0x18C6FCB0)
#define RPG_GAMECORE_PROPLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6FCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLodTemplate_TypeDefinitionIndex = 18107;

	class PropLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB1B991853129278(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_EB1B991853129278_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B53728052B2DD9B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B53728052B2DD9B5_OFFSET))(a1, a2);
		}
	};
}
