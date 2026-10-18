#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COVERREGIONLIST_METHOD_2_A35E3B7480382BE3_OFFSET UNITYSDK_OFFSET(0x1D5E03B0)
#define RPG_GAMECORE_COVERREGIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E04A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CoverRegionList_TypeDefinitionIndex = 19219;

	class CoverRegionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Regions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COVERREGIONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A35E3B7480382BE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CoverRegionList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CoverRegionList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COVERREGIONLIST_METHOD_2_A35E3B7480382BE3_OFFSET))(a1, a2);
		}
	};
}
