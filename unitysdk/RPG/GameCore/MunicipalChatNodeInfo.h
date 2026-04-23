#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MunicipalChatActionBase; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATNODEINFO_METHOD_2_27A39458129AF096_OFFSET UNITYSDK_OFFSET(0x18B690A0)
#define RPG_GAMECORE_MUNICIPALCHATNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B69230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatNodeInfo_TypeDefinitionIndex = 16020;

	class MunicipalChatNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MunicipalNodeName; // 0x10
		::Il2CppArray<::RPG::GameCore::MunicipalChatNodeTransitionInfo*>* TransitionList; // 0x18
		::Il2CppArray<::RPG::GameCore::MunicipalChatActionBase*>* ActionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_27A39458129AF096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatNodeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODEINFO_METHOD_2_27A39458129AF096_OFFSET))(a1, a2);
		}
	};
}
