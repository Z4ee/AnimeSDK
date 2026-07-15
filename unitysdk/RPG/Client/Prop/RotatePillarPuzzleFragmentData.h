#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4A5B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragmentData_TypeDefinitionIndex = 74848;

	class RotatePillarPuzzleFragmentData : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 RotateDegree; // 0x18
		::System::Single RotateSpeed; // 0x1C
		::System::Int32 InitDegree; // 0x20
		::System::Int32 CompleteDegree; // 0x24
		::System::String* CompleteTriggerCustomString; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* ChildFragment; // 0x30
		::System::Single FollowDelay; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENTDATA__CTOR_OFFSET))(this);
		}
	};
}
