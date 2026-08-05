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

#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1708E890)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1708E8A0)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_WRITE_OFFSET UNITYSDK_OFFSET(0x1708EAC0)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1708EC70)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1708EC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightChangeSettings_Class_3_1BBFA15114E1EB2B_TypeDefinitionIndex = 80155;

	class UIAvatarLightChangeSettings_Class_3_1BBFA15114E1EB2B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarLightChangeSettings>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_Class_3_1BBFA15114E1EB2B_TypeDefinitionIndex)->GetStaticField(0x44FD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::EAvatarLightChangeType>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_Class_3_1BBFA15114E1EB2B_TypeDefinitionIndex)->GetStaticField(0x44FD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightChangeSettings_Class_3_1BBFA15114E1EB2B_TypeDefinitionIndex)->GetStaticField(0x44FE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightChangeSettings& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAvatarLightChangeSettings& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_CLASS_3_1BBFA15114E1EB2B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
