#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13028380)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13028390)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13028610)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13028810)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x130287B0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueColor_MaterialPropertyModifierValueColor_UnityGeneratedFormatter_TypeDefinitionIndex = 43415;

	class MaterialPropertyModifierValueColor_MaterialPropertyModifierValueColor_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueColor>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueColor_MaterialPropertyModifierValueColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49E00);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueColor_MaterialPropertyModifierValueColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49E08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueColor& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueColor& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_MATERIALPROPERTYMODIFIERVALUECOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
