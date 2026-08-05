#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class DitherConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A005120)
#define MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A005130)
#define MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_WRITE_OFFSET UNITYSDK_OFFSET(0x1A0059F0)
#define MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A005F30)
#define MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145__CTOR_OFFSET UNITYSDK_OFFSET(0x1A005EF0)

namespace MoleMole
{
	inline static constexpr unsigned int DitherConfig_Class_3_9C7BC4F75EE41145_TypeDefinitionIndex = 52943;

	class DitherConfig_Class_3_9C7BC4F75EE41145 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::DitherConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DitherConfig_Class_3_9C7BC4F75EE41145_TypeDefinitionIndex)->GetStaticField(0x44CD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DitherConfig_Class_3_9C7BC4F75EE41145_TypeDefinitionIndex)->GetStaticField(0x44CD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DitherConfig_Class_3_9C7BC4F75EE41145_TypeDefinitionIndex)->GetStaticField(0x44CE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::DitherConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::DitherConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::DitherConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_CLASS_3_9C7BC4F75EE41145_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
