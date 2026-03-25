#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_6D24379EB333B31F_OFFSET UNITYSDK_OFFSET(0x16E849F0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_METHOD_4_E323203E39344341_OFFSET UNITYSDK_OFFSET(0x16E84920)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16E849A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInSpineAnim_TypeDefinitionIndex = 9974;

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
	};
}
