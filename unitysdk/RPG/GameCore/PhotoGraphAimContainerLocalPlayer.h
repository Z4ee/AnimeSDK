#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_METHOD_3_0039CCCBAD6DC66A_OFFSET UNITYSDK_OFFSET(0x174A7D20)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_METHOD_3_DC230AB034BE7E12_OFFSET UNITYSDK_OFFSET(0x174A7DD0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerLocalPlayer_TypeDefinitionIndex = 16097;

	class PhotoGraphAimContainerLocalPlayer : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0039CCCBAD6DC66A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_METHOD_3_0039CCCBAD6DC66A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC230AB034BE7E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_METHOD_3_DC230AB034BE7E12_OFFSET))(a1, a2);
		}
	};
}
