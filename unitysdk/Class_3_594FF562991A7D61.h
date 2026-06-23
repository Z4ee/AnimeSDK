#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_0_16E4307DCC419505_250;
class Class_3_594FF562991A7D61_Class_2_E5203603D6C0B9BB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_594FF562991A7D61_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17741E40)
#define CLASS_3_594FF562991A7D61_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x177420A0)
#define CLASS_3_594FF562991A7D61_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17742010)
#define CLASS_3_594FF562991A7D61_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17741DD0)
#define CLASS_3_594FF562991A7D61__CCTOR_OFFSET UNITYSDK_OFFSET(0x17741E90)
#define CLASS_3_594FF562991A7D61__CTOR_OFFSET UNITYSDK_OFFSET(0x17741F10)

inline static constexpr unsigned int Class_3_594FF562991A7D61_TypeDefinitionIndex = 52072;

class Class_3_594FF562991A7D61 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x4A; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_250*>* Field_3_0; // 0x48
	::Class_3_594FF562991A7D61_Class_2_E5203603D6C0B9BB* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_594FF562991A7D61* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_594FF562991A7D61*(*)())((::PBYTE)hIl2Cpp + CLASS_3_594FF562991A7D61_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}
};
