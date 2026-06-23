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

#define MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12CA8910)
#define MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12CA8920)
#define MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12CA8D30)
#define MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CA8FE0)
#define MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8FA0)

inline static constexpr unsigned int MonoUITableScrollV2_MonoUITableScrollV2_UnityGeneratedFormatter_TypeDefinitionIndex = 70005;

class MonoUITableScrollV2_MonoUITableScrollV2_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoUITableScrollV2*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_MonoUITableScrollV2_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B220);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_MonoUITableScrollV2_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B228);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUITableScrollV2*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::MonoUITableScrollV2*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MONOUITABLESCROLLV2_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
