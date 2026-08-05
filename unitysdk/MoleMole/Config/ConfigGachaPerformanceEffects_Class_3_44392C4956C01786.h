#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1625E110)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1625E120)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_WRITE_OFFSET UNITYSDK_OFFSET(0x1625E8B0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786__CCTOR_OFFSET UNITYSDK_OFFSET(0x1625ED50)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786__CTOR_OFFSET UNITYSDK_OFFSET(0x1625ED10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex = 83455;

	class ConfigGachaPerformanceEffects_Class_3_44392C4956C01786 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGachaPerformanceEffects*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex)->GetStaticField(0x323F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex)->GetStaticField(0x323F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex)->GetStaticField(0x32400);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex)->GetStaticField(0x32408);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_Class_3_44392C4956C01786_TypeDefinitionIndex)->GetStaticField(0x32410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceEffects*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceEffects*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CLASS_3_44392C4956C01786_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
