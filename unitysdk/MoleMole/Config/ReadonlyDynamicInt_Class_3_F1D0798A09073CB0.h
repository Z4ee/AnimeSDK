#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ReadonlyDynamicInt; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B926890)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9268A0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_WRITE_OFFSET UNITYSDK_OFFSET(0x1B926AF0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B926CB0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B926C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicInt_Class_3_F1D0798A09073CB0_TypeDefinitionIndex = 61523;

	class ReadonlyDynamicInt_Class_3_F1D0798A09073CB0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ReadonlyDynamicInt*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicInt_Class_3_F1D0798A09073CB0_TypeDefinitionIndex)->GetStaticField(0x39D60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicInt_Class_3_F1D0798A09073CB0_TypeDefinitionIndex)->GetStaticField(0x39D68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicInt_Class_3_F1D0798A09073CB0_TypeDefinitionIndex)->GetStaticField(0x39D70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ReadonlyDynamicInt*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicInt*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ReadonlyDynamicInt*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicInt*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_CLASS_3_F1D0798A09073CB0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
