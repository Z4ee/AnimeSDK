#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04089E9105CCB96A;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_2B4C9D5EFCB958DD_GET_USING_OFFSET UNITYSDK_OFFSET(0x1362CF20)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x1362CA80)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_1169E58CBC52AB21_OFFSET UNITYSDK_OFFSET(0x1362C670)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_3D0FFC5F187D7A71_OFFSET UNITYSDK_OFFSET(0x1362C710)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_7EC6FAD1BBD9A469_OFFSET UNITYSDK_OFFSET(0x1362C0E0)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_85134B7B20E1588A_OFFSET UNITYSDK_OFFSET(0x1362C040)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_A2F3FEB30B425887_OFFSET UNITYSDK_OFFSET(0x1362C090)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_CD4A6532B8C779AA_OFFSET UNITYSDK_OFFSET(0x1362CF60)
#define CLASS_1_2B4C9D5EFCB958DD_SET_USING_OFFSET UNITYSDK_OFFSET(0x1362CF30)
#define CLASS_1_2B4C9D5EFCB958DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1362D050)

inline static constexpr unsigned int Class_1_2B4C9D5EFCB958DD_TypeDefinitionIndex = 68214;

class Class_1_2B4C9D5EFCB958DD : public ::System::Object
{
public:
	::Class_1_04089E9105CCB96A* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean _Using_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85134B7B20E1588A(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_85134B7B20E1588A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2F3FEB30B425887()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_A2F3FEB30B425887_OFFSET))(this);
	}

	::System::Void Method_1_1169E58CBC52AB21(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_1169E58CBC52AB21_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3D0FFC5F187D7A71()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_3D0FFC5F187D7A71_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::System::Boolean get_Using()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_GET_USING_OFFSET))(this);
	}

	::System::Void set_Using(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_SET_USING_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7EC6FAD1BBD9A469()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_7EC6FAD1BBD9A469_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_CD4A6532B8C779AA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_CD4A6532B8C779AA_OFFSET))(this);
	}
};
