#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B5881DC09EA38D1B_Class_1_CB67290AAF1F561B;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_B5881DC09EA38D1B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8E4AA0)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_3E8D097DEC18D06B_OFFSET UNITYSDK_OFFSET(0x1C8E4C90)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_53252BBF27F9581D_OFFSET UNITYSDK_OFFSET(0x1C8E53E0)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_625B96B1E6C6C5C1_1_OFFSET UNITYSDK_OFFSET(0x1C8E5580)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x1C8E5510)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_98DD3B5AF654DBFC_OFFSET UNITYSDK_OFFSET(0x1C8E5210)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x1C8E5030)
#define CLASS_1_B5881DC09EA38D1B_METHOD_1_C426F75F38E0B6D1_OFFSET UNITYSDK_OFFSET(0x1C8E50F0)
#define CLASS_1_B5881DC09EA38D1B_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8E4BA0)
#define CLASS_1_B5881DC09EA38D1B_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8E4C50)
#define CLASS_1_B5881DC09EA38D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E55E0)

inline static constexpr unsigned int Class_1_B5881DC09EA38D1B_TypeDefinitionIndex = 43295;

class Class_1_B5881DC09EA38D1B : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::UInt32>* IIEMHLCPMOA; // 0x10
	::RPG::PoolList_1<::Class_1_B5881DC09EA38D1B_Class_1_CB67290AAF1F561B*>* IEDCPLLIBHO; // 0x18
	::System::Int32 MPDOECPLMMP; // 0x20
	::System::Single JBJFDLGCJNG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_3E8D097DEC18D06B(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_3E8D097DEC18D06B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Boolean Method_1_C426F75F38E0B6D1(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_C426F75F38E0B6D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_53252BBF27F9581D(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_53252BBF27F9581D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_625B96B1E6C6C5C1_1_OFFSET))(this, a1);
	}

	::Class_1_B5881DC09EA38D1B_Class_1_CB67290AAF1F561B* Method_1_98DD3B5AF654DBFC(::System::UInt32 a1)
	{
		return ((::Class_1_B5881DC09EA38D1B_Class_1_CB67290AAF1F561B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5881DC09EA38D1B_METHOD_1_98DD3B5AF654DBFC_OFFSET))(this, a1);
	}
};
