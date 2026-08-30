#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_METHOD_2_D1633386120149C7_OFFSET UNITYSDK_OFFSET(0x1D488EE0)
#define RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D488FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookDevBlockLodTemplateCacheItem_TypeDefinitionIndex = 18981;

	class LookDevBlockLodTemplateCacheItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1633386120149C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LookDevBlockLodTemplateCacheItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LookDevBlockLodTemplateCacheItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_METHOD_2_D1633386120149C7_OFFSET))(a1, a2);
		}
	};
}
