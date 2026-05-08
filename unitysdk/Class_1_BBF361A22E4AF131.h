#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBF361A22E4AF131_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x101FD850)
#define CLASS_1_BBF361A22E4AF131_METHOD_1_4B99EB60D4C24C38_OFFSET UNITYSDK_OFFSET(0x101FD660)
#define CLASS_1_BBF361A22E4AF131_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x101FD260)
#define CLASS_1_BBF361A22E4AF131_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x101FD6B0)
#define CLASS_1_BBF361A22E4AF131_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x101FD2B0)
#define CLASS_1_BBF361A22E4AF131_METHOD_1_E1925DC563272FD4_OFFSET UNITYSDK_OFFSET(0x101FD600)
#define CLASS_1_BBF361A22E4AF131__CTOR_OFFSET UNITYSDK_OFFSET(0x101FD250)

inline static constexpr unsigned int Class_1_BBF361A22E4AF131_TypeDefinitionIndex = 81229;

class Class_1_BBF361A22E4AF131 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardInteract** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowChessboardInteract**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBF361A22E4AF131_TypeDefinitionIndex)->GetStaticField(0x2AC70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>* Method_1_E1925DC563272FD4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_E1925DC563272FD4_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardInteract* Method_1_4B99EB60D4C24C38()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardInteract*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_4B99EB60D4C24C38_OFFSET))();
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}
};
