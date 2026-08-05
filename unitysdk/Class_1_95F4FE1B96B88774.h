#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZipLineHintChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_95F4FE1B96B88774_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BA2A40)
#define CLASS_1_95F4FE1B96B88774_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x18BA34F0)
#define CLASS_1_95F4FE1B96B88774_METHOD_1_41592CC4B0CDF875_OFFSET UNITYSDK_OFFSET(0x18BA3130)
#define CLASS_1_95F4FE1B96B88774_METHOD_1_4E5B14022A9C18D0_OFFSET UNITYSDK_OFFSET(0x18BA31C0)
#define CLASS_1_95F4FE1B96B88774_METHOD_1_B2BAF4B07C85A457_OFFSET UNITYSDK_OFFSET(0x18BA3340)
#define CLASS_1_95F4FE1B96B88774__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA3050)

inline static constexpr unsigned int Class_1_95F4FE1B96B88774_TypeDefinitionIndex = 73367;

class Class_1_95F4FE1B96B88774 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::MoleMole::UIZipLineHintChildWindowController*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIZipLineHintChildWindowController*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774_DISPOSE_OFFSET))(this);
	}

	::MoleMole::UIZipLineHintChildWindowController* Method_1_41592CC4B0CDF875()
	{
		return ((::MoleMole::UIZipLineHintChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774_METHOD_1_41592CC4B0CDF875_OFFSET))(this);
	}

	::System::Void Method_1_4E5B14022A9C18D0(::System::UInt32 a1, ::MoleMole::UIZipLineHintChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIZipLineHintChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774_METHOD_1_4E5B14022A9C18D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2BAF4B07C85A457(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774_METHOD_1_B2BAF4B07C85A457_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95F4FE1B96B88774_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}
};
