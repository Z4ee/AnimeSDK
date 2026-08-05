#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_CF36D1B6F6CD4F8B;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_METHOD_1_059283DA7151F2E4_OFFSET UNITYSDK_OFFSET(0x12BBA8A0)
#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_METHOD_1_D106E07823D41800_OFFSET UNITYSDK_OFFSET(0x12BBAA90)
#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBA890)

inline static constexpr unsigned int Class_1_6998F362728D4D12_Class_1_2382BB2F65034E69_TypeDefinitionIndex = 60552;

class Class_1_6998F362728D4D12_Class_1_2382BB2F65034E69 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_4; // 0x20
	::Class_1_CF36D1B6F6CD4F8B* Field_1_5; // 0x28
	::System::Action_1<::System::Int32>* Field_1_11; // 0x30
	::System::UInt32 Field_1_7; // 0x38
	::System::UInt32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_059283DA7151F2E4(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_METHOD_1_059283DA7151F2E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D106E07823D41800(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_METHOD_1_D106E07823D41800_OFFSET))(this, a1);
	}
};
