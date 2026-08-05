#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SceneSoundData; }
namespace MoleMole { class SceneSoundData_SubAreaConfig; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1809CAF0)
#define MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1809CB00)
#define MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_WRITE_OFFSET UNITYSDK_OFFSET(0x1809CD60)
#define MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809CF20)
#define MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586__CTOR_OFFSET UNITYSDK_OFFSET(0x1809CEE0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundData_Class_3_CBD468C989C9D586_TypeDefinitionIndex = 49903;

	class SceneSoundData_Class_3_CBD468C989C9D586 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SceneSoundData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(SceneSoundData_Class_3_CBD468C989C9D586_TypeDefinitionIndex)->GetStaticField(0x4C450);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneSoundData_SubAreaConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneSoundData_SubAreaConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneSoundData_Class_3_CBD468C989C9D586_TypeDefinitionIndex)->GetStaticField(0x4C458);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SceneSoundData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SceneSoundData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA_CLASS_3_CBD468C989C9D586_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
