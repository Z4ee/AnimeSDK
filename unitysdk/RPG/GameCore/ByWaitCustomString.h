#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1F03EC93448E2C06_OFFSET UNITYSDK_OFFSET(0x195E0AD0)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_987DF5A071EE4271_OFFSET UNITYSDK_OFFSET(0x195E0CB0)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_F66D18E68EE7182B_OFFSET UNITYSDK_OFFSET(0x195E0C30)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_FAD85F4FFF311BD8_OFFSET UNITYSDK_OFFSET(0x195E0A00)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x195E0A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByWaitCustomString_TypeDefinitionIndex = 20472;

	class ByWaitCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Boolean CheckForWin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FAD85F4FFF311BD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_FAD85F4FFF311BD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F03EC93448E2C06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1F03EC93448E2C06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F66D18E68EE7182B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_F66D18E68EE7182B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_987DF5A071EE4271(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_987DF5A071EE4271_OFFSET))(a1, a2);
		}
	};
}
