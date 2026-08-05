#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUIGachaConfigContainer; }
namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B560E20)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B560E30)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_WRITE_OFFSET UNITYSDK_OFFSET(0x1B560FC0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B561120)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5610E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaPortrait_Class_3_2B74AA83424975C8_TypeDefinitionIndex = 40630;

	class ConfigUIGachaPortrait_Class_3_2B74AA83424975C8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUIGachaPortrait*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIGachaPortrait_Class_3_2B74AA83424975C8_TypeDefinitionIndex)->GetStaticField(0x4D460);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIGachaPortrait_Class_3_2B74AA83424975C8_TypeDefinitionIndex)->GetStaticField(0x4D468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIGachaPortrait*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIGachaPortrait*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CLASS_3_2B74AA83424975C8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
