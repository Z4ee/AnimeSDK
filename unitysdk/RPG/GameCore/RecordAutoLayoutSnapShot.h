#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_METHOD_3_84B10ECA008E0CEE_OFFSET UNITYSDK_OFFSET(0x18C924F0)
#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_METHOD_3_D494D329DCD944BF_OFFSET UNITYSDK_OFFSET(0x18C92470)
#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C924C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordAutoLayoutSnapShot_TypeDefinitionIndex = 22069;

	class RecordAutoLayoutSnapShot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D494D329DCD944BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordAutoLayoutSnapShot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_METHOD_3_D494D329DCD944BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84B10ECA008E0CEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordAutoLayoutSnapShot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_METHOD_3_84B10ECA008E0CEE_OFFSET))(a1, a2);
		}
	};
}
