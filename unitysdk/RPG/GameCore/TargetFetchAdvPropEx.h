#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvPropFetchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_114ADA0F957EB749_OFFSET UNITYSDK_OFFSET(0x1E16A0C0)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_6B2744F64D3AFFD7_OFFSET UNITYSDK_OFFSET(0x1E16A0F0)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_C7E0062DB919BCB2_OFFSET UNITYSDK_OFFSET(0x1E169DA0)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_D7531ED0C64007BC_OFFSET UNITYSDK_OFFSET(0x1E169DD0)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E16AA10)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E152160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPropEx_TypeDefinitionIndex = 23601;

	class TargetFetchAdvPropEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvPropFetchType FetchType; // 0x10
		::RPG::GameCore::DynamicString* SinglePropKey; // 0x18
		::RPG::GameCore::FetchAdvPropData* SinglePropID; // 0x20
		::RPG::GameCore::DynamicString* SingleUniqueName; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiPropKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FetchAdvPropData*>* MultiPropID; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiUniqueName; // 0x40
		::RPG::GameCore::DynamicFloat* PropGroup; // 0x48
		::RPG::GameCore::DynamicFloat* PropIDInOwnerGroup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C7E0062DB919BCB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPropEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPropEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_C7E0062DB919BCB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7531ED0C64007BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_D7531ED0C64007BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_114ADA0F957EB749(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_114ADA0F957EB749_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B2744F64D3AFFD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_METHOD_4_6B2744F64D3AFFD7_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_TOSTRING_OFFSET))(this);
		}
	};
}
