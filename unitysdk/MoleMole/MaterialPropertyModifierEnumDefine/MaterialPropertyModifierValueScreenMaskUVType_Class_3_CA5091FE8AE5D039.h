#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ScreenMaskUVType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144DBE20)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144DBE30)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_WRITE_OFFSET UNITYSDK_OFFSET(0x144DC050)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039__CCTOR_OFFSET UNITYSDK_OFFSET(0x144DC210)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039__CTOR_OFFSET UNITYSDK_OFFSET(0x144DC1B0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueScreenMaskUVType_Class_3_CA5091FE8AE5D039_TypeDefinitionIndex = 47542;

	class MaterialPropertyModifierValueScreenMaskUVType_Class_3_CA5091FE8AE5D039 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueScreenMaskUVType_Class_3_CA5091FE8AE5D039_TypeDefinitionIndex)->GetStaticField(0x39FC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueScreenMaskUVType_Class_3_CA5091FE8AE5D039_TypeDefinitionIndex)->GetStaticField(0x39FC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_CLASS_3_CA5091FE8AE5D039_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
