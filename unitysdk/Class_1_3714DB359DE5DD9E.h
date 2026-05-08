#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_1_3714DB359DE5DD9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ABAB620)
#define CLASS_1_3714DB359DE5DD9E_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1ABABAB0)
#define CLASS_1_3714DB359DE5DD9E_METHOD_1_1D8B8DEA0EF71203_OFFSET UNITYSDK_OFFSET(0x1ABAAB70)
#define CLASS_1_3714DB359DE5DD9E_METHOD_1_294D0CA719F4FA94_OFFSET UNITYSDK_OFFSET(0x1ABAAEF0)
#define CLASS_1_3714DB359DE5DD9E_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1ABAAE50)
#define CLASS_1_3714DB359DE5DD9E_METHOD_1_F429D309F55DB9F1_OFFSET UNITYSDK_OFFSET(0x1ABAB260)
#define CLASS_1_3714DB359DE5DD9E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABAB850)
#define CLASS_1_3714DB359DE5DD9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAAAB0)

inline static constexpr unsigned int Class_1_3714DB359DE5DD9E_TypeDefinitionIndex = 32338;

class Class_1_3714DB359DE5DD9E : public ::System::Object
{
public:
	::System::IO::FileStream* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21

	::System::Void _ctor(::System::IO::FileStream* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::FileStream*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D8B8DEA0EF71203(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_METHOD_1_1D8B8DEA0EF71203_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_294D0CA719F4FA94(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_METHOD_1_294D0CA719F4FA94_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F429D309F55DB9F1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int64 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_METHOD_1_F429D309F55DB9F1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714DB359DE5DD9E_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
