#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole { class ConfigUIStoreCamera; }
namespace MoleMole { class UIStorePageConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_161B4A1EE5E2ACDA_OFFSET UNITYSDK_OFFSET(0x16B1B300)
#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_16F84A16FC79506C_OFFSET UNITYSDK_OFFSET(0x16B1B700)
#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x16B1B490)
#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x16B1BA20)
#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_AF318C50ABD4D499_OFFSET UNITYSDK_OFFSET(0x16B1B890)
#define CLASS_1_B81EA9ECDC5718B8_METHOD_1_BB1F821863E871BF_OFFSET UNITYSDK_OFFSET(0x16B1B6B0)

inline static constexpr unsigned int Class_1_B81EA9ECDC5718B8_TypeDefinitionIndex = 38966;

class Class_1_B81EA9ECDC5718B8 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIStoreCamera** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIStoreCamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B81EA9ECDC5718B8_TypeDefinitionIndex)->GetStaticField(0x30700);
	}

	static ::MoleMole::UIVirtualCameraConfigs* Method_1_161B4A1EE5E2ACDA(::System::String* a1)
	{
		return ((::MoleMole::UIVirtualCameraConfigs*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_161B4A1EE5E2ACDA_OFFSET))(a1);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUIStoreCamera* Method_1_BB1F821863E871BF()
	{
		return ((::MoleMole::ConfigUIStoreCamera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_BB1F821863E871BF_OFFSET))();
	}

	static ::MoleMole::ConfigCameraTelescope* Method_1_16F84A16FC79506C(::System::String* a1)
	{
		return ((::MoleMole::ConfigCameraTelescope*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_16F84A16FC79506C_OFFSET))(a1);
	}

	static ::MoleMole::UIStorePageConfig* Method_1_AF318C50ABD4D499(::System::String* a1)
	{
		return ((::MoleMole::UIStorePageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_AF318C50ABD4D499_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
