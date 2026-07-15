#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVEFARMELEMENT_METHOD_3_AA833D47D59F3828_OFFSET UNITYSDK_OFFSET(0x1AAD99E0)
#define RPG_GAMECORE_ACTIVEFARMELEMENT_METHOD_3_EC2FB3E09C6480A5_OFFSET UNITYSDK_OFFSET(0x1AAD9AB0)
#define RPG_GAMECORE_ACTIVEFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFarmElement_TypeDefinitionIndex = 21278;

	class ActiveFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA833D47D59F3828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT_METHOD_3_AA833D47D59F3828_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC2FB3E09C6480A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT_METHOD_3_EC2FB3E09C6480A5_OFFSET))(a1, a2);
		}
	};
}
