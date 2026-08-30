#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET UNITYSDK_OFFSET(0x1BBE9CF0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_8F32B9F609B767B7_OFFSET UNITYSDK_OFFSET(0x1BBE9CA0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_F10D6FBB06FF0492_OFFSET UNITYSDK_OFFSET(0x1BBE9E90)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_F7BECA12349658E5_OFFSET UNITYSDK_OFFSET(0x1BBE9ED0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE9CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTimelinePerform_TypeDefinitionIndex = 23041;

	class ByInTimelinePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean OnlyCloseupShot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F32B9F609B767B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_8F32B9F609B767B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30D96221BE09F8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_30D96221BE09F8C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F10D6FBB06FF0492(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_F10D6FBB06FF0492_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7BECA12349658E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_METHOD_4_F7BECA12349658E5_OFFSET))(a1, a2);
		}
	};
}
