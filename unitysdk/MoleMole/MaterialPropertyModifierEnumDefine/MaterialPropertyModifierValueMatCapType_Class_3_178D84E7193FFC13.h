#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17381380)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17381390)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_WRITE_OFFSET UNITYSDK_OFFSET(0x173815B0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13__CCTOR_OFFSET UNITYSDK_OFFSET(0x17381770)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13__CTOR_OFFSET UNITYSDK_OFFSET(0x17381710)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueMatCapType_Class_3_178D84E7193FFC13_TypeDefinitionIndex = 46779;

	class MaterialPropertyModifierValueMatCapType_Class_3_178D84E7193FFC13 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueMatCapType_Class_3_178D84E7193FFC13_TypeDefinitionIndex)->GetStaticField(0x44DD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MatCapType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueMatCapType_Class_3_178D84E7193FFC13_TypeDefinitionIndex)->GetStaticField(0x44DD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPTYPE_CLASS_3_178D84E7193FFC13_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
