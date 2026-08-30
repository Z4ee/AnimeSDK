#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_RELATEDSKILLDETAILPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A5FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillDetailInfoDialogInitParam_RelatedSkillDetailParam_TypeDefinitionIndex = 72058;

	class SkillDetailInfoDialogInitParam_RelatedSkillDetailParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x10
		::Il2CppArray<::System::Object*>* DescParamList; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::RPG::Client::TextID Desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLDETAILINFODIALOGINITPARAM_RELATEDSKILLDETAILPARAM__CTOR_OFFSET))(this);
		}
	};
}
