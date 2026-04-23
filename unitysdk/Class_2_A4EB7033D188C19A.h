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

#define CLASS_2_A4EB7033D188C19A_METHOD_2_1262BA2AA563174E_1_OFFSET UNITYSDK_OFFSET(0xCD2E360)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_1262BA2AA563174E_OFFSET UNITYSDK_OFFSET(0xCD2DF90)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_4E8D02E645DC1BB7_OFFSET UNITYSDK_OFFSET(0xCD2E070)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_58C948B5D50C2942_1_OFFSET UNITYSDK_OFFSET(0xCD2E830)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_58C948B5D50C2942_OFFSET UNITYSDK_OFFSET(0xCD2E780)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0xCD2E560)
#define CLASS_2_A4EB7033D188C19A_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0xCD2E440)
#define CLASS_2_A4EB7033D188C19A_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCD2DEB0)
#define CLASS_2_A4EB7033D188C19A__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCD2DE40)
#define CLASS_2_A4EB7033D188C19A__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2E8E0)
#define CLASS_2_A4EB7033D188C19A___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCD2EA00)
#define CLASS_2_A4EB7033D188C19A___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCD2E9A0)

inline static constexpr unsigned int Class_2_A4EB7033D188C19A_TypeDefinitionIndex = 62929;

class Class_2_A4EB7033D188C19A : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10
	::RPG::Client::Promises::Promise* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x20
	::System::Int64 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A__CTOR_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void OnReconnect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_ONRECONNECT_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>* Method_2_1262BA2AA563174E()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_1262BA2AA563174E_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>* Method_2_1262BA2AA563174E_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_1262BA2AA563174E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_4E8D02E645DC1BB7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_4E8D02E645DC1BB7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>* Method_2_58C948B5D50C2942()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_58C948B5D50C2942_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>* Method_2_58C948B5D50C2942_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_33CFB36424333436_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A_METHOD_2_58C948B5D50C2942_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnReconnect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4EB7033D188C19A___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
	}
};
