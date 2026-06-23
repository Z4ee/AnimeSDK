#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x1D789EB0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D789E60)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D789EA0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameConsole___c_TypeDefinitionIndex = 89397;

	class BallPitGameConsole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BallPitGameConsole___c_TypeDefinitionIndex)->GetStaticField(0x4E020);
		}
		static ::MoleMole::Arcade::BallPit::BallPitGameConsole___c** StaticGet___9()
		{
			return (::MoleMole::Arcade::BallPit::BallPitGameConsole___c**)Il2CppClass::FromTypeDefinitionIndex(BallPitGameConsole___c_TypeDefinitionIndex)->GetStaticField(0x4E028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_6F1B0A02FDC49991(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C_METHOD_1_6F1B0A02FDC49991_OFFSET))(this, a1);
		}
	};
}
