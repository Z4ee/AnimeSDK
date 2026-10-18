#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_METHOD_2_168A1F2A522DE1C9_OFFSET UNITYSDK_OFFSET(0x1D775D40)
#define RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D775EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LegacyNullRegionPerformace_TypeDefinitionIndex = 19221;

	class LegacyNullRegionPerformace : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* CPerformanceIDs; // 0x10
		::Il2CppArray<::System::String*>* DSPerformanceIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_168A1F2A522DE1C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LegacyNullRegionPerformace*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LegacyNullRegionPerformace*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_METHOD_2_168A1F2A522DE1C9_OFFSET))(a1, a2);
		}
	};
}
