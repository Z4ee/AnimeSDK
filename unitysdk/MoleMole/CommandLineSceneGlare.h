#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class SceneGlareProfileContext; }

#define MOLEMOLE_COMMANDLINESCENEGLARE_METHOD_2_B1618326A96071B9_OFFSET UNITYSDK_OFFSET(0x12A3C270)
#define MOLEMOLE_COMMANDLINESCENEGLARE_METHOD_2_F7972A50AC4D3FFB_OFFSET UNITYSDK_OFFSET(0x12A3C380)
#define MOLEMOLE_COMMANDLINESCENEGLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A3C340)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineSceneGlare_TypeDefinitionIndex = 69627;

	class CommandLineSceneGlare : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::SceneGlareProfileContext*, ::MoleMole::CommandLineSceneGlare*>
	{
	public:
		::System::Nullable_1<::System::Boolean> IsSceneGlareOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineSceneGlare* Method_2_B1618326A96071B9(::MoleMole::SceneGlareProfileContext* a1)
		{
			return ((::MoleMole::CommandLineSceneGlare*(*)(::PVOID, ::MoleMole::SceneGlareProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE_METHOD_2_B1618326A96071B9_OFFSET))(this, a1);
		}

		::MoleMole::SceneGlareProfileContext* Method_2_F7972A50AC4D3FFB(::MoleMole::SceneGlareProfileContext* a1)
		{
			return ((::MoleMole::SceneGlareProfileContext*(*)(::PVOID, ::MoleMole::SceneGlareProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEGLARE_METHOD_2_F7972A50AC4D3FFB_OFFSET))(this, a1);
		}
	};
}
