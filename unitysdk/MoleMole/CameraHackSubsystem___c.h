#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D25950)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D25990)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___C__REGISTERUIEVENTNOTIFYTYPE_B__11_0_OFFSET UNITYSDK_OFFSET(0x17D259A0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraHackSubsystem___c_TypeDefinitionIndex = 40564;

	class CameraHackSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(CameraHackSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E640);
		}
		static ::MoleMole::CameraHackSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::CameraHackSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(CameraHackSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterUIEventNotifyType_b__11_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___C__REGISTERUIEVENTNOTIFYTYPE_B__11_0_OFFSET))(this, args);
		}
	};
}
