#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIControllerExtension; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19711CC0)
#define MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19711CD0)
#define MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_WRITE_OFFSET UNITYSDK_OFFSET(0x197121D0)
#define MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19712500)
#define MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A__CTOR_OFFSET UNITYSDK_OFFSET(0x197124C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerExtension_Class_3_A01934DBF812537A_TypeDefinitionIndex = 81388;

	class UIControllerExtension_Class_3_A01934DBF812537A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIControllerExtension*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtension_Class_3_A01934DBF812537A_TypeDefinitionIndex)->GetStaticField(0x36B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtension_Class_3_A01934DBF812537A_TypeDefinitionIndex)->GetStaticField(0x36B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtension_Class_3_A01934DBF812537A_TypeDefinitionIndex)->GetStaticField(0x36B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(UIControllerExtension_Class_3_A01934DBF812537A_TypeDefinitionIndex)->GetStaticField(0x36B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIControllerExtension*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerExtension*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIControllerExtension*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerExtension*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CLASS_3_A01934DBF812537A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
