#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_METHOD_2_1640675461B59552_OFFSET UNITYSDK_OFFSET(0x1CE66020)
#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_METHOD_2_CD5713756667F409_OFFSET UNITYSDK_OFFSET(0x1CE66710)
#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE66770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelValueGetter_TypeDefinitionIndex = 15816;

	class BaseChimeraDuelValueGetter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1640675461B59552(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_METHOD_2_1640675461B59552_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CD5713756667F409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_METHOD_2_CD5713756667F409_OFFSET))(a1, a2);
		}
	};
}
