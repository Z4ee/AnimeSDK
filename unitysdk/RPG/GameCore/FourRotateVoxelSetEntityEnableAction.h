#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_B1C88C14F689959C_OFFSET UNITYSDK_OFFSET(0x1D118320)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_CD6FD6E0CAC76657_OFFSET UNITYSDK_OFFSET(0x1D118360)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D118350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityEnableAction_TypeDefinitionIndex = 16590;

	class FourRotateVoxelSetEntityEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10
		::Il2CppArray<::System::String*>* TriggerLayerNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1C88C14F689959C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_B1C88C14F689959C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD6FD6E0CAC76657(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_METHOD_3_CD6FD6E0CAC76657_OFFSET))(a1, a2);
		}
	};
}
