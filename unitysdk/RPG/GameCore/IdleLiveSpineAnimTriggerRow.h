#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_2F8808448A4005C9;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A15A90)
#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimTriggerRow_TypeDefinitionIndex = 11255;

	class IdleLiveSpineAnimTriggerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_2F8808448A4005C9*>* AnimGroupPool; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
