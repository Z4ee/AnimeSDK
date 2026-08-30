#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1322;
class Class_0_16E4307DCC419505_1324;
class Class_0_16E4307DCC419505_1325;
class Class_0_16E4307DCC419505_1329;
class Class_0_16E4307DCC419505_1330;
class Class_0_16E4307DCC419505_411;
class Class_1_5F4D64A4B97E38F9;
class Class_1_6045926B515B7744;
class Class_1_9245418C99B6B18D;
namespace RPG::Client::RedDot { template <typename T> class IRedDotChecker_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_A93036DCE12069F7_METHOD_1_0185C7C6C9033340_OFFSET UNITYSDK_OFFSET(0xBB195D0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_1F7C05E18AF560A4_OFFSET UNITYSDK_OFFSET(0xBB1AA10)
#define CLASS_1_A93036DCE12069F7_METHOD_1_284A60E9B6E8FF43_OFFSET UNITYSDK_OFFSET(0xBB1AC20)
#define CLASS_1_A93036DCE12069F7_METHOD_1_32AC6DE73B8D24E2_OFFSET UNITYSDK_OFFSET(0xBB1A6B0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xBB19F50)
#define CLASS_1_A93036DCE12069F7_METHOD_1_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0xBB19FC0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xBB1A8B0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_868F617687453EB6_OFFSET UNITYSDK_OFFSET(0xBB1ABB0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_AF4D2A4C5A92CEEB_OFFSET UNITYSDK_OFFSET(0xBB1AB60)
#define CLASS_1_A93036DCE12069F7_METHOD_1_BE49AECE3F398D03_OFFSET UNITYSDK_OFFSET(0xBB192D0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_D775D76543E1303F_OFFSET UNITYSDK_OFFSET(0xBB1ACE0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBB1ACA0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_F9ADE8D3225B8E69_OFFSET UNITYSDK_OFFSET(0xBB191A0)
#define CLASS_1_A93036DCE12069F7_METHOD_1_FD05468BC349B911_OFFSET UNITYSDK_OFFSET(0xBB18F80)
#define CLASS_1_A93036DCE12069F7_START_OFFSET UNITYSDK_OFFSET(0xBB18DA0)
#define CLASS_1_A93036DCE12069F7_STOP_OFFSET UNITYSDK_OFFSET(0xBB18EE0)
#define CLASS_1_A93036DCE12069F7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB18A40)

inline static constexpr unsigned int Class_1_A93036DCE12069F7_TypeDefinitionIndex = 78701;

class Class_1_A93036DCE12069F7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1324* GNACHPMDGPD; // 0x10
	::Class_0_16E4307DCC419505_1329* DEGMOMBAMFO; // 0x18
	::Class_1_9245418C99B6B18D* DCOPELFHOLO; // 0x20
	::Class_1_5F4D64A4B97E38F9* GJALMBBNNOF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action*>*>* DCNEHLOAIJD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* KIGIDFBOJEB; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6045926B515B7744*>* GDEEJGLLLHA; // 0x40
	::System::Collections::Generic::Queue_1<::System::String*>* PHDDLNPGFKL; // 0x48

	::System::Void _ctor(::Class_0_16E4307DCC419505_1325* a1, ::Class_0_16E4307DCC419505_411* a2, ::Class_0_16E4307DCC419505_1330* a3, ::Class_1_5F4D64A4B97E38F9* a4, ::Class_0_16E4307DCC419505_1324* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1325*, ::Class_0_16E4307DCC419505_411*, ::Class_0_16E4307DCC419505_1330*, ::Class_1_5F4D64A4B97E38F9*, ::Class_0_16E4307DCC419505_1324*))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_STOP_OFFSET))(this);
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

	::System::Boolean Method_1_868F617687453EB6(::System::String* a1, ::Class_0_16E4307DCC419505_1322*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1322*&))((::PBYTE)hIl2Cpp + CLASS_1_A93036DCE12069F7_METHOD_1_868F617687453EB6_OFFSET))(this, a1, a2);
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
