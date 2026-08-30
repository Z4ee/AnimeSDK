#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCHANGEMODEL_METHOD_3_5D13EEFD07512A98_OFFSET UNITYSDK_OFFSET(0x1CF907C0)
#define RPG_GAMECORE_CHARACTERCHANGEMODEL_METHOD_3_82B9821EC0976EF7_OFFSET UNITYSDK_OFFSET(0x1CF90720)
#define RPG_GAMECORE_CHARACTERCHANGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF90780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterChangeModel_TypeDefinitionIndex = 22937;

	class CharacterChangeModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::System::Boolean IsAsyncLoad; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82B9821EC0976EF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterChangeModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterChangeModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL_METHOD_3_82B9821EC0976EF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D13EEFD07512A98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterChangeModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL_METHOD_3_5D13EEFD07512A98_OFFSET))(a1, a2);
		}
	};
}
