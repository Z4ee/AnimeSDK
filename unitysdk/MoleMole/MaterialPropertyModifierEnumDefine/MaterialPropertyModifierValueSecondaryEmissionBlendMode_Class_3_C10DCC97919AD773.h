#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/SecondaryEmissionBlendMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1790AA10)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1790AA20)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_WRITE_OFFSET UNITYSDK_OFFSET(0x1790AC40)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773__CCTOR_OFFSET UNITYSDK_OFFSET(0x1790AE00)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773__CTOR_OFFSET UNITYSDK_OFFSET(0x1790ADA0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueSecondaryEmissionBlendMode_Class_3_C10DCC97919AD773_TypeDefinitionIndex = 63674;

	class MaterialPropertyModifierValueSecondaryEmissionBlendMode_Class_3_C10DCC97919AD773 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueSecondaryEmissionBlendMode_Class_3_C10DCC97919AD773_TypeDefinitionIndex)->GetStaticField(0x427C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueSecondaryEmissionBlendMode_Class_3_C10DCC97919AD773_TypeDefinitionIndex)->GetStaticField(0x427C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_CLASS_3_C10DCC97919AD773_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
