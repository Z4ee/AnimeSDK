#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleConfig_StateEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189EDFA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleConfig_TypeDefinitionIndex = 77831;

	class ChimeraDuelMainPuzzleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig_StateEntry*>* StateConfigs; // 0x10
		::System::String* ExitPuzzleCustomString; // 0x18
		::System::String* InitialStateDataKey; // 0x20
		::System::String* GroupTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
