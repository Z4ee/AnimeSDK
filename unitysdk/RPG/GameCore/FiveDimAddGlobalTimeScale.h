#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_0566348D78770DFE_OFFSET UNITYSDK_OFFSET(0x19726920)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_6E3E58B74733B649_OFFSET UNITYSDK_OFFSET(0x197269E0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x19726990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddGlobalTimeScale_TypeDefinitionIndex = 20253;

	class FiveDimAddGlobalTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TimeScaleKey; // 0x18
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicString*>* IgnoreEntityID; // 0x28
		::System::Boolean IsPlayerIgnore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0566348D78770DFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_0566348D78770DFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E3E58B74733B649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_6E3E58B74733B649_OFFSET))(a1, a2);
		}
	};
}
