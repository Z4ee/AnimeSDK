#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_3D22330C3BA79CA9_OFFSET UNITYSDK_OFFSET(0x1789D180)
#define RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_BF92BFE4E0A156F4_OFFSET UNITYSDK_OFFSET(0x1789D140)
#define RPG_GAMECORE_TICKLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodTemplate_TypeDefinitionIndex = 17645;

	class TickLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF92BFE4E0A156F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_BF92BFE4E0A156F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D22330C3BA79CA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_3D22330C3BA79CA9_OFFSET))(a1, a2);
		}
	};
}
