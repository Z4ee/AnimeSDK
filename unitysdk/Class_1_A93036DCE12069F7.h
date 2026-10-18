#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1467;
class Class_0_16E4307DCC419505_1469;
class Class_0_16E4307DCC419505_1470;
class Class_0_16E4307DCC419505_1474;
class Class_0_16E4307DCC419505_1475;
class Class_0_16E4307DCC419505_1476;
class Class_1_6045926B515B7744;
class Class_1_9245418C99B6B18D;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::RedDot { template <typename T> class IRedDotChecker_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_A93036DCE12069F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99EAC0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_0185C7C6C9033340_OFFSET UNITYSDK_OFFSET(0xB99F1D0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_1F7C05E18AF560A4_OFFSET UNITYSDK_OFFSET(0xB9A0620)
#define CLASS_1_A93036DCE12069F7_METHOD_1_284A60E9B6E8FF43_OFFSET UNITYSDK_OFFSET(0xB9A0830)
#define CLASS_1_A93036DCE12069F7_METHOD_1_32AC6DE73B8D24E2_OFFSET UNITYSDK_OFFSET(0xB9A02C0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xB99FB50)
#define CLASS_1_A93036DCE12069F7_METHOD_1_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0xB99FBC0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xB9A04C0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_868F617687453EB6_OFFSET UNITYSDK_OFFSET(0xB9A07C0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_AF4D2A4C5A92CEEB_OFFSET UNITYSDK_OFFSET(0xB9A0770)
#define CLASS_1_A93036DCE12069F7_METHOD_1_BE49AECE3F398D03_OFFSET UNITYSDK_OFFSET(0xB99EED0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_D775D76543E1303F_OFFSET UNITYSDK_OFFSET(0xB9A08F0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB9A08B0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_F9ADE8D3225B8E69_OFFSET UNITYSDK_OFFSET(0xB99EDA0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_FD05468BC349B911_OFFSET UNITYSDK_OFFSET(0xB99EB80)
#define CLASS_1_A93036DCE12069F7_START_OFFSET UNITYSDK_OFFSET(0xB99E8E0)
#define CLASS_1_A93036DCE12069F7_STOP_OFFSET UNITYSDK_OFFSET(0xB99EA20)
#define CLASS_1_A93036DCE12069F7__CTOR_OFFSET UNITYSDK_OFFSET(0xB99E520)

inline static constexpr unsigned int Class_1_A93036DCE12069F7_TypeDefinitionIndex = 79180;

class Class_1_A93036DCE12069F7 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::String*>* PHDDLNPGFKL; // 0x10
	::Class_1_9245418C99B6B18D* DCOPELFHOLO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6045926B515B7744*>* GDEEJGLLLHA; // 0x20
	::Class_0_16E4307DCC419505_1474* DEGMOMBAMFO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* KIGIDFBOJEB; // 0x30
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action*>*>* DCNEHLOAIJD; // 0x40
	::Class_0_16E4307DCC419505_1469* GNACHPMDGPD; // 0x48

	::System::Void _ctor(::Class_0_16E4307DCC419505_1470* a1, ::Class_0_16E4307DCC419505_1475* a2, ::Class_0_16E4307DCC419505_1476* a3, ::Class_1_D501FC103C8A2714* a4, ::Class_0_16E4307DCC419505_1469* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1470*, ::Class_0_16E4307DCC419505_1475*, ::Class_0_16E4307DCC419505_1476*, ::Class_1_D501FC103C8A2714*, ::Class_0_16E4307DCC419505_1469*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_STOP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FD05468BC349B911(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_FD05468BC349B911_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9ADE8D3225B8E69(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_F9ADE8D3225B8E69_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RedDotType Method_1_BE49AECE3F398D03(::System::String* a1)
	{
		return ((::RPG::GameCore::RedDotType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_BE49AECE3F398D03_OFFSET))(this, a1);
	}

	::System::Void Method_1_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_1_32AC6DE73B8D24E2(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_32AC6DE73B8D24E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::Class_1_6045926B515B7744* Method_1_0185C7C6C9033340(::System::String* a1)
	{
		return ((::Class_1_6045926B515B7744*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_0185C7C6C9033340_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F7C05E18AF560A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_1F7C05E18AF560A4_OFFSET))(this, a1);
	}

	::RPG::GameCore::RedDotType Method_1_AF4D2A4C5A92CEEB(::System::String* a1)
	{
		return ((::RPG::GameCore::RedDotType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_AF4D2A4C5A92CEEB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_868F617687453EB6(::System::String* a1, ::Class_0_16E4307DCC419505_1467*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1467*&))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_868F617687453EB6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_284A60E9B6E8FF43(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_284A60E9B6E8FF43_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_9245418C99B6B18D* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_9245418C99B6B18D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_6045926B515B7744* Method_1_D775D76543E1303F(::System::String* a1)
	{
		return ((::Class_1_6045926B515B7744*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_D775D76543E1303F_OFFSET))(this, a1);
	}
};
