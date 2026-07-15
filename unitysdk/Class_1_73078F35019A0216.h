#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
class Class_2_87F9839A308D3BC3;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_73078F35019A0216_METHOD_1_4053E3F9F429CA86_1_OFFSET UNITYSDK_OFFSET(0x1B280880)
#define CLASS_1_73078F35019A0216_METHOD_1_4053E3F9F429CA86_OFFSET UNITYSDK_OFFSET(0x1B26E4F0)
#define CLASS_1_73078F35019A0216_METHOD_1_707CBBF03337EFF7_OFFSET UNITYSDK_OFFSET(0x1B280650)
#define CLASS_1_73078F35019A0216_METHOD_1_83144F56A9B0C10F_OFFSET UNITYSDK_OFFSET(0x1B280420)
#define CLASS_1_73078F35019A0216_METHOD_1_BD4BE10C2036A781_OFFSET UNITYSDK_OFFSET(0x1B280260)
#define CLASS_1_73078F35019A0216_METHOD_1_FFE8006EE5A4CCE2_OFFSET UNITYSDK_OFFSET(0x1B25E8E0)

inline static constexpr unsigned int Class_1_73078F35019A0216_TypeDefinitionIndex = 10471;

class Class_1_73078F35019A0216 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_1_BD4BE10C2036A781(::System::String* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_BD4BE10C2036A781_OFFSET))(a1);
	}

	static ::System::Byte Method_1_FFE8006EE5A4CCE2(::System::String* a1, ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Byte(*)(::System::String*, ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_FFE8006EE5A4CCE2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_83144F56A9B0C10F(::System::Boolean a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>>*& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_83144F56A9B0C10F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_707CBBF03337EFF7(::System::Boolean a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>>*& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_707CBBF03337EFF7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4053E3F9F429CA86(::System::Boolean a1, ::System::String* a2, ::Class_2_238EB93629797DE5*& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Class_2_238EB93629797DE5*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_4053E3F9F429CA86_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4053E3F9F429CA86_1(::System::Boolean a1, ::System::String* a2, ::Class_2_87F9839A308D3BC3*& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Class_2_87F9839A308D3BC3*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73078F35019A0216_METHOD_1_4053E3F9F429CA86_1_OFFSET))(a1, a2, a3, a4);
	}
};
