#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107DE920)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107DE930)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_WRITE_OFFSET UNITYSDK_OFFSET(0x107DEC40)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x107DEE50)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7__CTOR_OFFSET UNITYSDK_OFFSET(0x107DEE10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchPoseData_Class_3_5611A97E20CE2AA7_TypeDefinitionIndex = 63476;

	class GalSwitchPoseData_Class_3_5611A97E20CE2AA7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSwitchPoseData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchPoseData_Class_3_5611A97E20CE2AA7_TypeDefinitionIndex)->GetStaticField(0x4E930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchPoseData_Class_3_5611A97E20CE2AA7_TypeDefinitionIndex)->GetStaticField(0x4E938);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchPoseData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchPoseData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_CLASS_3_5611A97E20CE2AA7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
