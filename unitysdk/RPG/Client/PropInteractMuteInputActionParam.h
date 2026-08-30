#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockTargetParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_67BB5732E77B236A_OFFSET UNITYSDK_OFFSET(0x1CD56210)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_B1D9918E2C45F791_OFFSET UNITYSDK_OFFSET(0x1CD552A0)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD55290)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInteractMuteInputActionParam_TypeDefinitionIndex = 10168;

	class PropInteractMuteInputActionParam : public ::RPG::Client::LockTargetParam
	{
	public:
		::Il2CppArray<::System::String*>* MuteInputActionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67BB5732E77B236A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PropInteractMuteInputActionParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PropInteractMuteInputActionParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_67BB5732E77B236A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1D9918E2C45F791(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PropInteractMuteInputActionParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PropInteractMuteInputActionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_B1D9918E2C45F791_OFFSET))(a1, a2);
		}
	};
}
