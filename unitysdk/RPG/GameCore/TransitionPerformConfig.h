#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformTaskSeq; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRANSITIONPERFORMCONFIG_METHOD_2_FC4998E0B884F706_OFFSET UNITYSDK_OFFSET(0x178B3CA0)
#define RPG_GAMECORE_TRANSITIONPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178B3E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransitionPerformConfig_TypeDefinitionIndex = 16229;

	class TransitionPerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PerformTaskSeq*>* BeforeEnterMapPerformConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PerformTaskSeq*>* AfterEnterMapPerformConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITIONPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FC4998E0B884F706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransitionPerformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransitionPerformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITIONPERFORMCONFIG_METHOD_2_FC4998E0B884F706_OFFSET))(a1, a2);
		}
	};
}
