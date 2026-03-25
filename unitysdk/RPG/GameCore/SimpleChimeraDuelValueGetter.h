#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_METHOD_3_5E4EB95BD11B1890_OFFSET UNITYSDK_OFFSET(0x17709070)
#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_METHOD_3_8961DF48220E919C_OFFSET UNITYSDK_OFFSET(0x17708F50)
#define RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17709060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleChimeraDuelValueGetter_TypeDefinitionIndex = 14687;

	class SimpleChimeraDuelValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8961DF48220E919C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleChimeraDuelValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleChimeraDuelValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_METHOD_3_8961DF48220E919C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E4EB95BD11B1890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLECHIMERADUELVALUEGETTER_METHOD_3_5E4EB95BD11B1890_OFFSET))(a1, a2);
		}
	};
}
