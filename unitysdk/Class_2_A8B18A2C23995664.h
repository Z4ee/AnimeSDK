#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_23.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A8B18A2C23995664_METHOD_2_5760FE1808AFABB7_OFFSET UNITYSDK_OFFSET(0x134C8E70)
#define CLASS_2_A8B18A2C23995664_METHOD_2_733CA18BFB9A2EE1_OFFSET UNITYSDK_OFFSET(0x134C8CD0)
#define CLASS_2_A8B18A2C23995664_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x134C8E80)
#define CLASS_2_A8B18A2C23995664_METHOD_2_AAE2768E79420046_OFFSET UNITYSDK_OFFSET(0x134C8CE0)
#define CLASS_2_A8B18A2C23995664_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x134C8E90)
#define CLASS_2_A8B18A2C23995664_METHOD_2_D543C6723125367E_OFFSET UNITYSDK_OFFSET(0x134C8CC0)
#define CLASS_2_A8B18A2C23995664_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x134C8E60)
#define CLASS_2_A8B18A2C23995664__CTOR_OFFSET UNITYSDK_OFFSET(0x134C8BC0)

inline static constexpr unsigned int Class_2_A8B18A2C23995664_TypeDefinitionIndex = 67893;

class Class_2_A8B18A2C23995664 : public ::Class_1_43BD383C98B4C0C5_23
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D543C6723125367E(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_D543C6723125367E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_2_733CA18BFB9A2EE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_733CA18BFB9A2EE1_OFFSET))(this);
	}

	static ::Class_2_A8B18A2C23995664* Method_2_AAE2768E79420046()
	{
		return ((::Class_2_A8B18A2C23995664*(*)())((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_AAE2768E79420046_OFFSET))();
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_5760FE1808AFABB7(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_5760FE1808AFABB7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A8B18A2C23995664_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
