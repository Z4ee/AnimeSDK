#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C23500)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C23510)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_WRITE_OFFSET UNITYSDK_OFFSET(0x16C23840)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C23A80)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928__CTOR_OFFSET UNITYSDK_OFFSET(0x16C23A40)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMiscSetting_Class_3_983506A06D72C928_TypeDefinitionIndex = 62205;

	class CameraMiscSetting_Class_3_983506A06D72C928 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraMiscSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraMiscSetting_Class_3_983506A06D72C928_TypeDefinitionIndex)->GetStaticField(0x485D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CameraMiscSetting_Class_3_983506A06D72C928_TypeDefinitionIndex)->GetStaticField(0x485D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraMiscSetting_Class_3_983506A06D72C928_TypeDefinitionIndex)->GetStaticField(0x485E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraMiscSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Cameras::CameraMiscSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CLASS_3_983506A06D72C928_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
