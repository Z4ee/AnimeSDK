#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_09BBD74003FF13B3_OFFSET UNITYSDK_OFFSET(0x193B2AC0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_3C78C874B0CE6B84_OFFSET UNITYSDK_OFFSET(0x193B2A40)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_6D24379EB333B31F_OFFSET UNITYSDK_OFFSET(0x193B28B0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_E323203E39344341_OFFSET UNITYSDK_OFFSET(0x193B27E0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x193B2860)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInSpineAnim_TypeDefinitionIndex = 9950;

	class ByPlantFesIsInSpineAnim : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E323203E39344341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_E323203E39344341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D24379EB333B31F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_6D24379EB333B31F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C78C874B0CE6B84(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_3C78C874B0CE6B84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09BBD74003FF13B3(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_09BBD74003FF13B3_OFFSET))(a1, a2);
		}
	};
}
