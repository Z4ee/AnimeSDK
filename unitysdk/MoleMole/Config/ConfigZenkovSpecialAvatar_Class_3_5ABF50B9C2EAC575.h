#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14877A50)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14877A60)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_WRITE_OFFSET UNITYSDK_OFFSET(0x14877C00)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575__CCTOR_OFFSET UNITYSDK_OFFSET(0x14877D60)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575__CTOR_OFFSET UNITYSDK_OFFSET(0x14877D20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZenkovSpecialAvatar_Class_3_5ABF50B9C2EAC575_TypeDefinitionIndex = 53131;

	class ConfigZenkovSpecialAvatar_Class_3_5ABF50B9C2EAC575 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigZenkovSpecialAvatar*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigZenkovSpecialAvatar_Class_3_5ABF50B9C2EAC575_TypeDefinitionIndex)->GetStaticField(0x42490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigZenkovSpecialAvatar_Class_3_5ABF50B9C2EAC575_TypeDefinitionIndex)->GetStaticField(0x42498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigZenkovSpecialAvatar*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigZenkovSpecialAvatar*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_CLASS_3_5ABF50B9C2EAC575_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
