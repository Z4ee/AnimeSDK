#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/OpenWorldFilterVolumeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FILTERVOLUMEDATA_METHOD_2_0B9391D86D5D7D04_OFFSET UNITYSDK_OFFSET(0x171D5B60)
#define RPG_GAMECORE_FILTERVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x171D5D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilterVolumeData_TypeDefinitionIndex = 17560;

	class FilterVolumeData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::OpenWorldFilterVolumeType FilterVolumeType; // 0x10
		::System::Boolean Grass; // 0x14
		::System::Boolean BlockAndItem; // 0x15
		::Il2CppArray<::System::String*>* BlockAlias; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERVOLUMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B9391D86D5D7D04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FilterVolumeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FilterVolumeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERVOLUMEDATA_METHOD_2_0B9391D86D5D7D04_OFFSET))(a1, a2);
		}
	};
}
