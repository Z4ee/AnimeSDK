#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_663A643FC4520AD4_OFFSET UNITYSDK_OFFSET(0x1D308400)
#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_7847F8D4053CB17C_OFFSET UNITYSDK_OFFSET(0x1D3085B0)
#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_8922315BEA21C8EF_OFFSET UNITYSDK_OFFSET(0x1D308440)
#define RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_B1E69E7E59345385_OFFSET UNITYSDK_OFFSET(0x1D308580)
#define RPG_CLIENT_BYPLANTFESISINMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D308430)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInMove_TypeDefinitionIndex = 10269;

	class ByPlantFesIsInMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_663A643FC4520AD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_663A643FC4520AD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8922315BEA21C8EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_8922315BEA21C8EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B1E69E7E59345385(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_B1E69E7E59345385_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7847F8D4053CB17C(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_METHOD_4_7847F8D4053CB17C_OFFSET))(a1, a2);
		}
	};
}
