#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoUIAnimScroll;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Action; }

#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF968320)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF968330)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF968890)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF968C00)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF968BC0)

inline static constexpr unsigned int MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex = 63780;

class MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoUIAnimScroll*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48A60);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48A68);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Action*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48A70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUIAnimScroll*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::MonoUIAnimScroll*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
