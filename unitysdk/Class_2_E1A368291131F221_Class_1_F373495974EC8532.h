#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81D34D116310A358;
class Class_2_E1A368291131F221;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532_METHOD_1_3F8713A217725689_OFFSET UNITYSDK_OFFSET(0x15784250)
#define CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x157842D0)
#define CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532__CTOR_OFFSET UNITYSDK_OFFSET(0x15784240)

inline static constexpr unsigned int Class_2_E1A368291131F221_Class_1_F373495974EC8532_TypeDefinitionIndex = 79442;

class Class_2_E1A368291131F221_Class_1_F373495974EC8532 : public ::System::Object
{
public:
	::Class_2_E1A368291131F221* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F8713A217725689(::Class_1_27F786FF2A30778C<::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532_METHOD_1_3F8713A217725689_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1A368291131F221_CLASS_1_F373495974EC8532_METHOD_1_8FD0952225841B46_OFFSET))(this);
	}
};
