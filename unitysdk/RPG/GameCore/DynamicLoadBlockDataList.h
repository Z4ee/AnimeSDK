#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicLoadBlockData; }
namespace RPG::GameCore { class DynamicLoadBlockDatas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_METHOD_2_6EAA1EAE5A5E8F49_OFFSET UNITYSDK_OFFSET(0x171853F0)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_METHOD_2_9BDADB155738169F_OFFSET UNITYSDK_OFFSET(0x171852B0)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x171851D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBlockDataList_TypeDefinitionIndex = 17571;

	class DynamicLoadBlockDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicLoadBlockData*>* BLockDataList; // 0x10
		::System::String* EnvProfilePath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StageOverrideEnvProfilePath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicLoadBlockDatas*>* StageOverrideStagePath; // 0x28
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9BDADB155738169F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBlockDataList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBlockDataList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_METHOD_2_9BDADB155738169F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6EAA1EAE5A5E8F49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBlockDataList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBlockDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_METHOD_2_6EAA1EAE5A5E8F49_OFFSET))(a1, a2);
		}
	};
}
