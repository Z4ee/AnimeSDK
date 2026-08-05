#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C36B0)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C36C0)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4C3B20)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C3E00)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C3DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF_TypeDefinitionIndex = 83839;

	class ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigLinearSlopeDamper*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF_TypeDefinitionIndex)->GetStaticField(0x3CA00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Interaction::AxisSign>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF_TypeDefinitionIndex)->GetStaticField(0x3CA08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF_TypeDefinitionIndex)->GetStaticField(0x3CA10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinearSlopeDamper_Class_3_0DDFB584672055FF_TypeDefinitionIndex)->GetStaticField(0x3CA18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLinearSlopeDamper*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigLinearSlopeDamper*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_CLASS_3_0DDFB584672055FF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
