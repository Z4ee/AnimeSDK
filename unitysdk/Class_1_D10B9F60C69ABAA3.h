#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GlobalDispatchData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D10B9F60C69ABAA3_METHOD_1_B4588F7318AA605B_OFFSET UNITYSDK_OFFSET(0xBC9EC50)
#define CLASS_1_D10B9F60C69ABAA3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC9ED00)
#define CLASS_1_D10B9F60C69ABAA3_METHOD_1_DB91129DD5DFDB1B_OFFSET UNITYSDK_OFFSET(0xBC9ED40)
#define CLASS_1_D10B9F60C69ABAA3__CTOR_OFFSET UNITYSDK_OFFSET(0xBC9EF60)

inline static constexpr unsigned int Class_1_D10B9F60C69ABAA3_TypeDefinitionIndex = 69308;

class Class_1_D10B9F60C69ABAA3 : public ::System::Object
{
public:
	::System::Int32 JPPMOFCKEJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_B4588F7318AA605B(::RPG::Client::GlobalDispatchData* a1, ::System::Action* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::GlobalDispatchData*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3_METHOD_1_B4588F7318AA605B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DB91129DD5DFDB1B(::RPG::Client::GlobalDispatchData* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_D10B9F60C69ABAA3_METHOD_1_DB91129DD5DFDB1B_OFFSET))(this, a1, a2);
	}
};
