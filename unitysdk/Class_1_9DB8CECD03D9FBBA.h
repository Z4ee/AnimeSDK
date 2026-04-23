#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_865;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x124AECC0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_0B2ACA533259B73D_OFFSET UNITYSDK_OFFSET(0x124AE140)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x124AE8B0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_11F642D46FF67A3B_OFFSET UNITYSDK_OFFSET(0x124AEAB0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_2F834EEA559A3C42_OFFSET UNITYSDK_OFFSET(0x124AE6C0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x124ADFE0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_B232DF8FAA17CDA6_OFFSET UNITYSDK_OFFSET(0x124AE4B0)
#define CLASS_1_9DB8CECD03D9FBBA_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x124ADEF0)
#define CLASS_1_9DB8CECD03D9FBBA_START_OFFSET UNITYSDK_OFFSET(0x124ADD60)
#define CLASS_1_9DB8CECD03D9FBBA_STOP_OFFSET UNITYSDK_OFFSET(0x124ADDD0)
#define CLASS_1_9DB8CECD03D9FBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x124AED10)

inline static constexpr unsigned int Class_1_9DB8CECD03D9FBBA_TypeDefinitionIndex = 62939;

class Class_1_9DB8CECD03D9FBBA : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_865* Field_1_3; // 0x18
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::RPG::Client::ChatMessageData*, ::Class_0_16E4307DCC419505_865*>>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::Class_0_16E4307DCC419505_865*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_STOP_OFFSET))(this);
	}

	::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C846407474D7238(::Class_0_16E4307DCC419505_865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_3C846407474D7238_OFFSET))(this, a1);
	}

	::System::Void Method_1_B232DF8FAA17CDA6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_B232DF8FAA17CDA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Void Method_1_11F642D46FF67A3B(::RPG::Client::ChatMessageData* a1, ::Class_0_16E4307DCC419505_865* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_11F642D46FF67A3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_1_0B2ACA533259B73D(::Class_0_16E4307DCC419505_865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_0B2ACA533259B73D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2F834EEA559A3C42(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_9DB8CECD03D9FBBA_METHOD_1_2F834EEA559A3C42_OFFSET))(this, a1);
	}
};
