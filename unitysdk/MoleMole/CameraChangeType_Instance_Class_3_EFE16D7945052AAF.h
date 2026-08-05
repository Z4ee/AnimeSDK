#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CameraChangeType_Instance; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x167EBC60)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x167EBC70)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_WRITE_OFFSET UNITYSDK_OFFSET(0x167EBC80)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x167EBC90)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Instance_Class_3_EFE16D7945052AAF_TypeDefinitionIndex = 91006;

	class CameraChangeType_Instance_Class_3_EFE16D7945052AAF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CameraChangeType_Instance*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CameraChangeType_Instance*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CameraChangeType_Instance*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CLASS_3_EFE16D7945052AAF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
