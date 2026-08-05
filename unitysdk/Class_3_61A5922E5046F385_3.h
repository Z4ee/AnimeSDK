#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_6F8A99E32D870A94.h"
#include "unitysdk/Enum_3_C9027D259F060A66.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Struct_2_395B739A1AC58399_4.h"
#include "unitysdk/Struct_2_5060F38EC3D9F5D5.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

class Class_1_50E88D52C3691096;
class Class_1_8289F2785D9AA990;
class Class_2_2F03388F637FD9EB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_3_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14953910)
#define CLASS_3_61A5922E5046F385_3_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14953C10)
#define CLASS_3_61A5922E5046F385_3_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14953B90)
#define CLASS_3_61A5922E5046F385_3_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x14953CA0)
#define CLASS_3_61A5922E5046F385_3_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14953B70)
#define CLASS_3_61A5922E5046F385_3_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14953720)
#define CLASS_3_61A5922E5046F385_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x14953960)
#define CLASS_3_61A5922E5046F385_3__CTOR_OFFSET UNITYSDK_OFFSET(0x149539E0)

inline static constexpr unsigned int Class_3_61A5922E5046F385_3_TypeDefinitionIndex = 83351;

class Class_3_61A5922E5046F385_3 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_18 = 0x85; // 0x0
	::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2F03388F637FD9EB*>* Field_3_10; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::Class_2_2F03388F637FD9EB*>* Field_3_8; // 0x68
	::Foundation::AssetPath Field_3_9; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_4>* Field_3_15; // 0x80
	::Class_1_50E88D52C3691096* Field_3_7; // 0x88
	::Foundation::AssetPath Field_3_11; // 0x90
	::System::Collections::Generic::List_1<::Struct_2_5060F38EC3D9F5D5>* Field_3_12; // 0xA0
	::Foundation::ViewObject::SuiteInfo Field_3_19; // 0xA8
	::Enum_3_6F8A99E32D870A94 Field_3_6; // 0xB0
	::Enum_3_C9027D259F060A66 Field_3_5; // 0xB4
	::System::Boolean Field_3_13; // 0xB8
	::System::Boolean Field_3_14; // 0xB9

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_3* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385_3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_3_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
	}
};
