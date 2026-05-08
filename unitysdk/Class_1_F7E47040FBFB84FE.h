#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F7E47040FBFB84FE_METHOD_1_2A2A9FD85678D7DB_OFFSET UNITYSDK_OFFSET(0x124550B0)
#define CLASS_1_F7E47040FBFB84FE_METHOD_1_B508FD1F30805E9B_OFFSET UNITYSDK_OFFSET(0x12454D80)
#define CLASS_1_F7E47040FBFB84FE_METHOD_1_F14B48FCACC19511_OFFSET UNITYSDK_OFFSET(0x124551C0)
#define CLASS_1_F7E47040FBFB84FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12454CE0)

inline static constexpr unsigned int Class_1_F7E47040FBFB84FE_TypeDefinitionIndex = 48409;

class Class_1_F7E47040FBFB84FE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAraTrail*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAraTrail*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F7E47040FBFB84FE_TypeDefinitionIndex)->GetStaticField(0x3E030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F7E47040FBFB84FE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B508FD1F30805E9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F7E47040FBFB84FE_METHOD_1_B508FD1F30805E9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A2A9FD85678D7DB(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F7E47040FBFB84FE_METHOD_1_2A2A9FD85678D7DB_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigAraTrail* Method_1_F14B48FCACC19511(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigAraTrail*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F7E47040FBFB84FE_METHOD_1_F14B48FCACC19511_OFFSET))(a1);
	}
};
