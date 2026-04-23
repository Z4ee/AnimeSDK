#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_BECE74D118D3FD3D_OFFSET UNITYSDK_OFFSET(0x190ED000)
#define RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_CB8997B07D2B71A0_OFFSET UNITYSDK_OFFSET(0x190ED040)
#define RPG_GAMECORE_VE_FACTORGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x190ED030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_FactorGroup_TypeDefinitionIndex = 23036;

	class VE_FactorGroup : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::System::String* GroupName; // 0x20
		::System::String* ParamString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BECE74D118D3FD3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_FactorGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_FactorGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_BECE74D118D3FD3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB8997B07D2B71A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_METHOD_3_CB8997B07D2B71A0_OFFSET))(a1, a2);
		}
	};
}
