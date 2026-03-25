#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLESHOWUIPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x91D5570)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowUIPageParam_TypeDefinitionIndex = 58845;

	class BattleShowUIPageParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* UITextParams; // 0x10
		::System::String* TargetName; // 0x18
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* UIImageNodes; // 0x20
		::System::String* AssetPath; // 0x28
		::System::String* CasterName; // 0x30
		::System::Single LifeTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWUIPAGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
