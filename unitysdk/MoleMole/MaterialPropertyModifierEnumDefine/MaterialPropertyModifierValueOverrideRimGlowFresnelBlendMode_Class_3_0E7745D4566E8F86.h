#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/OverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13848BF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13848C00)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_WRITE_OFFSET UNITYSDK_OFFSET(0x13848E20)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86__CCTOR_OFFSET UNITYSDK_OFFSET(0x13848FE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86__CTOR_OFFSET UNITYSDK_OFFSET(0x13848F80)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_Class_3_0E7745D4566E8F86_TypeDefinitionIndex = 58707;

	class MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_Class_3_0E7745D4566E8F86 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_Class_3_0E7745D4566E8F86_TypeDefinitionIndex)->GetStaticField(0x3F9F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_Class_3_0E7745D4566E8F86_TypeDefinitionIndex)->GetStaticField(0x3F9F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_CLASS_3_0E7745D4566E8F86_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
