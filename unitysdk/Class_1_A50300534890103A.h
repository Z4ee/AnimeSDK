#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_A50300534890103A_METHOD_1_3C935E3A9C1BF82E_OFFSET UNITYSDK_OFFSET(0x8BAC1F0)
#define CLASS_1_A50300534890103A_METHOD_1_5AA17B9E82DBE3F8_OFFSET UNITYSDK_OFFSET(0x8BAC110)
#define CLASS_1_A50300534890103A_METHOD_1_640338D6080652D6_OFFSET UNITYSDK_OFFSET(0x8BABF60)
#define CLASS_1_A50300534890103A_METHOD_1_F934EECDEDB1262B_OFFSET UNITYSDK_OFFSET(0x8BAC040)
#define CLASS_1_A50300534890103A__CTOR_OFFSET UNITYSDK_OFFSET(0x8BAC3C0)

inline static constexpr unsigned int Class_1_A50300534890103A_TypeDefinitionIndex = 50966;

class Class_1_A50300534890103A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A50300534890103A__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_640338D6080652D6(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A50300534890103A_METHOD_1_640338D6080652D6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_F934EECDEDB1262B(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_A50300534890103A_METHOD_1_F934EECDEDB1262B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5AA17B9E82DBE3F8(::Struct_2_BC950E36747FB4C9& a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + CLASS_1_A50300534890103A_METHOD_1_5AA17B9E82DBE3F8_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_3C935E3A9C1BF82E(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A50300534890103A_METHOD_1_3C935E3A9C1BF82E_OFFSET))(this, a1, a2);
	}
};
