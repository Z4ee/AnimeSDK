#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtDirConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_38A6689AD015F774_OFFSET UNITYSDK_OFFSET(0x1B88F9A0)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_59BE755F21326139_OFFSET UNITYSDK_OFFSET(0x1B88F790)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_79BF78ECAD8883C4_OFFSET UNITYSDK_OFFSET(0x1B88F750)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_BE12A9647E1A48E3_OFFSET UNITYSDK_OFFSET(0x1B88F970)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtAngleBetween_TypeDefinitionIndex = 23413;

	class VE_RtAngleBetween : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtDirConfig* Dir1; // 0x20
		::RPG::GameCore::RtDirConfig* Dir2; // 0x28
		::System::Boolean Abs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79BF78ECAD8883C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtAngleBetween*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtAngleBetween*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_79BF78ECAD8883C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59BE755F21326139(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_59BE755F21326139_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE12A9647E1A48E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_BE12A9647E1A48E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38A6689AD015F774(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_38A6689AD015F774_OFFSET))(a1, a2);
		}
	};
}
