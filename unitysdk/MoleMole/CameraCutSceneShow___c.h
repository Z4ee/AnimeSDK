#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CAMERACUTSCENESHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B94190)
#define MOLEMOLE_CAMERACUTSCENESHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B941D0)
#define MOLEMOLE_CAMERACUTSCENESHOW___C__ONPROCESS_B__5_0_OFFSET UNITYSDK_OFFSET(0x12B941E0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraCutSceneShow___c_TypeDefinitionIndex = 77974;

	class CameraCutSceneShow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CameraCutSceneShow___c_TypeDefinitionIndex)->GetStaticField(0x33BF0);
		}
		static ::MoleMole::CameraCutSceneShow___c** StaticGet___9()
		{
			return (::MoleMole::CameraCutSceneShow___c**)Il2CppClass::FromTypeDefinitionIndex(CameraCutSceneShow___c_TypeDefinitionIndex)->GetStaticField(0x33BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW___C__ONPROCESS_B__5_0_OFFSET))(this);
		}
	};
}
