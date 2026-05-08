#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_JOINROOMFROMSESSIONPARAM_METHOD_1_5D2407D2674205CA_OFFSET UNITYSDK_OFFSET(0x182209B0)
#define MOLEMOLE_JOINROOMFROMSESSIONPARAM_METHOD_1_A4F84CDC5C4AD200_OFFSET UNITYSDK_OFFSET(0x18220AF0)
#define MOLEMOLE_JOINROOMFROMSESSIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x182209A0)

namespace MoleMole
{
	inline static constexpr unsigned int JoinRoomFromSessionParam_TypeDefinitionIndex = 52337;

	class JoinRoomFromSessionParam : public ::System::Object
	{
	public:
		::System::UInt64 roomId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::String* Method_1_5D2407D2674205CA(::MoleMole::JoinRoomFromSessionParam* a1)
		{
			return ((::System::String*(*)(::MoleMole::JoinRoomFromSessionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM_METHOD_1_5D2407D2674205CA_OFFSET))(a1);
		}

		static ::MoleMole::JoinRoomFromSessionParam* Method_1_A4F84CDC5C4AD200(::System::String* a1)
		{
			return ((::MoleMole::JoinRoomFromSessionParam*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM_METHOD_1_A4F84CDC5C4AD200_OFFSET))(a1);
		}
	};
}
