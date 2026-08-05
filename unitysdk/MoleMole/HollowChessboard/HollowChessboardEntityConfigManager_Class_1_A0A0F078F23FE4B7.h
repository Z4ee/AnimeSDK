#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C902C5428A21466B_2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CLASS_1_A0A0F078F23FE4B7_METHOD_1_3B935EDF35B815B0_OFFSET UNITYSDK_OFFSET(0x13A94340)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CLASS_1_A0A0F078F23FE4B7__CTOR_OFFSET UNITYSDK_OFFSET(0x13A94330)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager_Class_1_A0A0F078F23FE4B7_TypeDefinitionIndex = 68267;

	class HollowChessboardEntityConfigManager_Class_1_A0A0F078F23FE4B7 : public ::System::Object
	{
	public:
		::System::Action* Field_1_1; // 0x10
		::System::Action_1<::Class_1_C902C5428A21466B_2*>* Field_1_0; // 0x18
		::System::Int32 Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CLASS_1_A0A0F078F23FE4B7__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3B935EDF35B815B0(::Class_1_C902C5428A21466B_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C902C5428A21466B_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_CLASS_1_A0A0F078F23FE4B7_METHOD_1_3B935EDF35B815B0_OFFSET))(this, a1);
		}
	};
}
