#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16651B70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzlePillarData_TypeDefinitionIndex = 78337;

	class RotatePillarPuzzlePillarData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleFragmentData*>* DataList; // 0x10
		::System::String* CustomFinishTriggerString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLARDATA__CTOR_OFFSET))(this);
		}
	};
}
