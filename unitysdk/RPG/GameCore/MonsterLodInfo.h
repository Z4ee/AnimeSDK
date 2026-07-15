#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERLODINFO_METHOD_2_1D433E9AF2243E34_OFFSET UNITYSDK_OFFSET(0x1B1C9A60)
#define RPG_GAMECORE_MONSTERLODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C9B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterLodInfo_TypeDefinitionIndex = 18356;

	class MonsterLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterTemplateID; // 0x10
		::Il2CppArray<::System::String*>* LodPathList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D433E9AF2243E34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterLodInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterLodInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODINFO_METHOD_2_1D433E9AF2243E34_OFFSET))(a1, a2);
		}
	};
}
