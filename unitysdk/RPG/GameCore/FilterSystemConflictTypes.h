#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_METHOD_2_80C909D005B52E27_OFFSET UNITYSDK_OFFSET(0x1E0D9A20)
#define RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilterSystemConflictTypes_TypeDefinitionIndex = 16321;

	class FilterSystemConflictTypes : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PPEffectFilterType>* ConflictTypeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_80C909D005B52E27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilterSystemConflictTypes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilterSystemConflictTypes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_METHOD_2_80C909D005B52E27_OFFSET))(a1, a2);
		}
	};
}
