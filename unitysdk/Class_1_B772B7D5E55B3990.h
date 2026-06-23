#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackInteractPointChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_B772B7D5E55B3990_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13507980)
#define CLASS_1_B772B7D5E55B3990_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x13508280)
#define CLASS_1_B772B7D5E55B3990_METHOD_1_9C857A0E01A3965E_OFFSET UNITYSDK_OFFSET(0x13508110)
#define CLASS_1_B772B7D5E55B3990_METHOD_1_B85DC5C8D74700FF_OFFSET UNITYSDK_OFFSET(0x13508330)
#define CLASS_1_B772B7D5E55B3990_METHOD_1_DBD5F3ABDA54905E_OFFSET UNITYSDK_OFFSET(0x13508080)
#define CLASS_1_B772B7D5E55B3990__CTOR_OFFSET UNITYSDK_OFFSET(0x13507FA0)

inline static constexpr unsigned int Class_1_B772B7D5E55B3990_TypeDefinitionIndex = 59241;

class Class_1_B772B7D5E55B3990 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::MoleMole::UIHackInteractPointChildWindowController*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990_DISPOSE_OFFSET))(this);
	}

	::MoleMole::UIHackInteractPointChildWindowController* Method_1_DBD5F3ABDA54905E()
	{
		return ((::MoleMole::UIHackInteractPointChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990_METHOD_1_DBD5F3ABDA54905E_OFFSET))(this);
	}

	::System::Void Method_1_9C857A0E01A3965E(::System::UInt32 a1, ::MoleMole::UIHackInteractPointChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990_METHOD_1_9C857A0E01A3965E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Void Method_1_B85DC5C8D74700FF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B772B7D5E55B3990_METHOD_1_B85DC5C8D74700FF_OFFSET))(this, a1);
	}
};
