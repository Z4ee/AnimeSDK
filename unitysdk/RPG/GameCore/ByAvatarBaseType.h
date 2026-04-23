#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_D013E7ABFD926BDF_OFFSET UNITYSDK_OFFSET(0x1871F470)
#define RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_F62EBC277D2B9FEE_OFFSET UNITYSDK_OFFSET(0x1871F550)
#define RPG_GAMECORE_BYAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAvatarBaseType_TypeDefinitionIndex = 21445;

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

		static ::System::Void Method_4_D013E7ABFD926BDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_D013E7ABFD926BDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F62EBC277D2B9FEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_METHOD_4_F62EBC277D2B9FEE_OFFSET))(a1, a2);
		}
	};
}
