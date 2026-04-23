#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_METHOD_3_BA7AF52CAB06723C_OFFSET UNITYSDK_OFFSET(0x18B685E0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_METHOD_3_CA4C16177C13BD1D_OFFSET UNITYSDK_OFFSET(0x18B68A30)
#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18B685D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionPropAnimation_TypeDefinitionIndex = 16015;

	class MunicipalChatActionPropAnimation : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* AnimStateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA4C16177C13BD1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionPropAnimation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_METHOD_3_CA4C16177C13BD1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA7AF52CAB06723C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionPropAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_METHOD_3_BA7AF52CAB06723C_OFFSET))(a1, a2);
		}
	};
}
