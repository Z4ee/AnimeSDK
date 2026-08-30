#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_METHOD_3_54881AA75555D7AB_OFFSET UNITYSDK_OFFSET(0x1E33CC80)
#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_METHOD_3_581BE94589A0DD55_OFFSET UNITYSDK_OFFSET(0x1E33CC20)
#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33CC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStorageEffectParam_TypeDefinitionIndex = 15840;

	class ChimeraDuelStorageEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::System::String* StorageBaseKey; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_581BE94589A0DD55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStorageEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStorageEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_METHOD_3_581BE94589A0DD55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54881AA75555D7AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStorageEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStorageEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_METHOD_3_54881AA75555D7AB_OFFSET))(a1, a2);
		}
	};
}
