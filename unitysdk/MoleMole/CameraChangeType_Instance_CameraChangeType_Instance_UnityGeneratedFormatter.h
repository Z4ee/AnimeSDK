#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CameraChangeType_Instance; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16291000)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16291010)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16291080)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x162910D0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Instance_CameraChangeType_Instance_UnityGeneratedFormatter_TypeDefinitionIndex = 51638;

	class CameraChangeType_Instance_CameraChangeType_Instance_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CameraChangeType_Instance*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CameraChangeType_Instance*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::CameraChangeType_Instance*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CAMERACHANGETYPE_INSTANCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
