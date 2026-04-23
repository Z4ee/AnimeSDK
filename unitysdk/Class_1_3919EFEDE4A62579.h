#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1442FB89FB5D457F;
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3919EFEDE4A62579_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7DFDF0)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_0169F0DBABDADCA6_OFFSET UNITYSDK_OFFSET(0xB7E06F0)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_0683AD9D2EB89411_OFFSET UNITYSDK_OFFSET(0xB7E0910)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_179EB93806AEB469_OFFSET UNITYSDK_OFFSET(0xB7E0690)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xB7E0860)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_4AEE5A4C943256DD_OFFSET UNITYSDK_OFFSET(0xB7DFF50)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0xB7E0120)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_692FCB41B5171216_OFFSET UNITYSDK_OFFSET(0xB7E02F0)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_9B1F49A787BDD497_OFFSET UNITYSDK_OFFSET(0xB7E0600)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xB7E09C0)
#define CLASS_1_3919EFEDE4A62579_METHOD_1_AC7828729159F6C6_OFFSET UNITYSDK_OFFSET(0xB7E01A0)
#define CLASS_1_3919EFEDE4A62579__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E0A20)

inline static constexpr unsigned int Class_1_3919EFEDE4A62579_TypeDefinitionIndex = 72378;

class Class_1_3919EFEDE4A62579 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_2_1442FB89FB5D457F*>* Field_1_1; // 0x18
	::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::PropOptionTrigger_ButtonParam*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_2; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Boolean Field_1_0; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4AEE5A4C943256DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_4AEE5A4C943256DD_OFFSET))(this);
	}

	::System::Void Method_1_AC7828729159F6C6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_AC7828729159F6C6_OFFSET))(this);
	}

	::System::Void Method_1_692FCB41B5171216(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_692FCB41B5171216_OFFSET))(this, a1);
	}

	::System::Void Method_1_0169F0DBABDADCA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_0169F0DBABDADCA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C8305164A0C9B06(::Class_2_1442FB89FB5D457F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1442FB89FB5D457F*))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0683AD9D2EB89411(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_0683AD9D2EB89411_OFFSET))(this, a1);
	}

	::System::Void Method_1_179EB93806AEB469(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_179EB93806AEB469_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_9B1F49A787BDD497(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_9B1F49A787BDD497_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3919EFEDE4A62579_METHOD_1_674F73509924BD16_OFFSET))(this);
	}
};
