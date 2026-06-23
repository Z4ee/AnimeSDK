#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16CB1CE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16CB1CF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16CB21C0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CB24D0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CB2470)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueTexture_MaterialPropertyModifierValueTexture_UnityGeneratedFormatter_TypeDefinitionIndex = 57260;

	class MaterialPropertyModifierValueTexture_MaterialPropertyModifierValueTexture_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueTexture>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueTexture_MaterialPropertyModifierValueTexture_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42EC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueTexture_MaterialPropertyModifierValueTexture_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42EC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueTexture_MaterialPropertyModifierValueTexture_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42ED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueTexture& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueTexture& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUETEXTURE_MATERIALPROPERTYMODIFIERVALUETEXTURE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
