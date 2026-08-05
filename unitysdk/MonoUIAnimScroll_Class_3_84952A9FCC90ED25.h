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

#define MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A2F2A0)
#define MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A2F2B0)
#define MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_WRITE_OFFSET UNITYSDK_OFFSET(0x11A2F7B0)
#define MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A2FAF0)
#define MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2FAB0)

inline static constexpr unsigned int MonoUIAnimScroll_Class_3_84952A9FCC90ED25_TypeDefinitionIndex = 84707;

class MonoUIAnimScroll_Class_3_84952A9FCC90ED25 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoUIAnimScroll*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_Class_3_84952A9FCC90ED25_TypeDefinitionIndex)->GetStaticField(0x42FA0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Action*>** StaticGet_Field_3_2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_Class_3_84952A9FCC90ED25_TypeDefinitionIndex)->GetStaticField(0x42FA8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_Class_3_84952A9FCC90ED25_TypeDefinitionIndex)->GetStaticField(0x42FB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUIAnimScroll*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::MonoUIAnimScroll*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_CLASS_3_84952A9FCC90ED25_WRITE_OFFSET))(this, a1, a2);
	}
};
