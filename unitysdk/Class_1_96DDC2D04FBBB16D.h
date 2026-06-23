#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_421;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x10232330)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_518CC3405E8EB087_OFFSET UNITYSDK_OFFSET(0x10232550)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_1_OFFSET UNITYSDK_OFFSET(0x102320F0)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_OFFSET UNITYSDK_OFFSET(0x10231EB0)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x10231D20)
#define CLASS_1_96DDC2D04FBBB16D_METHOD_1_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x10231A20)
#define CLASS_1_96DDC2D04FBBB16D__CTOR_OFFSET UNITYSDK_OFFSET(0x10231920)

inline static constexpr unsigned int Class_1_96DDC2D04FBBB16D_TypeDefinitionIndex = 68227;

class Class_1_96DDC2D04FBBB16D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_421*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_421*>* Field_1_1; // 0x18
	::Class_5_FCAF801AC482D3B5* Field_1_0; // 0x20

	::System::Void _ctor(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_1_883F1F4D8BD8E582(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_883F1F4D8BD8E582_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_883F1F4D8BD8E582_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_421* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_421*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_518CC3405E8EB087(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_96DDC2D04FBBB16D_METHOD_1_518CC3405E8EB087_OFFSET))(this, a1);
	}
};
