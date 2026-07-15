#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGELODEDITORCONFIG_METHOD_2_9EE9587EB386AF1F_OFFSET UNITYSDK_OFFSET(0x1B0B1280)
#define RPG_GAMECORE_STAGELODEDITORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B13F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageLodEditorConfig_TypeDefinitionIndex = 18454;

	class StageLodEditorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SourceNormDistanceLodMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* RuntimeExceptionNormDistanceLodMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODEDITORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9EE9587EB386AF1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageLodEditorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageLodEditorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODEDITORCONFIG_METHOD_2_9EE9587EB386AF1F_OFFSET))(a1, a2);
		}
	};
}
