#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffParamKey; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_METHOD_3_0FA8291611E9A366_OFFSET UNITYSDK_OFFSET(0x18E23AF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_METHOD_3_EBA63F379A1E200B_OFFSET UNITYSDK_OFFSET(0x18E23A70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E23AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMazeBuffConfig_TypeDefinitionIndex = 22828;

	class SetDynamicValueByMazeBuffConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MazeBuffParamKey*>* QueryList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBA63F379A1E200B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_METHOD_3_EBA63F379A1E200B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FA8291611E9A366(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_METHOD_3_0FA8291611E9A366_OFFSET))(a1, a2);
		}
	};
}
