#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E8108FF33261706_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x139571B0)
#define CLASS_1_5E8108FF33261706_METHOD_1_2CF1AC02C21BACC4_OFFSET UNITYSDK_OFFSET(0x139574B0)
#define CLASS_1_5E8108FF33261706_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x139573C0)
#define CLASS_1_5E8108FF33261706__CTOR_OFFSET UNITYSDK_OFFSET(0x139571A0)

inline static constexpr unsigned int Class_1_5E8108FF33261706_TypeDefinitionIndex = 67392;

class Class_1_5E8108FF33261706 : public ::System::Object
{
public:
	static ::MoleMole::Config::MonoSurfConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::MonoSurfConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E8108FF33261706_TypeDefinitionIndex)->GetStaticField(0x37400);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigSurfVehicle* Method_1_2CF1AC02C21BACC4(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigSurfVehicle*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_METHOD_1_2CF1AC02C21BACC4_OFFSET))(a1);
	}
};
