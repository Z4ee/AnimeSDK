#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVPLAYERCANCELRIDE_METHOD_3_872F4BC88B503F6B_OFFSET UNITYSDK_OFFSET(0x16F3B360)
#define RPG_GAMECORE_ADVPLAYERCANCELRIDE_METHOD_3_F011DA45BECA2B42_OFFSET UNITYSDK_OFFSET(0x16F3B3E0)
#define RPG_GAMECORE_ADVPLAYERCANCELRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3B3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerCancelRide_TypeDefinitionIndex = 19362;

	class AdvPlayerCancelRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* SelectOffsetList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_872F4BC88B503F6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerCancelRide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerCancelRide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE_METHOD_3_872F4BC88B503F6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F011DA45BECA2B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerCancelRide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerCancelRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERCANCELRIDE_METHOD_3_F011DA45BECA2B42_OFFSET))(a1, a2);
		}
	};
}
