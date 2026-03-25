#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }

#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_0C04EB184C503A58_OFFSET UNITYSDK_OFFSET(0x177BBB70)
#define RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_CFC9D2CD3625BB3E_OFFSET UNITYSDK_OFFSET(0x177BBC30)
#define RPG_GAMECORE_TARGETFETCHADVPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x177BBBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvProp_TypeDefinitionIndex = 22137;

	class TargetFetchAdvProp : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		static ::System::Boolean* StaticGet_AllowReturnNull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TargetFetchAdvProp_TypeDefinitionIndex)->GetStaticField(0xC7E0);
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

		static ::System::Void Method_4_0C04EB184C503A58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_0C04EB184C503A58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFC9D2CD3625BB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_METHOD_4_CFC9D2CD3625BB3E_OFFSET))(a1, a2);
		}
	};
}
