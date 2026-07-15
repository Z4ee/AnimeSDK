#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_1928C942BE7E5075_OFFSET UNITYSDK_OFFSET(0x1B9E4DB0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_5AD458A745B8CABE_OFFSET UNITYSDK_OFFSET(0x1B9E4BE0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_6D24379EB333B31F_OFFSET UNITYSDK_OFFSET(0x1B9E4C20)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_D1DD2C41DB6F3A72_OFFSET UNITYSDK_OFFSET(0x1B9E4DE0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E4C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInSpineAnim_TypeDefinitionIndex = 9965;

	class ByPlantFesIsInSpineAnim : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5AD458A745B8CABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_5AD458A745B8CABE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D24379EB333B31F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_6D24379EB333B31F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1928C942BE7E5075(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_1928C942BE7E5075_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1DD2C41DB6F3A72(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_D1DD2C41DB6F3A72_OFFSET))(a1, a2);
		}
	};
}
