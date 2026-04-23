#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveMovementHandler; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA91FD90)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA91FDD0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISALLMOVEMENTHANDLERCOMPLETED_B__21_0_OFFSET UNITYSDK_OFFSET(0xA91FE00)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISANYMOVEMENTHANDLERMOVING_B__20_0_OFFSET UNITYSDK_OFFSET(0xA91FDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager___c_TypeDefinitionIndex = 63213;

	class MonoCurveMovementManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager___c_TypeDefinitionIndex)->GetStaticField(0x3CB90);
		}
		static ::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::CurveMovementHandler*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager___c_TypeDefinitionIndex)->GetStaticField(0x3CB98);
		}
		static ::RPG::Client::MonoCurveMovementManager___c** StaticGet___9()
		{
			return (::RPG::Client::MonoCurveMovementManager___c**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager___c_TypeDefinitionIndex)->GetStaticField(0x3CBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyMovementHandlerMoving_b__20_0(::RPG::Client::CurveMovementHandler* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISANYMOVEMENTHANDLERMOVING_B__20_0_OFFSET))(this, item);
		}

		::System::Boolean _IsAllMovementHandlerCompleted_b__21_0(::RPG::Client::CurveMovementHandler* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER___C__ISALLMOVEMENTHANDLERCOMPLETED_B__21_0_OFFSET))(this, item);
		}
	};
}
