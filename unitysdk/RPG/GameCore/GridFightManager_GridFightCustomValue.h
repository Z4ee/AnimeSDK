#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightManager_GridFightCustomValue_ValueClassify.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18446910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightCustomValue_TypeDefinitionIndex = 56360;

	class GridFightManager_GridFightCustomValue : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GridFightManager_GridFightCustomValue*>* OnChanged; // 0x10
		::System::Object* SourceObject; // 0x18
		::System::String* Key; // 0x20
		::RPG::GameCore::FixPoint Value; // 0x28
		::RPG::GameCore::GridFightManager_GridFightCustomValue_ValueClassify Classify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUE__CTOR_OFFSET))(this);
		}
	};
}
