#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICBOOL_METHOD_2_393F2445905EC01C_OFFSET UNITYSDK_OFFSET(0x196CCE00)
#define RPG_GAMECORE_DYNAMICBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x196CCFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicBool_TypeDefinitionIndex = 15658;

	class DynamicBool : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::String* Key; // 0x18
		::System::Boolean Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_393F2445905EC01C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICBOOL_METHOD_2_393F2445905EC01C_OFFSET))(a1, a2);
		}
	};
}
