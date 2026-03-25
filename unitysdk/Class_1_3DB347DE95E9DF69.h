#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_3DB347DE95E9DF69_METHOD_1_3378A9867316200B_OFFSET UNITYSDK_OFFSET(0x18317B30)
#define CLASS_1_3DB347DE95E9DF69_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x18317940)
#define CLASS_1_3DB347DE95E9DF69_METHOD_1_D667E8718F971868_OFFSET UNITYSDK_OFFSET(0x18317D70)
#define CLASS_1_3DB347DE95E9DF69_METHOD_1_D76FFCBCE49D064B_OFFSET UNITYSDK_OFFSET(0x18317960)
#define CLASS_1_3DB347DE95E9DF69_METHOD_1_DD0B48537322A17B_OFFSET UNITYSDK_OFFSET(0x18317C00)
#define CLASS_1_3DB347DE95E9DF69_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x18317950)
#define CLASS_1_3DB347DE95E9DF69__CTOR_OFFSET UNITYSDK_OFFSET(0x183178B0)

inline static constexpr unsigned int Class_1_3DB347DE95E9DF69_TypeDefinitionIndex = 9471;

class Class_1_3DB347DE95E9DF69 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<::System::Byte>*>*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D76FFCBCE49D064B(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_D76FFCBCE49D064B_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_3378A9867316200B(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_3378A9867316200B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD0B48537322A17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_DD0B48537322A17B_OFFSET))(this);
	}

	::System::Boolean Method_1_D667E8718F971868(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3DB347DE95E9DF69_METHOD_1_D667E8718F971868_OFFSET))(this, a1);
	}
};
