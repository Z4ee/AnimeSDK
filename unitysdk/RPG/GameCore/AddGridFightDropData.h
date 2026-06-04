#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_METHOD_3_9DDF5A36F94E8782_OFFSET UNITYSDK_OFFSET(0x1940E570)
#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_METHOD_3_F2E337D5A4450319_OFFSET UNITYSDK_OFFSET(0x1940E5F0)
#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1940E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGridFightDropData_TypeDefinitionIndex = 21309;

	class AddGridFightDropData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x20
		::RPG::GameCore::DynamicFloat* DropNum; // 0x28
		::RPG::GameCore::DynamicFloat* DropID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DDF5A36F94E8782(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightDropData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightDropData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_METHOD_3_9DDF5A36F94E8782_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2E337D5A4450319(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGridFightDropData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGridFightDropData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_METHOD_3_F2E337D5A4450319_OFFSET))(a1, a2);
		}
	};
}
