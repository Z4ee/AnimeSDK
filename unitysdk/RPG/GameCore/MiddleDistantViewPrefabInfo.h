#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MDVRegionVariant; }

#define RPG_GAMECORE_MIDDLEDISTANTVIEWPREFABINFO_METHOD_2_1F8A787D215B5357_OFFSET UNITYSDK_OFFSET(0x18B27B50)
#define RPG_GAMECORE_MIDDLEDISTANTVIEWPREFABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B27CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiddleDistantViewPrefabInfo_TypeDefinitionIndex = 18119;

	class MiddleDistantViewPrefabInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 AttachPrefabInfoIndex; // 0x10
		::Il2CppArray<::RPG::GameCore::MDVRegionVariant*>* RegionVarients; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEDISTANTVIEWPREFABINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1F8A787D215B5357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiddleDistantViewPrefabInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiddleDistantViewPrefabInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEDISTANTVIEWPREFABINFO_METHOD_2_1F8A787D215B5357_OFFSET))(a1, a2);
		}
	};
}
