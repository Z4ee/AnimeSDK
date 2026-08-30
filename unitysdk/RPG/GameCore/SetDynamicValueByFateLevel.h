#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F08F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_METHOD_4_330A83399330B0D8_OFFSET UNITYSDK_OFFSET(0x1D4F06D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_METHOD_4_EDBDD14CC42B8D1D_OFFSET UNITYSDK_OFFSET(0x1D4F0710)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F0700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFateLevel_TypeDefinitionIndex = 23023;

	class SetDynamicValueByFateLevel : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::FateLevelParamType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_330A83399330B0D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_METHOD_4_330A83399330B0D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDBDD14CC42B8D1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_METHOD_4_EDBDD14CC42B8D1D_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATELEVEL_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
