#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EA341E6BE58C6762___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12129180)
#define CLASS_1_EA341E6BE58C6762___C__CTOR_OFFSET UNITYSDK_OFFSET(0x121291C0)
#define CLASS_1_EA341E6BE58C6762___C__REFRESHTRIALTEAMBUILD_B__1_0_OFFSET UNITYSDK_OFFSET(0x121291D0)

inline static constexpr unsigned int Class_1_EA341E6BE58C6762___c_TypeDefinitionIndex = 57093;

class Class_1_EA341E6BE58C6762___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA341E6BE58C6762___c_TypeDefinitionIndex)->GetStaticField(0x5C7C0);
	}
	static ::Class_1_EA341E6BE58C6762___c** StaticGet___9()
	{
		return (::Class_1_EA341E6BE58C6762___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA341E6BE58C6762___c_TypeDefinitionIndex)->GetStaticField(0x5C7C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _RefreshTrialTeamBuild_b__1_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762___C__REFRESHTRIALTEAMBUILD_B__1_0_OFFSET))(this, avatar);
	}
};
