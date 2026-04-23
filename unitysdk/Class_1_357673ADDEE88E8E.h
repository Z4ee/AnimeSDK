#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace RPG::Client::Promises { class IPromiseInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_357673ADDEE88E8E_Class_3_B6136C2F127116DF;

#define CLASS_1_357673ADDEE88E8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x924BC50)
#define CLASS_1_357673ADDEE88E8E_METHOD_1_5610E6A60BB08331_OFFSET UNITYSDK_OFFSET(0x924BB20)
#define CLASS_1_357673ADDEE88E8E__CTOR_OFFSET UNITYSDK_OFFSET(0x924BDC0)

inline static constexpr unsigned int Class_1_357673ADDEE88E8E_TypeDefinitionIndex = 44441;

class Class_1_357673ADDEE88E8E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::System::Action_2<::System::UInt16, ::System::Object*>*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::Promises::IPromiseInfo*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357673ADDEE88E8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5610E6A60BB08331(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_357673ADDEE88E8E_METHOD_1_5610E6A60BB08331_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357673ADDEE88E8E_DISPOSE_OFFSET))(this);
	}
};
