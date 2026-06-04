#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_2F8808448A4005C9;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19847D10)
#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19847E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimTriggerRow_TypeDefinitionIndex = 11302;

	class IdleLiveSpineAnimTriggerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_2F8808448A4005C9*>* AnimGroupPool; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
