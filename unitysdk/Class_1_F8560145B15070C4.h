#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVoiceToEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F8560145B15070C4_METHOD_1_3D6C8E86D9AA0641_OFFSET UNITYSDK_OFFSET(0x13233690)
#define CLASS_1_F8560145B15070C4_METHOD_1_3F4F3405847DAD14_OFFSET UNITYSDK_OFFSET(0x13233580)
#define CLASS_1_F8560145B15070C4_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x13233590)
#define CLASS_1_F8560145B15070C4_METHOD_1_58FF144C3DDEE7B9_OFFSET UNITYSDK_OFFSET(0x132336A0)
#define CLASS_1_F8560145B15070C4_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x10FF1450)
#define CLASS_1_F8560145B15070C4_METHOD_1_C1D922165E8CFA72_OFFSET UNITYSDK_OFFSET(0x13233680)
#define CLASS_1_F8560145B15070C4_METHOD_1_DDFF0821A765E5B2_OFFSET UNITYSDK_OFFSET(0x13233570)
#define CLASS_1_F8560145B15070C4_METHOD_1_ECBBE9B3A6800F22_OFFSET UNITYSDK_OFFSET(0x13233080)

inline static constexpr unsigned int Class_1_F8560145B15070C4_TypeDefinitionIndex = 58740;

class Class_1_F8560145B15070C4 : public ::System::Object
{
public:
	static ::MoleMole::ConfigEnvironmentSound** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigEnvironmentSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8560145B15070C4_TypeDefinitionIndex)->GetStaticField(0x33330);
	}
	static ::MoleMole::ConfigEffectSound** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigEffectSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8560145B15070C4_TypeDefinitionIndex)->GetStaticField(0x33338);
	}
	static ::MoleMole::ConfigVoiceToEvent** StaticGet_Field_1_4()
	{
		return (::MoleMole::ConfigVoiceToEvent**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8560145B15070C4_TypeDefinitionIndex)->GetStaticField(0x33340);
	}
	static ::MoleMole::ConfigRichtapSound** StaticGet_Field_1_3()
	{
		return (::MoleMole::ConfigRichtapSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8560145B15070C4_TypeDefinitionIndex)->GetStaticField(0x33348);
	}
	static ::MoleMole::ConfigLevelSound** StaticGet_Field_1_2()
	{
		return (::MoleMole::ConfigLevelSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8560145B15070C4_TypeDefinitionIndex)->GetStaticField(0x33350);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ECBBE9B3A6800F22()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_ECBBE9B3A6800F22_OFFSET))();
	}

	static ::MoleMole::ConfigEnvironmentSound* Method_1_DDFF0821A765E5B2()
	{
		return ((::MoleMole::ConfigEnvironmentSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_DDFF0821A765E5B2_OFFSET))();
	}

	static ::MoleMole::ConfigRichtapSound* Method_1_3F4F3405847DAD14()
	{
		return ((::MoleMole::ConfigRichtapSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_3F4F3405847DAD14_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigEffectSound* Method_1_C1D922165E8CFA72()
	{
		return ((::MoleMole::ConfigEffectSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_C1D922165E8CFA72_OFFSET))();
	}

	static ::MoleMole::ConfigLevelSound* Method_1_3D6C8E86D9AA0641()
	{
		return ((::MoleMole::ConfigLevelSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_3D6C8E86D9AA0641_OFFSET))();
	}

	static ::MoleMole::ConfigVoiceToEvent* Method_1_58FF144C3DDEE7B9()
	{
		return ((::MoleMole::ConfigVoiceToEvent*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_METHOD_1_58FF144C3DDEE7B9_OFFSET))();
	}
};
