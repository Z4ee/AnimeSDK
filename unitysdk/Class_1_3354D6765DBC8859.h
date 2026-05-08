#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3354D6765DBC8859_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x12456490)
#define CLASS_1_3354D6765DBC8859_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x124563F0)
#define CLASS_1_3354D6765DBC8859_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x12456250)
#define CLASS_1_3354D6765DBC8859_METHOD_1_8721F53CE8912B7C_OFFSET UNITYSDK_OFFSET(0x12456440)
#define CLASS_1_3354D6765DBC8859_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x12455F00)

inline static constexpr unsigned int Class_1_3354D6765DBC8859_TypeDefinitionIndex = 63306;

class Class_1_3354D6765DBC8859 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardParticle** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowChessboardParticle**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3354D6765DBC8859_TypeDefinitionIndex)->GetStaticField(0x36D30);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardParticle* Method_1_8721F53CE8912B7C()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardParticle*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_METHOD_1_8721F53CE8912B7C_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}
};
