#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10E50AD0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10E50AE0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10E51190)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E515B0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E51570)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventShootingGamePlayConfig_SummerEventShootingGamePlayConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 48290;

	class SummerEventShootingGamePlayConfig_SummerEventShootingGamePlayConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SummerEventShootingGamePlayConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventShootingGamePlayConfig_SummerEventShootingGamePlayConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventShootingGamePlayConfig_SummerEventShootingGamePlayConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37A98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SummerEventShootingGamePlayConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SummerEventShootingGamePlayConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
