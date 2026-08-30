#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_33CFB36424333436;
class Class_1_33CFB36424333436_1;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_13A56A856F6E4CD7_1_OFFSET UNITYSDK_OFFSET(0x1768FC20)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_13A56A856F6E4CD7_OFFSET UNITYSDK_OFFSET(0x1768F830)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_4E8D02E645DC1BB7_OFFSET UNITYSDK_OFFSET(0x1768F940)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_58C948B5D50C2942_1_OFFSET UNITYSDK_OFFSET(0x176900C0)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_58C948B5D50C2942_OFFSET UNITYSDK_OFFSET(0x17690010)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x1768FD30)
#define CLASS_2_9CBD4BFD2FAC2556_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x1768FE50)
#define CLASS_2_9CBD4BFD2FAC2556_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1768F780)
#define CLASS_2_9CBD4BFD2FAC2556__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1768F6A0)
#define CLASS_2_9CBD4BFD2FAC2556__CTOR_OFFSET UNITYSDK_OFFSET(0x17690170)

inline static constexpr unsigned int Class_2_9CBD4BFD2FAC2556_TypeDefinitionIndex = 68244;

class Class_2_9CBD4BFD2FAC2556 : public ::RPG::Client::BaseModule
{
public:
	::RPG::Client::Promises::Promise* APPHGLLNJFD; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* NBAGBCDHFHB; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* FNEHDIHGKBH; // 0x20
	::System::Int64 DEOLOJGONND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556__CTOR_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void OnReconnect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_ONRECONNECT_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>* Method_2_13A56A856F6E4CD7()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_13A56A856F6E4CD7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>* Method_2_13A56A856F6E4CD7_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_13A56A856F6E4CD7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_4E8D02E645DC1BB7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_4E8D02E645DC1BB7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>* Method_2_58C948B5D50C2942()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_58C948B5D50C2942_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>* Method_2_58C948B5D50C2942_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CBD4BFD2FAC2556_METHOD_2_58C948B5D50C2942_1_OFFSET))(this);
	}
};
