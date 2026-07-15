#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_5A5A6238117B82FD_OFFSET UNITYSDK_OFFSET(0x1D0B4770)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_8337BFE36DA4BF3C_OFFSET UNITYSDK_OFFSET(0x1D0B47B0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_ACD443D84D18F7BE_OFFSET UNITYSDK_OFFSET(0x1D0B49E0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_C4C417CFC23DE4C8_OFFSET UNITYSDK_OFFSET(0x1D0B49B0)
#define RPG_GAMECORE_TARGETFETCHADVPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B47A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvProp_TypeDefinitionIndex = 23018;

	class TargetFetchAdvProp : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		static ::System::Boolean* StaticGet_AllowReturnNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TargetFetchAdvProp_TypeDefinitionIndex)->GetStaticField(0x7310);
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

		static ::System::Void Method_4_5A5A6238117B82FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_5A5A6238117B82FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8337BFE36DA4BF3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_8337BFE36DA4BF3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4C417CFC23DE4C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_C4C417CFC23DE4C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ACD443D84D18F7BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_ACD443D84D18F7BE_OFFSET))(a1, a2);
		}
	};
}
