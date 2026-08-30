#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_9F870A6B854B442F_OFFSET UNITYSDK_OFFSET(0x1E1D5EE0)
#define RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_AE8CECB56EBA93A5_OFFSET UNITYSDK_OFFSET(0x1E1D5F20)
#define RPG_GAMECORE_TICKLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D5F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodTemplate_TypeDefinitionIndex = 18990;

	class TickLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F870A6B854B442F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_9F870A6B854B442F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE8CECB56EBA93A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_METHOD_3_AE8CECB56EBA93A5_OFFSET))(a1, a2);
		}
	};
}
