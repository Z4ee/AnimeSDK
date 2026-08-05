#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_00AE5965E4B9C06A_Class_1_135D8DD2702CA423_Struct_2_7E5074935084DB55.h"
#include "unitysdk/System/Object.h"

class Class_3_39E7492E16896206;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_B02BA7F38B54367F_OFFSET UNITYSDK_OFFSET(0x17ED3C00)
#define CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_B4CB03FB7D110721_OFFSET UNITYSDK_OFFSET(0x17ED5B70)
#define CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x17ED8030)
#define CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECF1D0)

inline static constexpr unsigned int Class_2_00AE5965E4B9C06A_Class_1_135D8DD2702CA423_TypeDefinitionIndex = 53162;

class Class_2_00AE5965E4B9C06A_Class_1_135D8DD2702CA423 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_39E7492E16896206*>* Field_1_0; // 0x10
	::Class_2_00AE5965E4B9C06A_Class_1_135D8DD2702CA423_Struct_2_7E5074935084DB55 Field_1_7; // 0x18
	::System::Boolean Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Boolean Method_1_B4CB03FB7D110721(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_B4CB03FB7D110721_OFFSET))(this, a1);
	}

	::System::Void Method_1_B02BA7F38B54367F(::System::Collections::Generic::IList_1<::Class_3_39E7492E16896206*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_39E7492E16896206*>*))((::PBYTE)hIl2Cpp + CLASS_2_00AE5965E4B9C06A_CLASS_1_135D8DD2702CA423_METHOD_1_B02BA7F38B54367F_OFFSET))(this, a1);
	}
};
