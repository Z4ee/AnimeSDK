#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RANDOM_METHOD_3_258C5F8635893DE3_OFFSET UNITYSDK_OFFSET(0x1B88F1C0)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_3C789168D44C7839_OFFSET UNITYSDK_OFFSET(0x1B88EFE0)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_5C7994F660A29AC4_OFFSET UNITYSDK_OFFSET(0x1B88EFA0)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_A0201EBC8784EC74_OFFSET UNITYSDK_OFFSET(0x1B88F1F0)
#define RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88EFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Random_TypeDefinitionIndex = 23189;

	class VE_Random : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x28
		::System::Boolean IsInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C7994F660A29AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_5C7994F660A29AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C789168D44C7839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_3C789168D44C7839_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_258C5F8635893DE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_258C5F8635893DE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0201EBC8784EC74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_A0201EBC8784EC74_OFFSET))(a1, a2);
		}
	};
}
