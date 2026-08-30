#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PUPPYSEARCHPROPDATA_METHOD_2_F18ED0756F9C8C91_OFFSET UNITYSDK_OFFSET(0x1D18B680)
#define RPG_GAMECORE_PUPPYSEARCHPROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18B7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuppySearchPropData_TypeDefinitionIndex = 17379;

	class PuppySearchPropData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 NpcID; // 0x10
		::System::String* SummonUnitUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUPPYSEARCHPROPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F18ED0756F9C8C91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuppySearchPropData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuppySearchPropData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUPPYSEARCHPROPDATA_METHOD_2_F18ED0756F9C8C91_OFFSET))(a1, a2);
		}
	};
}
