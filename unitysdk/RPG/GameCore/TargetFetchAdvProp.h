#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_721AAE13ED3F52F8_OFFSET UNITYSDK_OFFSET(0x19D039D0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_8337BFE36DA4BF3C_OFFSET UNITYSDK_OFFSET(0x19CF5BC0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_E0B218F844E3062A_OFFSET UNITYSDK_OFFSET(0x19D09610)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_E1A5DDCD0C55A180_OFFSET UNITYSDK_OFFSET(0x19D09680)
#define RPG_GAMECORE_TARGETFETCHADVPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF5B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvProp_TypeDefinitionIndex = 22555;

	class TargetFetchAdvProp : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		static ::System::Boolean* StaticGet_AllowReturnNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TargetFetchAdvProp_TypeDefinitionIndex)->GetStaticField(0x9B60);
		}
		::System::Boolean TargetIsOwner; // 0x10
		::Il2CppArray<::RPG::GameCore::FetchAdvPropData*>* MultiGroupFetch; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiGroupFetchByUniqueName; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiGroupFetchByPropKey; // 0x28
		::RPG::GameCore::DynamicString* FetchByPropKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0B218F844E3062A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_E0B218F844E3062A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8337BFE36DA4BF3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_8337BFE36DA4BF3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721AAE13ED3F52F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_721AAE13ED3F52F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E1A5DDCD0C55A180(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_E1A5DDCD0C55A180_OFFSET))(a1, a2);
		}
	};
}
