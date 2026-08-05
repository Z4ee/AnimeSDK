#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86AA8F306FA75018;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1549BC80)
#define CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_435A1C022CB84BC5_OFFSET UNITYSDK_OFFSET(0x1549BD90)
#define CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_7144F3D0728EC2EF_OFFSET UNITYSDK_OFFSET(0x1549BAC0)
#define CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_D8CD1E413395E05E_OFFSET UNITYSDK_OFFSET(0x1549BB00)
#define CLASS_1_78DFBCEEF7F2DCA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1549B9C0)

inline static constexpr unsigned int Class_1_78DFBCEEF7F2DCA8_TypeDefinitionIndex = 69238;

class Class_1_78DFBCEEF7F2DCA8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_86AA8F306FA75018*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_86AA8F306FA75018*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78DFBCEEF7F2DCA8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_86AA8F306FA75018*>* Method_1_7144F3D0728EC2EF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_86AA8F306FA75018*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_7144F3D0728EC2EF_OFFSET))(this);
	}

	::Class_1_86AA8F306FA75018* Method_1_D8CD1E413395E05E(::System::Int32 a1)
	{
		return ((::Class_1_86AA8F306FA75018*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_D8CD1E413395E05E_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::Class_1_86AA8F306FA75018* Method_1_435A1C022CB84BC5(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Class_1_86AA8F306FA75018*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78DFBCEEF7F2DCA8_METHOD_1_435A1C022CB84BC5_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
