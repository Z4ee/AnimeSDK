#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIXPOINTCONST_METHOD_2_CD062CAC029D740A_OFFSET UNITYSDK_OFFSET(0x1D109C00)
#define RPG_GAMECORE_FIXPOINTCONST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D109D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPointConst_TypeDefinitionIndex = 16853;

	class FixPointConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* SinLut; // 0x10
		::Il2CppArray<::System::Int32>* TanLut; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTCONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CD062CAC029D740A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FixPointConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FixPointConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTCONST_METHOD_2_CD062CAC029D740A_OFFSET))(a1, a2);
		}
	};
}
