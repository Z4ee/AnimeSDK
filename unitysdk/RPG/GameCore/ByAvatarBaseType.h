#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_02318B1A68BFC549_OFFSET UNITYSDK_OFFSET(0x1C2F5580)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_47E60F29AEA7FDE6_OFFSET UNITYSDK_OFFSET(0x1C2F52D0)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_71C6C6AD8EB30C3F_OFFSET UNITYSDK_OFFSET(0x1C2F5540)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_A00970AAEE14EEF7_OFFSET UNITYSDK_OFFSET(0x1C2F5320)
#define RPG_GAMECORE_BYAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F5310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAvatarBaseType_TypeDefinitionIndex = 22311;

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

		static ::System::Void Method_4_47E60F29AEA7FDE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_47E60F29AEA7FDE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A00970AAEE14EEF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_A00970AAEE14EEF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71C6C6AD8EB30C3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_71C6C6AD8EB30C3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02318B1A68BFC549(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_02318B1A68BFC549_OFFSET))(a1, a2);
		}
	};
}
