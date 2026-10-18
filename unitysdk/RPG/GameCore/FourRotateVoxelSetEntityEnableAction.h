#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_4_D2D49BD2E225E05A_OFFSET UNITYSDK_OFFSET(0x1D6C45C0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_4_EA0243439CFA4ED1_OFFSET UNITYSDK_OFFSET(0x1D6C4580)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C45B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityEnableAction_TypeDefinitionIndex = 16766;

	class FourRotateVoxelSetEntityEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10
		::Il2CppArray<::System::String*>* TriggerLayerNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA0243439CFA4ED1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_4_EA0243439CFA4ED1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2D49BD2E225E05A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_4_D2D49BD2E225E05A_OFFSET))(a1, a2);
		}
	};
}
