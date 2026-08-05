#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF7670)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF7680)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF78A0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF7A60)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF7A00)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueAbnormalPropertyType_Class_3_599AA43CE66D1D24_TypeDefinitionIndex = 63230;

	class MaterialPropertyModifierValueAbnormalPropertyType_Class_3_599AA43CE66D1D24 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AbnormalPropertyType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AbnormalPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueAbnormalPropertyType_Class_3_599AA43CE66D1D24_TypeDefinitionIndex)->GetStaticField(0x48E00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueAbnormalPropertyType_Class_3_599AA43CE66D1D24_TypeDefinitionIndex)->GetStaticField(0x48E08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEABNORMALPROPERTYTYPE_CLASS_3_599AA43CE66D1D24_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
