#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B02967909DEB4FF9_OFFSET UNITYSDK_OFFSET(0x19A91990)
#define RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B043FE86D3E6DAA3_OFFSET UNITYSDK_OFFSET(0x19A91950)
#define RPG_GAMECORE_PROPLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A91980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLodTemplate_TypeDefinitionIndex = 18129;

	class PropLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B043FE86D3E6DAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B043FE86D3E6DAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B02967909DEB4FF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_METHOD_3_B02967909DEB4FF9_OFFSET))(a1, a2);
		}
	};
}
