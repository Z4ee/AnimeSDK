#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17380F10)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17380F20)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_WRITE_OFFSET UNITYSDK_OFFSET(0x17381140)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17381300)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C__CTOR_OFFSET UNITYSDK_OFFSET(0x173812A0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueMatCapBlendMode_Class_3_36924F03940CBB2C_TypeDefinitionIndex = 60521;

	class MaterialPropertyModifierValueMatCapBlendMode_Class_3_36924F03940CBB2C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueMatCapBlendMode_Class_3_36924F03940CBB2C_TypeDefinitionIndex)->GetStaticField(0x44DC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueMatCapBlendMode_Class_3_36924F03940CBB2C_TypeDefinitionIndex)->GetStaticField(0x44DC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_CLASS_3_36924F03940CBB2C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
