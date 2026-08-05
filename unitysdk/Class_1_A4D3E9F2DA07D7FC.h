#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_02A96DECADA5273E_OFFSET UNITYSDK_OFFSET(0x120F2EE0)
#define CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_1E6B5D948B290800_OFFSET UNITYSDK_OFFSET(0x120F3030)
#define CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_BA3FF423D670F592_OFFSET UNITYSDK_OFFSET(0x120F27C0)
#define CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_E9AC32AA74398EEE_OFFSET UNITYSDK_OFFSET(0x120F3140)
#define CLASS_1_A4D3E9F2DA07D7FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x120F26A0)

inline static constexpr unsigned int Class_1_A4D3E9F2DA07D7FC_TypeDefinitionIndex = 55911;

class Class_1_A4D3E9F2DA07D7FC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D3E9F2DA07D7FC_TypeDefinitionIndex)->GetStaticField(0x2EFE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D3E9F2DA07D7FC_TypeDefinitionIndex)->GetStaticField(0x2EFE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_BA3FF423D670F592(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_BA3FF423D670F592_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* Method_1_02A96DECADA5273E(::System::String* a1)
	{
		return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_02A96DECADA5273E_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E6B5D948B290800(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_1E6B5D948B290800_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Cameras::OverShoulderCameraConfig* Method_1_E9AC32AA74398EEE(::System::String* a1)
	{
		return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4D3E9F2DA07D7FC_METHOD_1_E9AC32AA74398EEE_OFFSET))(a1);
	}
};
