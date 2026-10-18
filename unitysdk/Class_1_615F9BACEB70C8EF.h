#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

class Class_1_DD6B06EE3D4AEBFA;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }
namespace System { class String; }

#define CLASS_1_615F9BACEB70C8EF_METHOD_1_6A159A4DAF72EACC_OFFSET UNITYSDK_OFFSET(0x158D0EC0)

inline static constexpr unsigned int Class_1_615F9BACEB70C8EF_TypeDefinitionIndex = 74838;

class Class_1_615F9BACEB70C8EF : public ::System::Object
{
public:
	static ::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* Method_1_6A159A4DAF72EACC(::System::UInt32 a1, ::System::String* a2, ::Class_1_DD6B06EE3D4AEBFA* a3, ::Il2CppArray<::Enum_3_7D1331C413E60035>* a4)
	{
		return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::System::UInt32, ::System::String*, ::Class_1_DD6B06EE3D4AEBFA*, ::Il2CppArray<::Enum_3_7D1331C413E60035>*))((::PBYTE)hIl2Cpp + CLASS_1_615F9BACEB70C8EF_METHOD_1_6A159A4DAF72EACC_OFFSET))(a1, a2, a3, a4);
	}
};
