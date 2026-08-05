#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLinearStepStairDamper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172C0DC0)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172C0DD0)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_WRITE_OFFSET UNITYSDK_OFFSET(0x172C1410)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C1800)
#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C__CTOR_OFFSET UNITYSDK_OFFSET(0x172C17C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C_TypeDefinitionIndex = 75392;

	class ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigLinearStepStairDamper*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C_TypeDefinitionIndex)->GetStaticField(0x3F760);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C_TypeDefinitionIndex)->GetStaticField(0x3F768);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C_TypeDefinitionIndex)->GetStaticField(0x3F770);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearStepStairDamper_Class_3_30C409B167F3B75C_TypeDefinitionIndex)->GetStaticField(0x3F778);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLinearStepStairDamper*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLinearStepStairDamper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigLinearStepStairDamper*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLinearStepStairDamper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER_CLASS_3_30C409B167F3B75C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
