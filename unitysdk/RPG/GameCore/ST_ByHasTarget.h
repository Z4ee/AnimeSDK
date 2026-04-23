#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_796052435CBDF007_OFFSET UNITYSDK_OFFSET(0x18DEDE20)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET UNITYSDK_OFFSET(0x18DEDEF0)
#define RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEDEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasTarget_TypeDefinitionIndex = 18991;

	class ST_ByHasTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_796052435CBDF007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_796052435CBDF007_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8709E3D1FEDC160D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET))(a1, a2);
		}
	};
}
