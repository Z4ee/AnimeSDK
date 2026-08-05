#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/DistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueDistortionChannelType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1790A390)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1790A3A0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_WRITE_OFFSET UNITYSDK_OFFSET(0x1790A5C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1790A780)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1790A720)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueDistortionChannelType_Class_3_05BCE835A1C77C8B_TypeDefinitionIndex = 90942;

	class MaterialPropertyModifierValueDistortionChannelType_Class_3_05BCE835A1C77C8B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueDistortionChannelType_Class_3_05BCE835A1C77C8B_TypeDefinitionIndex)->GetStaticField(0x427B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueDistortionChannelType_Class_3_05BCE835A1C77C8B_TypeDefinitionIndex)->GetStaticField(0x427B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_CLASS_3_05BCE835A1C77C8B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
