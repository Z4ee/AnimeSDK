#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGECAPTUREALIASDATA_METHOD_2_A05096C1207BCD7E_OFFSET UNITYSDK_OFFSET(0x1D0BE370)
#define RPG_GAMECORE_STAGECAPTUREALIASDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BE510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageCaptureAliasData_TypeDefinitionIndex = 18938;

	class StageCaptureAliasData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Alias; // 0x10
		::System::String* PrefabName; // 0x18
		::System::String* HierarchyPath; // 0x20
		::RPG::MVector3 Position; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A05096C1207BCD7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageCaptureAliasData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageCaptureAliasData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASDATA_METHOD_2_A05096C1207BCD7E_OFFSET))(a1, a2);
		}
	};
}
