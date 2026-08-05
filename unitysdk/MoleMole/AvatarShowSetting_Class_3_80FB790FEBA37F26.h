#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UIModelBgSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12C9FF90)
#define MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12C9FFA0)
#define MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_WRITE_OFFSET UNITYSDK_OFFSET(0x12CA05E0)
#define MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CA09B0)
#define MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA0970)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex = 42544;

	class AvatarShowSetting_Class_3_80FB790FEBA37F26 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x509F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_Class_3_80FB790FEBA37F26_TypeDefinitionIndex)->GetStaticField(0x50A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarShowSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AvatarShowSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_CLASS_3_80FB790FEBA37F26_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
