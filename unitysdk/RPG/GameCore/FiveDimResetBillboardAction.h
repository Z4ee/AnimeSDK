#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_4_B1370CFF58534917_OFFSET UNITYSDK_OFFSET(0x1D6A9B90)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_4_E819B53D8615A112_OFFSET UNITYSDK_OFFSET(0x1D6A9C40)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimResetBillboardAction_TypeDefinitionIndex = 18778;

	class FiveDimResetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 MapIconID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B1370CFF58534917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_4_B1370CFF58534917_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E819B53D8615A112(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_METHOD_4_E819B53D8615A112_OFFSET))(a1, a2);
		}
	};
}
