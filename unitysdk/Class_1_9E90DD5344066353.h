#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9E90DD5344066353_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x1462C500)
#define CLASS_1_9E90DD5344066353_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x1462C110)
#define CLASS_1_9E90DD5344066353_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1462BF70)
#define CLASS_1_9E90DD5344066353_METHOD_1_7DC655F579CAFF36_OFFSET UNITYSDK_OFFSET(0x1462C160)
#define CLASS_1_9E90DD5344066353_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x1462C1B0)

inline static constexpr unsigned int Class_1_9E90DD5344066353_TypeDefinitionIndex = 47639;

class Class_1_9E90DD5344066353 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E90DD5344066353_TypeDefinitionIndex)->GetStaticField(0x36600);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboard* Method_1_7DC655F579CAFF36()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_METHOD_1_7DC655F579CAFF36_OFFSET))();
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}
};
