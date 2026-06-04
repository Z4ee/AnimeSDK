#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_224B7DA60F6CCAD1_OFFSET UNITYSDK_OFFSET(0x194F4D20)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_A00970AAEE14EEF7_OFFSET UNITYSDK_OFFSET(0x194F4B00)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_D3F569C1BA1FBB9B_OFFSET UNITYSDK_OFFSET(0x194F4DA0)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_F2E89F502CBA0D4D_OFFSET UNITYSDK_OFFSET(0x194F4A20)
#define RPG_GAMECORE_BYAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F4AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAvatarBaseType_TypeDefinitionIndex = 21329;

	class ByAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x20
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2E89F502CBA0D4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_F2E89F502CBA0D4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A00970AAEE14EEF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_A00970AAEE14EEF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_224B7DA60F6CCAD1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_224B7DA60F6CCAD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3F569C1BA1FBB9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_D3F569C1BA1FBB9B_OFFSET))(a1, a2);
		}
	};
}
