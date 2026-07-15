#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_METHOD_3_0DB18E461DF89504_OFFSET UNITYSDK_OFFSET(0x1C603660)
#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_METHOD_3_D76EF45C4158299F_OFFSET UNITYSDK_OFFSET(0x1C6036A0)
#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C603690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMunicipalStreamCenter_TypeDefinitionIndex = 21450;

	class SetMunicipalStreamCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UseCamera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DB18E461DF89504(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalStreamCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalStreamCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_METHOD_3_0DB18E461DF89504_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D76EF45C4158299F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalStreamCenter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalStreamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_METHOD_3_D76EF45C4158299F_OFFSET))(a1, a2);
		}
	};
}
