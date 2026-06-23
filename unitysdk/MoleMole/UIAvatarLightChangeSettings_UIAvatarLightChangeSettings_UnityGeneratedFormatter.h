#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17A43680)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17A43690)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17A43900)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A43AF0)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A43A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightChangeSettings_UIAvatarLightChangeSettings_UnityGeneratedFormatter_TypeDefinitionIndex = 49803;

	class UIAvatarLightChangeSettings_UIAvatarLightChangeSettings_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarLightChangeSettings>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_UIAvatarLightChangeSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48720);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_UIAvatarLightChangeSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48728);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_UIAvatarLightChangeSettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightChangeSettings& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAvatarLightChangeSettings& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_UIAVATARLIGHTCHANGESETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
