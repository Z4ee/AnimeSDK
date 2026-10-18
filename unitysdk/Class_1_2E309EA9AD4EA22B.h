#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1503;
class Class_1_1294FEF8E985635C;
class Class_1_1C6113FB5D261D7F_1;
class Class_1_463CFCB207769552;
class Class_1_50B9361B97BF6694;
class Class_1_7B5BC5F7531D3B01_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2E309EA9AD4EA22B_METHOD_1_7CF99EB9127BD280_OFFSET UNITYSDK_OFFSET(0xC7645F0)
#define CLASS_1_2E309EA9AD4EA22B_METHOD_1_F65E0121AB91D7A2_OFFSET UNITYSDK_OFFSET(0xC7647B0)
#define CLASS_1_2E309EA9AD4EA22B__CTOR_OFFSET UNITYSDK_OFFSET(0xC7645E0)

inline static constexpr unsigned int Class_1_2E309EA9AD4EA22B_TypeDefinitionIndex = 79685;

class Class_1_2E309EA9AD4EA22B : public ::System::Object
{
public:
	::Class_1_7B5BC5F7531D3B01_1* IIDIJLNGJNM; // 0x10
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x18
	::Class_1_463CFCB207769552* LIOJKFIGGIJ; // 0x20

	::System::Void _ctor(::Class_1_1294FEF8E985635C* a1, ::Class_1_463CFCB207769552* a2, ::Class_1_7B5BC5F7531D3B01_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*, ::Class_1_463CFCB207769552*, ::Class_1_7B5BC5F7531D3B01_1*))((::PBYTE)hIl2Cpp + CLASS_1_2E309EA9AD4EA22B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_50B9361B97BF6694* Method_1_7CF99EB9127BD280(::System::UInt32 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::Class_1_50B9361B97BF6694*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E309EA9AD4EA22B_METHOD_1_7CF99EB9127BD280_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* Method_1_F65E0121AB91D7A2(::System::Collections::Generic::List_1<::Class_1_1C6113FB5D261D7F_1*>* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1C6113FB5D261D7F_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E309EA9AD4EA22B_METHOD_1_F65E0121AB91D7A2_OFFSET))(this, a1);
	}
};
