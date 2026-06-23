#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectExtensionEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class MonoEffectExtensionData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D63720)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D63730)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D63B30)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D63DD0)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D63D90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex = 73577;

	class MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectExtensionData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34300);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34308);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34310);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34318);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_MonoEffectExtensionData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectExtensionData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoEffectExtensionData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_MONOEFFECTEXTENSIONDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
