#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE_METHOD_3_0E16831AC1DE9E45_OFFSET UNITYSDK_OFFSET(0x18E36D40)
#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE_METHOD_3_1A8E79B7C454BBEE_OFFSET UNITYSDK_OFFSET(0x18E36CC0)
#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E36D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoadingStratageType_TypeDefinitionIndex = 20411;

	class SetLoadingStratageType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LoadingStratageType StratageType; // 0x18
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x1C
		::System::Boolean RollBackWhenMissionFail; // 0x20
		::System::UInt32 SubmissionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A8E79B7C454BBEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoadingStratageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoadingStratageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE_METHOD_3_1A8E79B7C454BBEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E16831AC1DE9E45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoadingStratageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE_METHOD_3_0E16831AC1DE9E45_OFFSET))(a1, a2);
		}
	};
}
