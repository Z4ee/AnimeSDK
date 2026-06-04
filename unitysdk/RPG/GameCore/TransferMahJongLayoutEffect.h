#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_METHOD_3_5238B526D014A5D4_OFFSET UNITYSDK_OFFSET(0x19DFC8C0)
#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_METHOD_3_CCF4438F76714D63_OFFSET UNITYSDK_OFFSET(0x19DFC840)
#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DFC890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransferMahJongLayoutEffect_TypeDefinitionIndex = 21873;

	class TransferMahJongLayoutEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SourceUniqueEffectName; // 0x18
		::System::String* TargetUniqueEffectName; // 0x20
		::System::Boolean IsFade; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCF4438F76714D63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransferMahJongLayoutEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransferMahJongLayoutEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_METHOD_3_CCF4438F76714D63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5238B526D014A5D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransferMahJongLayoutEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransferMahJongLayoutEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_METHOD_3_5238B526D014A5D4_OFFSET))(a1, a2);
		}
	};
}
