#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ENTERMAPBYCONDITION_METHOD_3_13262A11FB9E7773_OFFSET UNITYSDK_OFFSET(0x1C053480)
#define RPG_GAMECORE_ENTERMAPBYCONDITION_METHOD_3_CFEE30E0600DA810_OFFSET UNITYSDK_OFFSET(0x1C053440)
#define RPG_GAMECORE_ENTERMAPBYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C053470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterMapByCondition_TypeDefinitionIndex = 19511;

	class EnterMapByCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EntranceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFEE30E0600DA810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMapByCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMapByCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION_METHOD_3_CFEE30E0600DA810_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13262A11FB9E7773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMapByCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION_METHOD_3_13262A11FB9E7773_OFFSET))(a1, a2);
		}
	};
}
