#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Utils { class NapCameraSequence; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13530100)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13530110)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_WRITE_OFFSET UNITYSDK_OFFSET(0x135302B0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13530410)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D__CTOR_OFFSET UNITYSDK_OFFSET(0x135303D0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequence_Class_3_14D7F0AB1A00B60D_TypeDefinitionIndex = 53636;

	class NapCameraSequence_Class_3_14D7F0AB1A00B60D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Utils::NapCameraSequence*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_Class_3_14D7F0AB1A00B60D_TypeDefinitionIndex)->GetStaticField(0x371C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Utils::NapCameraSequence*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Utils::NapCameraSequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Utils::NapCameraSequence*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::NapCameraSequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_CLASS_3_14D7F0AB1A00B60D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
