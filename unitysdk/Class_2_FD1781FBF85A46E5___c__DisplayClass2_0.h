#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_C0BD047803C8E44F;
class Class_1_E7DB216A3FFF6C29;
class Class_2_FD1781FBF85A46E5;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x10B03AB0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x10B03BE0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFE700)

inline static constexpr unsigned int Class_2_FD1781FBF85A46E5___c__DisplayClass2_0_TypeDefinitionIndex = 62949;

class Class_2_FD1781FBF85A46E5___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_C0BD047803C8E44F* session; // 0x10
	::Class_1_0C36FD2A7876DF8E* extInfo; // 0x18
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x20
	::Class_1_E7DB216A3FFF6C29* roomExtInfo; // 0x28
	::Class_2_FD1781FBF85A46E5* __4__this; // 0x30
	::System::UInt32 createParam; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> param)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET))(this, param);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET))(this);
	}
};
