#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_5F41A0EC9D858BD8_OFFSET UNITYSDK_OFFSET(0x188EA1C0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_FB9405CDB49D0C77_OFFSET UNITYSDK_OFFSET(0x188EA280)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x188EA230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddGlobalTimeScale_TypeDefinitionIndex = 20334;

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

		static ::System::Void Method_3_5F41A0EC9D858BD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_5F41A0EC9D858BD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB9405CDB49D0C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_METHOD_3_FB9405CDB49D0C77_OFFSET))(a1, a2);
		}
	};
}
