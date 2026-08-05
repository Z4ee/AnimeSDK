#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoUITableScrollV2;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11C30DD0)
#define MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11C30DE0)
#define MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_WRITE_OFFSET UNITYSDK_OFFSET(0x11C311A0)
#define MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C31420)
#define MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x11C313E0)

inline static constexpr unsigned int MonoUITableScrollV2_Class_3_DA6CD99F66D77F6F_TypeDefinitionIndex = 75029;

class MonoUITableScrollV2_Class_3_DA6CD99F66D77F6F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoUITableScrollV2*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_Field_3_7()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_Class_3_DA6CD99F66D77F6F_TypeDefinitionIndex)->GetStaticField(0x3D5A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_Class_3_DA6CD99F66D77F6F_TypeDefinitionIndex)->GetStaticField(0x3D5A8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUITableScrollV2*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::MonoUITableScrollV2*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CLASS_3_DA6CD99F66D77F6F_WRITE_OFFSET))(this, a1, a2);
	}
};
