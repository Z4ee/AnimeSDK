#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAvatarAnimationSetting; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14E55240)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14E55250)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14E55650)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E558F0)
#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E558B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 54222;

	class UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarAnimatorParamsSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimationSetting*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimationSetting*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41F10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41F18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41F20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarAnimatorParamsSetting_UIAvatarAnimatorParamsSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41F28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarAnimatorParamsSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAvatarAnimatorParamsSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING_UIAVATARANIMATORPARAMSSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
