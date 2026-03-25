#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCHESSBASE_METHOD_4_28650EA1C4A75E70_OFFSET UNITYSDK_OFFSET(0x177BDB60)
#define RPG_GAMECORE_TARGETFETCHCHESSBASE_METHOD_4_C3DA8274581E94CE_OFFSET UNITYSDK_OFFSET(0x177B3B40)
#define RPG_GAMECORE_TARGETFETCHCHESSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchChessBase_TypeDefinitionIndex = 22168;

	class TargetFetchChessBase : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_28650EA1C4A75E70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSBASE_METHOD_4_28650EA1C4A75E70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C3DA8274581E94CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSBASE_METHOD_4_C3DA8274581E94CE_OFFSET))(a1, a2);
		}
	};
}
