#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1450E590510397F7_OFFSET UNITYSDK_OFFSET(0x1CF69DC0)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1F03EC93448E2C06_OFFSET UNITYSDK_OFFSET(0x1CF69E00)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_B3EF8F03A8E8B325_OFFSET UNITYSDK_OFFSET(0x1CF69F90)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_BD06A0A7EDE18FD2_OFFSET UNITYSDK_OFFSET(0x1CF69F60)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF69DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByWaitCustomString_TypeDefinitionIndex = 21443;

	class ByWaitCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Boolean CheckForWin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1450E590510397F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1450E590510397F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F03EC93448E2C06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_1F03EC93448E2C06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD06A0A7EDE18FD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_BD06A0A7EDE18FD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3EF8F03A8E8B325(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_METHOD_4_B3EF8F03A8E8B325_OFFSET))(a1, a2);
		}
	};
}
