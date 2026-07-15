#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_METHOD_2_2BD744A2105EFF53_OFFSET UNITYSDK_OFFSET(0x1BEA0D60)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA0EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCollectCoinTemplate_TypeDefinitionIndex = 18070;

	class FiveDimMiniGameCollectCoinTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CurveIndex; // 0x10
		::System::String* TemplateEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2BD744A2105EFF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_METHOD_2_2BD744A2105EFF53_OFFSET))(a1, a2);
		}
	};
}
