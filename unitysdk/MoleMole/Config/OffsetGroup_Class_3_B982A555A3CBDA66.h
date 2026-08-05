#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class OffsetGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF5790)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF57A0)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_WRITE_OFFSET UNITYSDK_OFFSET(0x19FF5E40)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF62A0)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF6260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OffsetGroup_Class_3_B982A555A3CBDA66_TypeDefinitionIndex = 48157;

	class OffsetGroup_Class_3_B982A555A3CBDA66 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::OffsetGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_Class_3_B982A555A3CBDA66_TypeDefinitionIndex)->GetStaticField(0x44BC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_Class_3_B982A555A3CBDA66_TypeDefinitionIndex)->GetStaticField(0x44BC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::OffsetGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::OffsetGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::OffsetGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OffsetGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CLASS_3_B982A555A3CBDA66_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
