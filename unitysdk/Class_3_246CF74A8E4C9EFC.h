#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_246CF74A8E4C9EFC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x158269B0)
#define CLASS_3_246CF74A8E4C9EFC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x158269E0)
#define CLASS_3_246CF74A8E4C9EFC_INVOKE_OFFSET UNITYSDK_OFFSET(0x158269A0)
#define CLASS_3_246CF74A8E4C9EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x158268B0)

inline static constexpr unsigned int Class_3_246CF74A8E4C9EFC_TypeDefinitionIndex = 74940;

class Class_3_246CF74A8E4C9EFC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_246CF74A8E4C9EFC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*))((::PBYTE)hIl2Cpp + CLASS_3_246CF74A8E4C9EFC_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_246CF74A8E4C9EFC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_246CF74A8E4C9EFC_ENDINVOKE_OFFSET))(this, a1);
	}
};
