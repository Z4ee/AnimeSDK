#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_SURFLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141A55D0)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5610)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_0_OFFSET UNITYSDK_OFFSET(0x141A5640)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_1_OFFSET UNITYSDK_OFFSET(0x141A5650)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_0_OFFSET UNITYSDK_OFFSET(0x141A5620)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_1_OFFSET UNITYSDK_OFFSET(0x141A5630)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem___c_TypeDefinitionIndex = 56288;

	class SurfLogSubsystem___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__2_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48610);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__8_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48618);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__8_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48620);
		}
		static ::MoleMole::SurfLogSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::SurfLogSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48628);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartSurf_b__2_0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_0_OFFSET))(this, msg);
		}

		::System::Void _StartSurf_b__2_1(::Class_0_16E4307DCC419505_29* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_1_OFFSET))(this, error);
		}

		::System::Void _FinishAndSendRequest_b__8_0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_0_OFFSET))(this, msg);
		}

		::System::Void _FinishAndSendRequest_b__8_1(::Class_0_16E4307DCC419505_29* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_1_OFFSET))(this, error);
		}
	};
}
