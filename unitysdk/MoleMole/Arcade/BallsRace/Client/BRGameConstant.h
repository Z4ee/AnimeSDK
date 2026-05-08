#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Arcade::BallsRace { class BrConstantCfg; }
namespace MoleMole::Arcade::BallsRace::Client { class BrClientConstantCfg; }

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C54EDC0)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_GET_INS_OFFSET UNITYSDK_OFFSET(0x1C54EDA0)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C54EE10)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_SET_INS_OFFSET UNITYSDK_OFFSET(0x1C54EDB0)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54EE60)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BRGameConstant_TypeDefinitionIndex = 83896;

	class BRGameConstant : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::MoleMole::Arcade::BallsRace::Client::BRGameConstant** StaticGet__Ins_k__BackingField()
		{
			return (::MoleMole::Arcade::BallsRace::Client::BRGameConstant**)Il2CppClass::FromTypeDefinitionIndex(BRGameConstant_TypeDefinitionIndex)->GetStaticField(0x49930);
		}
		::MoleMole::Arcade::BallsRace::BrConstantCfg* BrCoreCfg; // 0x58
		::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg* BrClientCfg; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::BallsRace::Client::BRGameConstant* get_Ins()
		{
			return ((::MoleMole::Arcade::BallsRace::Client::BRGameConstant*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_GET_INS_OFFSET))();
		}

		static ::System::Void set_Ins(::MoleMole::Arcade::BallsRace::Client::BRGameConstant* value)
		{
			return ((::System::Void(*)(::MoleMole::Arcade::BallsRace::Client::BRGameConstant*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_SET_INS_OFFSET))(value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRGAMECONSTANT_ONDESTROY_OFFSET))(this);
		}
	};
}
