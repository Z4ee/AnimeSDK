#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/OverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16B938F0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16B93900)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16B93B70)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B93D60)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B93D00)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_UnityGeneratedFormatter_TypeDefinitionIndex = 53872;

	class MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41D50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41D58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_MATERIALPROPERTYMODIFIERVALUEOVERRIDERIMGLOWFRESNELBLENDMODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
