#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_C0BD047803C8E44F;
class Class_2_FD1781FBF85A46E5;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x10B02D20)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0x10B02EE0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0x10B02E80)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET UNITYSDK_OFFSET(0x10B02EA0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET UNITYSDK_OFFSET(0x10B02EC0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B01250)

inline static constexpr unsigned int Class_2_FD1781FBF85A46E5___c__DisplayClass13_0_TypeDefinitionIndex = 62945;

class Class_2_FD1781FBF85A46E5___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__5; // 0x10
	::Class_2_FD1781FBF85A46E5* __4__this; // 0x18
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__7; // 0x20
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x28
	::Class_1_C0BD047803C8E44F* session; // 0x30
	::Enum_3_A35B38E5F9115A76_2 gameMode; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> result)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET))(this, result);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET))(this);
	}

	::System::Void _CheckReconnectToFight_b__1(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET))(this, ex);
	}
};
