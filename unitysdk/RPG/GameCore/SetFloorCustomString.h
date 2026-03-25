#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMSTRING_METHOD_3_0B7DFC4FD24F8ADA_OFFSET UNITYSDK_OFFSET(0x176CEFF0)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRING_METHOD_3_4B096023EAB64A43_OFFSET UNITYSDK_OFFSET(0x176CF070)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x176CF040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomString_TypeDefinitionIndex = 19010;

	class SetFloorCustomString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicString* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B7DFC4FD24F8ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRING_METHOD_3_0B7DFC4FD24F8ADA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B096023EAB64A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRING_METHOD_3_4B096023EAB64A43_OFFSET))(a1, a2);
		}
	};
}
