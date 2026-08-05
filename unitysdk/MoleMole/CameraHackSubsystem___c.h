#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172733C0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17273400)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__REGISTERUIEVENTNOTIFYTYPE_B__17_0_OFFSET UNITYSDK_OFFSET(0x17273410)

namespace MoleMole
{
	inline static constexpr unsigned int CameraHackSubsystem___c_TypeDefinitionIndex = 46312;

	class CameraHackSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(CameraHackSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F300);
		}
		static ::MoleMole::CameraHackSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::CameraHackSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(CameraHackSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterUIEventNotifyType_b__17_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__REGISTERUIEVENTNOTIFYTYPE_B__17_0_OFFSET))(this, args);
		}
	};
}
