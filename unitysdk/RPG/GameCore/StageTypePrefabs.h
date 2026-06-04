#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGETYPEPREFABS_METHOD_2_E342C7A74A5DAE21_OFFSET UNITYSDK_OFFSET(0x19CB01F0)
#define RPG_GAMECORE_STAGETYPEPREFABS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB02E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageTypePrefabs_TypeDefinitionIndex = 15538;

	class StageTypePrefabs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* StagePrefabList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGETYPEPREFABS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E342C7A74A5DAE21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageTypePrefabs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageTypePrefabs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGETYPEPREFABS_METHOD_2_E342C7A74A5DAE21_OFFSET))(a1, a2);
		}
	};
}
