#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
class Class_1_D94CA56F333E077E_1;
class Class_1_DDDB57AA67C3A9EA;
namespace System { class String; }

#define CLASS_1_FAB67B488C3BEB96_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x11A84BE0)
#define CLASS_1_FAB67B488C3BEB96_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x11A84B10)
#define CLASS_1_FAB67B488C3BEB96_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x11A84AF0)
#define CLASS_1_FAB67B488C3BEB96_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11A84B90)
#define CLASS_1_FAB67B488C3BEB96_METHOD_1_46857ED2E7A176B1_OFFSET UNITYSDK_OFFSET(0x11A84A60)
#define CLASS_1_FAB67B488C3BEB96_METHOD_1_E4046F7A68A6D5B6_OFFSET UNITYSDK_OFFSET(0x11A849D0)
#define CLASS_1_FAB67B488C3BEB96_SET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x11A84BF0)
#define CLASS_1_FAB67B488C3BEB96_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x11A84B00)
#define CLASS_1_FAB67B488C3BEB96__CTOR_OFFSET UNITYSDK_OFFSET(0x11A84A50)

inline static constexpr unsigned int Class_1_FAB67B488C3BEB96_TypeDefinitionIndex = 66480;

class Class_1_FAB67B488C3BEB96 : public ::System::Object
{
public:
	::Class_1_D94CA56F333E077E_1* Field_1_2; // 0x10
	::System::Nullable_1<::System::Int32> _DummyInversedIndex_k__BackingField; // 0x18
	::System::UInt32 _NodeID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96__CTOR_OFFSET))(this);
	}

	static ::Class_1_FAB67B488C3BEB96* Method_1_E4046F7A68A6D5B6(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::Class_1_FAB67B488C3BEB96*(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_METHOD_1_E4046F7A68A6D5B6_OFFSET))(a1);
	}

	static ::Class_1_FAB67B488C3BEB96* Method_1_46857ED2E7A176B1(::Class_1_83D980B81C9B9AFA* a1, ::System::Int32 a2)
	{
		return ((::Class_1_FAB67B488C3BEB96*(*)(::Class_1_83D980B81C9B9AFA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_METHOD_1_46857ED2E7A176B1_OFFSET))(a1, a2);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_SET_NODEID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_GET_ICONPATH_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
	}

	::System::Void set_DummyInversedIndex(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_FAB67B488C3BEB96_SET_DUMMYINVERSEDINDEX_OFFSET))(this, value);
	}
};
