#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_1E18B81D81A96C1C_OFFSET UNITYSDK_OFFSET(0x190FCB20)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_4E645A73339E1B23_OFFSET UNITYSDK_OFFSET(0x190FCAA0)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190FCAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimPlayerEnterOrExit_TypeDefinitionIndex = 20264;

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

		static ::System::Void Method_3_4E645A73339E1B23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_4E645A73339E1B23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E18B81D81A96C1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_METHOD_3_1E18B81D81A96C1C_OFFSET))(a1, a2);
		}
	};
}
