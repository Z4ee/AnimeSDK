#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_893BF504B2C9D2F8_OFFSET UNITYSDK_OFFSET(0x1B8A40D0)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_E46A570BE1C25B86_OFFSET UNITYSDK_OFFSET(0x1B8A4110)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimPlayerEnterOrExit_TypeDefinitionIndex = 20492;

	class WaitFiveDimPlayerEnterOrExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SpecifyContainer; // 0x18
		::RPG::GameCore::DynamicString* ContainerID; // 0x20
		::System::Boolean SpecifiyFDEntity; // 0x28
		::RPG::GameCore::DynamicString* FDEntityID; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportFiveDimFinish; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportThreeDimFinish; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_893BF504B2C9D2F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_893BF504B2C9D2F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E46A570BE1C25B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_E46A570BE1C25B86_OFFSET))(a1, a2);
		}
	};
}
