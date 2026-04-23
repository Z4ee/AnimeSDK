#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_METHOD_2_A89A5FEA17BD3456_OFFSET UNITYSDK_OFFSET(0x1890B100)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1890B220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCollectCoinTemplate_TypeDefinitionIndex = 17863;

	class FiveDimMiniGameCollectCoinTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CurveIndex; // 0x10
		::System::String* TemplateEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A89A5FEA17BD3456(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_METHOD_2_A89A5FEA17BD3456_OFFSET))(a1, a2);
		}
	};
}
