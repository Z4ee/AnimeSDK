#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockTargetParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_AA8D19CD2E4E7E54_OFFSET UNITYSDK_OFFSET(0x185EC580)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_FE31181E7D31147F_OFFSET UNITYSDK_OFFSET(0x185EC540)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x185EC570)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInteractMuteInputActionParam_TypeDefinitionIndex = 10061;

	class PropInteractMuteInputActionParam : public ::RPG::Client::LockTargetParam
	{
	public:
		::Il2CppArray<::System::String*>* MuteInputActionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE31181E7D31147F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PropInteractMuteInputActionParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PropInteractMuteInputActionParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_FE31181E7D31147F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA8D19CD2E4E7E54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PropInteractMuteInputActionParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PropInteractMuteInputActionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_METHOD_3_AA8D19CD2E4E7E54_OFFSET))(a1, a2);
		}
	};
}
