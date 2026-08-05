#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigLightbarPreset; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVideoAudioMapping; }
namespace MoleMole { class ConfigVoiceToEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8BF904564CB9EFB5_METHOD_1_3181662B1020E708_OFFSET UNITYSDK_OFFSET(0x16444E20)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_3D6C8E86D9AA0641_OFFSET UNITYSDK_OFFSET(0x16443BA0)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_3F4F3405847DAD14_OFFSET UNITYSDK_OFFSET(0x16444E30)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_58FF144C3DDEE7B9_OFFSET UNITYSDK_OFFSET(0x164440B0)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x164440C0)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x164441B0)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_C1D922165E8CFA72_OFFSET UNITYSDK_OFFSET(0x16444E10)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_C9DC293B890FBB6B_OFFSET UNITYSDK_OFFSET(0x16443BB0)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_DDFF0821A765E5B2_OFFSET UNITYSDK_OFFSET(0x16444E40)
#define CLASS_1_8BF904564CB9EFB5_METHOD_1_ECBBE9B3A6800F22_OFFSET UNITYSDK_OFFSET(0x16443BC0)

inline static constexpr unsigned int Class_1_8BF904564CB9EFB5_TypeDefinitionIndex = 74055;

class Class_1_8BF904564CB9EFB5 : public ::System::Object
{
public:
	static ::MoleMole::ConfigRichtapSound** StaticGet_Field_1_7()
	{
		return (::MoleMole::ConfigRichtapSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7B0);
	}
	static ::MoleMole::ConfigLevelSound** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigLevelSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7B8);
	}
	static ::MoleMole::ConfigVideoAudioMapping** StaticGet_Field_1_5()
	{
		return (::MoleMole::ConfigVideoAudioMapping**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7C0);
	}
	static ::MoleMole::ConfigVoiceToEvent** StaticGet_Field_1_6()
	{
		return (::MoleMole::ConfigVoiceToEvent**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7C8);
	}
	static ::MoleMole::ConfigEffectSound** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigEffectSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7D0);
	}
	static ::MoleMole::ConfigEnvironmentSound** StaticGet_Field_1_2()
	{
		return (::MoleMole::ConfigEnvironmentSound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7D8);
	}
	static ::MoleMole::ConfigLightbarPreset** StaticGet_Field_1_4()
	{
		return (::MoleMole::ConfigLightbarPreset**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BF904564CB9EFB5_TypeDefinitionIndex)->GetStaticField(0x2E7E0);
	}

	static ::MoleMole::ConfigLevelSound* Method_1_3D6C8E86D9AA0641()
	{
		return ((::MoleMole::ConfigLevelSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_3D6C8E86D9AA0641_OFFSET))();
	}

	static ::MoleMole::ConfigVideoAudioMapping* Method_1_C9DC293B890FBB6B()
	{
		return ((::MoleMole::ConfigVideoAudioMapping*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_C9DC293B890FBB6B_OFFSET))();
	}

	static ::System::Boolean Method_1_ECBBE9B3A6800F22()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_ECBBE9B3A6800F22_OFFSET))();
	}

	static ::MoleMole::ConfigVoiceToEvent* Method_1_58FF144C3DDEE7B9()
	{
		return ((::MoleMole::ConfigVoiceToEvent*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_58FF144C3DDEE7B9_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigEffectSound* Method_1_C1D922165E8CFA72()
	{
		return ((::MoleMole::ConfigEffectSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_C1D922165E8CFA72_OFFSET))();
	}

	static ::MoleMole::ConfigLightbarPreset* Method_1_3181662B1020E708()
	{
		return ((::MoleMole::ConfigLightbarPreset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_3181662B1020E708_OFFSET))();
	}

	static ::MoleMole::ConfigRichtapSound* Method_1_3F4F3405847DAD14()
	{
		return ((::MoleMole::ConfigRichtapSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_3F4F3405847DAD14_OFFSET))();
	}

	static ::MoleMole::ConfigEnvironmentSound* Method_1_DDFF0821A765E5B2()
	{
		return ((::MoleMole::ConfigEnvironmentSound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BF904564CB9EFB5_METHOD_1_DDFF0821A765E5B2_OFFSET))();
	}
};
