#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF7AE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF7AF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF7D10)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF7ED0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF7E70)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueChannelEnumType_Class_3_2BA1EC479DFE4AC2_TypeDefinitionIndex = 46483;

	class MaterialPropertyModifierValueChannelEnumType_Class_3_2BA1EC479DFE4AC2 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueChannelEnumType_Class_3_2BA1EC479DFE4AC2_TypeDefinitionIndex)->GetStaticField(0x48E10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueChannelEnumType_Class_3_2BA1EC479DFE4AC2_TypeDefinitionIndex)->GetStaticField(0x48E18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_CLASS_3_2BA1EC479DFE4AC2_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
