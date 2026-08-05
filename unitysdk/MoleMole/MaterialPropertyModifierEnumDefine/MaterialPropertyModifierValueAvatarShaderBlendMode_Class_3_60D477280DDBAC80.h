#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118E1640)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118E1650)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_WRITE_OFFSET UNITYSDK_OFFSET(0x118E1870)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80__CCTOR_OFFSET UNITYSDK_OFFSET(0x118E1A30)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80__CTOR_OFFSET UNITYSDK_OFFSET(0x118E19D0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueAvatarShaderBlendMode_Class_3_60D477280DDBAC80_TypeDefinitionIndex = 84440;

	class MaterialPropertyModifierValueAvatarShaderBlendMode_Class_3_60D477280DDBAC80 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueAvatarShaderBlendMode_Class_3_60D477280DDBAC80_TypeDefinitionIndex)->GetStaticField(0x3CC00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueAvatarShaderBlendMode_Class_3_60D477280DDBAC80_TypeDefinitionIndex)->GetStaticField(0x3CC08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEAVATARSHADERBLENDMODE_CLASS_3_60D477280DDBAC80_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
