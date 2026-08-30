#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_8A589C2B70F737E3___C__ADDNOTIFY_B__7_0_OFFSET UNITYSDK_OFFSET(0x1595E090)
#define CLASS_1_8A589C2B70F737E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1595E040)
#define CLASS_1_8A589C2B70F737E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1595E080)

inline static constexpr unsigned int Class_1_8A589C2B70F737E3___c_TypeDefinitionIndex = 61154;

class Class_1_8A589C2B70F737E3___c : public ::System::Object
{
public:
	static ::Class_1_8A589C2B70F737E3___c** StaticGet___9()
	{
		return (::Class_1_8A589C2B70F737E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A589C2B70F737E3___c_TypeDefinitionIndex)->GetStaticField(0x56740);
	}
	static ::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A589C2B70F737E3___c_TypeDefinitionIndex)->GetStaticField(0x56748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3___C__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotify_b__7_0(::RPG::Client::NotifyType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3___C__ADDNOTIFY_B__7_0_OFFSET))(this, a1, a2);
	}
};
