#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_1BFACEF27F42B791_OFFSET UNITYSDK_OFFSET(0x1BBD9B10)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET UNITYSDK_OFFSET(0x1BBD99A0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_61C15D1B3219095E_OFFSET UNITYSDK_OFFSET(0x1BBD9B40)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_CF91AA566ED65394_OFFSET UNITYSDK_OFFSET(0x1BBD9960)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFuncUnlockCheck_TypeDefinitionIndex = 20553;

	class ByFuncUnlockCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF91AA566ED65394(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_CF91AA566ED65394_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B697906E3FFE90D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1BFACEF27F42B791(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_1BFACEF27F42B791_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_61C15D1B3219095E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_61C15D1B3219095E_OFFSET))(a1, a2);
		}
	};
}
