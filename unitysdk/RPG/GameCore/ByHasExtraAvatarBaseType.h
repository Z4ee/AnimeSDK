#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE_METHOD_4_0402A01A5990E0C9_OFFSET UNITYSDK_OFFSET(0x17023A80)
#define RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE_METHOD_4_5E51C6DCB9658FBF_OFFSET UNITYSDK_OFFSET(0x170239B0)
#define RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17023A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasExtraAvatarBaseType_TypeDefinitionIndex = 20745;

	class ByHasExtraAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5E51C6DCB9658FBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasExtraAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasExtraAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE_METHOD_4_5E51C6DCB9658FBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0402A01A5990E0C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasExtraAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasExtraAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASEXTRAAVATARBASETYPE_METHOD_4_0402A01A5990E0C9_OFFSET))(a1, a2);
		}
	};
}
