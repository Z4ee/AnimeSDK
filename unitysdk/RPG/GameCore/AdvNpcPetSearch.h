#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVNPCPETSEARCH_METHOD_3_362164B95CEA7F3B_OFFSET UNITYSDK_OFFSET(0x1865B210)
#define RPG_GAMECORE_ADVNPCPETSEARCH_METHOD_3_89CB789BC8459EF6_OFFSET UNITYSDK_OFFSET(0x1865B170)
#define RPG_GAMECORE_ADVNPCPETSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1865B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcPetSearch_TypeDefinitionIndex = 18909;

	class AdvNpcPetSearch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartSearchCallback; // 0x18
		::RPG::GameCore::DynamicString* OnFoundTreatureString; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFoundTreatureCallback; // 0x28
		::RPG::GameCore::DynamicString* OnLeaveSearchString; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveSearchCallback; // 0x38
		::System::Single DistanceProtection; // 0x40
		::System::Single TransferDistance; // 0x44
		::System::Single ToFarLeaveDistance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89CB789BC8459EF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcPetSearch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcPetSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH_METHOD_3_89CB789BC8459EF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_362164B95CEA7F3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH_METHOD_3_362164B95CEA7F3B_OFFSET))(a1, a2);
		}
	};
}
