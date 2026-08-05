#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicInt; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A939780)
#define MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A939790)
#define MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_WRITE_OFFSET UNITYSDK_OFFSET(0x1A939A10)
#define MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A939C00)
#define MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A939BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicInt_Class_3_21A57A7AF95773B6_TypeDefinitionIndex = 59092;

	class DynamicInt_Class_3_21A57A7AF95773B6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::DynamicInt*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_Class_3_21A57A7AF95773B6_TypeDefinitionIndex)->GetStaticField(0x36500);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_Class_3_21A57A7AF95773B6_TypeDefinitionIndex)->GetStaticField(0x36508);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicInt_Class_3_21A57A7AF95773B6_TypeDefinitionIndex)->GetStaticField(0x36510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicInt*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicInt*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::DynamicInt*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicInt*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICINT_CLASS_3_21A57A7AF95773B6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
