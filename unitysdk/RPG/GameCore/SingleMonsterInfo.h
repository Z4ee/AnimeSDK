#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLEMONSTERINFO_METHOD_2_6D1ECDE6F3651754_OFFSET UNITYSDK_OFFSET(0x1770ADD0)
#define RPG_GAMECORE_SINGLEMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1770AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleMonsterInfo_TypeDefinitionIndex = 21626;

	class SingleMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::String* AnchorName; // 0x18
		::System::Int32 RowIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6D1ECDE6F3651754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMONSTERINFO_METHOD_2_6D1ECDE6F3651754_OFFSET))(a1, a2);
		}
	};
}
