#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYFATECONTENTPARAM_METHOD_3_18768114BEAE6DDE_OFFSET UNITYSDK_OFFSET(0x174310F0)
#define RPG_GAMECORE_MODIFYFATECONTENTPARAM_METHOD_3_6E997984BB7CC821_OFFSET UNITYSDK_OFFSET(0x17431060)
#define RPG_GAMECORE_MODIFYFATECONTENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x174310C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFateContentParam_TypeDefinitionIndex = 21523;

	class ModifyFateContentParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateContentParamType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E997984BB7CC821(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateContentParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateContentParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM_METHOD_3_6E997984BB7CC821_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18768114BEAE6DDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateContentParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateContentParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATECONTENTPARAM_METHOD_3_18768114BEAE6DDE_OFFSET))(a1, a2);
		}
	};
}
