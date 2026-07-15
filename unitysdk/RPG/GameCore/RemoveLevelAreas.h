#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_REMOVELEVELAREAS_METHOD_3_005A3981F5C18742_OFFSET UNITYSDK_OFFSET(0x1B9CFF60)
#define RPG_GAMECORE_REMOVELEVELAREAS_METHOD_3_F07511D251EDEB39_OFFSET UNITYSDK_OFFSET(0x1B9CFF20)
#define RPG_GAMECORE_REMOVELEVELAREAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CFF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveLevelAreas_TypeDefinitionIndex = 19962;

	class RemoveLevelAreas : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F07511D251EDEB39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveLevelAreas*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveLevelAreas*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS_METHOD_3_F07511D251EDEB39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_005A3981F5C18742(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveLevelAreas* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVELEVELAREAS_METHOD_3_005A3981F5C18742_OFFSET))(a1, a2);
		}
	};
}
