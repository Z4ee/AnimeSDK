#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO_METHOD_3_380C7B02C85DEF89_OFFSET UNITYSDK_OFFSET(0x1CE89AD0)
#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO_METHOD_3_D91781AC58D8D5D0_OFFSET UNITYSDK_OFFSET(0x1CE8A460)
#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8A450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NamedLevelObjectInfo_TypeDefinitionIndex = 17046;

	class NamedLevelObjectInfo : public ::RPG::GameCore::LevelObjectInfo
	{
	public:
		::System::String* Name; // 0x28
		::System::Single RotY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_380C7B02C85DEF89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NamedLevelObjectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NamedLevelObjectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO_METHOD_3_380C7B02C85DEF89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D91781AC58D8D5D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NamedLevelObjectInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO_METHOD_3_D91781AC58D8D5D0_OFFSET))(a1, a2);
		}
	};
}
