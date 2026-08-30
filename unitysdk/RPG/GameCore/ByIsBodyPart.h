#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPART_METHOD_4_0EB4546BEE028812_OFFSET UNITYSDK_OFFSET(0x1CF31190)
#define RPG_GAMECORE_BYISBODYPART_METHOD_4_4032B792DADECEDB_OFFSET UNITYSDK_OFFSET(0x1CF30EB0)
#define RPG_GAMECORE_BYISBODYPART_METHOD_4_425C424AF8B6EFD5_OFFSET UNITYSDK_OFFSET(0x1CF30BD0)
#define RPG_GAMECORE_BYISBODYPART_METHOD_4_D5092F1293684E94_OFFSET UNITYSDK_OFFSET(0x1CF30D30)
#define RPG_GAMECORE_BYISBODYPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF30D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPart_TypeDefinitionIndex = 23047;

	class ByIsBodyPart : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_425C424AF8B6EFD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_425C424AF8B6EFD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5092F1293684E94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_D5092F1293684E94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4032B792DADECEDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_4032B792DADECEDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0EB4546BEE028812(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_0EB4546BEE028812_OFFSET))(a1, a2);
		}
	};
}
