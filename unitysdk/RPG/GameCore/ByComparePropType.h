#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_52607ADA11C0C3F4_OFFSET UNITYSDK_OFFSET(0x1CEF42D0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_A779CC2F2BB28AAF_OFFSET UNITYSDK_OFFSET(0x1CEF4510)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_B2475DA4C673BD29_OFFSET UNITYSDK_OFFSET(0x1CEF4310)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_DFDB9AA3EEDF2329_OFFSET UNITYSDK_OFFSET(0x1CEF44E0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF4300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropType_TypeDefinitionIndex = 20079;

	class ByComparePropType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::PropType>* Types; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_52607ADA11C0C3F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_52607ADA11C0C3F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2475DA4C673BD29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_B2475DA4C673BD29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DFDB9AA3EEDF2329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_DFDB9AA3EEDF2329_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A779CC2F2BB28AAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_A779CC2F2BB28AAF_OFFSET))(a1, a2);
		}
	};
}
