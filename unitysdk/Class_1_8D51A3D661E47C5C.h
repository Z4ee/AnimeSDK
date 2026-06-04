#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1213;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_8D51A3D661E47C5C_METHOD_1_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x14501CE0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x145018F0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x14500FA0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_7ED03BD5980B3B63_OFFSET UNITYSDK_OFFSET(0x145016F0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_AA7D99BFD4730824_OFFSET UNITYSDK_OFFSET(0x14501AE0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_B232DF8FAA17CDA6_OFFSET UNITYSDK_OFFSET(0x145014E0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_D1830868701D547A_OFFSET UNITYSDK_OFFSET(0x145010F0)
#define CLASS_1_8D51A3D661E47C5C_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x14500EB0)
#define CLASS_1_8D51A3D661E47C5C_START_OFFSET UNITYSDK_OFFSET(0x14500CC0)
#define CLASS_1_8D51A3D661E47C5C_STOP_OFFSET UNITYSDK_OFFSET(0x14500D60)
#define CLASS_1_8D51A3D661E47C5C__CTOR_OFFSET UNITYSDK_OFFSET(0x14501D30)

inline static constexpr unsigned int Class_1_8D51A3D661E47C5C_TypeDefinitionIndex = 73739;

class Class_1_8D51A3D661E47C5C : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::RPG::Client::ChatMessageData*, ::Class_0_16E4307DCC419505_1213*>>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1213* Field_1_1; // 0x18
	::RPG::Client::UIController* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::Class_0_16E4307DCC419505_1213*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_STOP_OFFSET))(this);
	}

	::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_1213* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1213*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C846407474D7238(::Class_0_16E4307DCC419505_1213* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1213*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_3C846407474D7238_OFFSET))(this, a1);
	}

	::System::Void Method_1_B232DF8FAA17CDA6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_B232DF8FAA17CDA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Void Method_1_AA7D99BFD4730824(::RPG::Client::ChatMessageData* a1, ::Class_0_16E4307DCC419505_1213* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::Class_0_16E4307DCC419505_1213*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_AA7D99BFD4730824_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_1_D1830868701D547A(::Class_0_16E4307DCC419505_1213* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1213*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_D1830868701D547A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7ED03BD5980B3B63(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_8D51A3D661E47C5C_METHOD_1_7ED03BD5980B3B63_OFFSET))(this, a1);
	}
};
