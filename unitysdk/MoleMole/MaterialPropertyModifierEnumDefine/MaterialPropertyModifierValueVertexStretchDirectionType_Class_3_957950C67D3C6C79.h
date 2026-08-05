#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/VertexStretchDirectionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118E1ED0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118E1EE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_WRITE_OFFSET UNITYSDK_OFFSET(0x118E2100)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79__CCTOR_OFFSET UNITYSDK_OFFSET(0x118E22C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79__CTOR_OFFSET UNITYSDK_OFFSET(0x118E2260)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVertexStretchDirectionType_Class_3_957950C67D3C6C79_TypeDefinitionIndex = 81837;

	class MaterialPropertyModifierValueVertexStretchDirectionType_Class_3_957950C67D3C6C79 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVertexStretchDirectionType_Class_3_957950C67D3C6C79_TypeDefinitionIndex)->GetStaticField(0x3CC10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVertexStretchDirectionType_Class_3_957950C67D3C6C79_TypeDefinitionIndex)->GetStaticField(0x3CC18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_CLASS_3_957950C67D3C6C79_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
