#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1C2DDC80)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_2E0E90D7E0EB2A64_OFFSET UNITYSDK_OFFSET(0x1C2DDBC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_4E91E1F53AD58FB2_OFFSET UNITYSDK_OFFSET(0x1C2DDB60)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DDB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBase_TypeDefinitionIndex = 22967;

	class SetDynamicValueBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E91E1F53AD58FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_4E91E1F53AD58FB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E0E90D7E0EB2A64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_2E0E90D7E0EB2A64_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
