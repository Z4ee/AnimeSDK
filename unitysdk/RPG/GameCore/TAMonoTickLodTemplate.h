#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LodDetail; }
namespace System { class String; }

#define RPG_GAMECORE_TAMONOTICKLODTEMPLATE_METHOD_2_B7F1EEFF4A99CD3A_OFFSET UNITYSDK_OFFSET(0x1B446E90)
#define RPG_GAMECORE_TAMONOTICKLODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TAMonoTickLodTemplate_TypeDefinitionIndex = 18448;

	class TAMonoTickLodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single DistanceFactor; // 0x18
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7F1EEFF4A99CD3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TAMonoTickLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TAMonoTickLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODTEMPLATE_METHOD_2_B7F1EEFF4A99CD3A_OFFSET))(a1, a2);
		}
	};
}
