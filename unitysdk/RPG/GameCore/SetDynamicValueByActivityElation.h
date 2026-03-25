#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C0210)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_METHOD_4_BC195C6FBC4D22CE_OFFSET UNITYSDK_OFFSET(0x176C0190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_METHOD_4_F272D784FB962E23_OFFSET UNITYSDK_OFFSET(0x176B6A80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION__CTOR_OFFSET UNITYSDK_OFFSET(0x176B6A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByActivityElation_TypeDefinitionIndex = 21383;

	class SetDynamicValueByActivityElation : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC195C6FBC4D22CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByActivityElation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByActivityElation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_METHOD_4_BC195C6FBC4D22CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F272D784FB962E23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByActivityElation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByActivityElation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_METHOD_4_F272D784FB962E23_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
